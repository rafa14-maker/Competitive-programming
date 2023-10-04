#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long a=26;
    string s;
    while(n>0)
    {
        n--;
        s+=(char)((n%26)+'a');
        n/=26;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
