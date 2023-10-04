#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,counter=0;
    cin>>n;
    string s;
    cin>>s;

     for(int i=0;i<s.size();i++)
     {
         if(i+1<n&&s[i]=='1'&&s[i]==s[i+1])
         {
             cout<<"NO"<<endl;
             return 0;
         }
         if(s[i]=='1')counter++;
     }

    // int flag=0;

     for(int i=0;i<s.size();i++)
     {
         if(i+1<s.size()&&i-1>=0&&s[i-1]=='0'&&s[i]=='0'&&s[i+1]=='0')
         {
             cout<<"NO"<<endl;
             return 0;
         }
         else if(i==0&&i+1<s.size()&&s[i]=='0'&&s[i]==s[i+1]=='0')
         {
               cout<<"NO"<<endl;
             return 0;
         }
         else if(i==s.size()-1&&i-1>=0&&s[i]=='0'&&s[i]==s[i-1]=='0')
         {
              cout<<"NO"<<endl;
             return 0;
         }
     }

     if(n%2==1)
     {
         if((n/2)+1==counter)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
     else
     {
         if(n/2==counter)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }

}
