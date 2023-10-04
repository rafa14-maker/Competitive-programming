#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        int counter=9999999;
        for(int i=0;i<n;i++)
        {
           int a;
           cin>>a;
           if(m[a]!=0)
           {
               counter=min(counter,i-m[a]+1);
               m[a]=i+1;
           }
           else
           {
               m[a]=i+1;
           }
        //   cout<<m[a]<<endl;
        }
       // cout<<counter+1<<endl;
       if(counter==9999999)printf("-1\n");
       else printf("%d\n",counter+1);
    }
}
