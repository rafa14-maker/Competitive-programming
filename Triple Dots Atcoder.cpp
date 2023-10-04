#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i<n)cout<<s[i];
        else
        {
            cout<<"..."<<endl;
            break;
        }
    }
}
