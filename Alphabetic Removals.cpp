#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
   vector<int>v[30];
   for(int i=0;i<n;i++)
   {
       int p= s[i]-'a';
       v[p].push_back(i);
   }

   for(int i=0;i<30;i++)
   {
       if(k==0)break;
       for(int j=0;j<v[i].size();j++)
       {
           int p=v[i][j];
           s[p]='9';
           k--;
           if(k<=0)break;
       }
   }
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!='9')cout<<s[i];
   }
}
