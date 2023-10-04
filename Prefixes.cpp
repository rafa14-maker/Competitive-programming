#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
string s;
cin>>s;
int counter=0;
   for(int i=0;i<s.size();i+=2)
    {
         if(s[i]==s[i+1])
         {
             counter++;
             if(s[i]=='a')s[i+1]='b';
             else if(s[i]=='b')s[i+1]='a';
         }
    }
    cout<<counter<<endl;
    cout<<s<<endl;
}
