#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,k;
        cin>>n>>k;
        if(n<k)cout<<"Bob"<<endl;
        else if(n==k)cout<<"Alice"<<endl;
        if(n>k)
        {
            if((n-k)%2==0)cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
    }
}
