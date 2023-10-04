#include<bits/stdc++.h>
using namespace std;

 void solve()
 {
     int n;
     cin>>n;
     string s;
     cin>>s;
     int c=0,kp=0,pk=0;
     if(s[0]=='1')c=1;
    for(int i=0;i<n;i+=2)
    {
         if(i+1<n&&(s[i]!='0'||s[i+1]!='1'))
         {
             pk++;
             //i++;
         }
           if(i+1<n&&(s[i]!='1'||s[i+1]!='0'))
         {
             kp++;
             //i++;
         }
    }
    cout<<min(kp,pk)<<endl;
 }

 int main()
 {
     int q;
     cin>>q;
     while(q--)solve();
 }
