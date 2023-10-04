#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr>>frr;
    reverse(frr.begin(),frr.end());
    if(arr==frr)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
