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
        string s,r;
        cin>>s>>r;


       // string arr=s,frr=r;
      //  sort(s.begin(),s.end());
      //  sort(r.begin(),r.end());
       // int arr[30]={0};
       //  int frr[30]={0};
         int flag=0;

         for(int i=0;i<n;i++)
         {
             if(s[i]==r[i])s[i]='9',r[i]='9';
         }

         for(int i=0;i<n;i++)
         {
             if(s[i]!='9'){
           for(int j=0;j<n;j++)
           {
               if(r[i]!='9'){
               string arr=s,frr=r;
               swap(arr[i],frr[j]);
               if(arr==frr)flag++;
           }
         }
             }
         }
         if(flag>0)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;


    }
}
