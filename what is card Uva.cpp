#include<bits/stdc++.h>
using namespace std;

bool done[52];

int main()
{
    int q;
    cin>>q;
    int flag=0;
    while(q--)
    {
       char arr[52][3];

       memset(done,false,sizeof done);

       for(int i=0;i<52;i++)
       {
           scanf("%s",&arr[i]);
       }
       int y=0;
       int pos=26;

       for(int i=0;i<3;i++)
       {
           int x = (arr[pos][0]>='2'&&arr[pos][0]<='9'?arr[pos][0]-'0':10);
           y+=x;
           done[pos]=true;
           pos--;
           for(int j=0;j<10-x;j++)
           {
               done[pos]=true;
               pos--;
           }
       }
       printf("Case %d: ",++flag);
       for(int i=0,j=0;;i++)
       {
           if(!done[i])j++;
           if(j==y)
           {
               puts(arr[i]);
               break;
           }
       }
    }
}
