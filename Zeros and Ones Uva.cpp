#include<bits/stdc++.h>
using namespace std;

const  int nm = 1e6+5;
int arr[nm];
int main()
{
   char s[nm];
   int flag=0;
    while(scanf("%s",&s)!=EOF)
    {
   //     puts(s);
   if(strlen(s)==0)break;
       int counter=1;
       arr[0]=1;

       for(int i=1;i<strlen(s);i++)
       {
           if(s[i]==s[i-1])
           {
               arr[i]=counter;

           }
           else
           {
               counter++;
               arr[i]=counter;
           }
       }
       int m;
      scanf("%d",&m);
      printf("Case %d:\n",++flag);
       while(m--)
       {
           int a,b;
           scanf("%d %d",&a,&b);
           if(a>b)swap(a,b);
           if(arr[a]==arr[b])printf("Yes\n");
           else printf("No\n");
       }
    }
}
