#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-')sum-=1;
        else sum+=1;
    }
    cout<<sum<<endl;
}
