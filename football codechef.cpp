#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        long long arr[n+5];
        long long m=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++)
        {
           long long a;
           cin>>a;
           m=max(m,(arr[i]*20)-(a*10));
        }
        cout<<m<<endl;
    }
}
