#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(1)
    {
        cin>>s;
        string a=s;
        if(s=="#")break;
         if(next_permutation(s.begin(),s.end()))
         {
             cout<<s<<endl;
         }
         else cout<<"No Successor"<<endl;
     //   else cout<<s<<endl;
    }
}
