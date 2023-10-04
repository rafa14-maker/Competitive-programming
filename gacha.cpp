#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<string>s;
    while(n--)
    {
        string a;
        cin>>a;
        s.insert(a);
    }
    cout<<s.size()<<endl;
}
