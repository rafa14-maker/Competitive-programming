#include<bits/stdc++.h>
using namespace std;

int main()
{
    double vb,vs,xu,yu;
    int n;
    cin>>n>>vb>>vs;
    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];
    cin>>xu>>yu;

    double k=1e12;
    int p=0;

    for(int i=2;i<=n;i++)
    {
        double t1=sqrt((arr[i]-xu)*(arr[i]-xu)+yu*yu)/vs+arr[i]/vb;
        if(t1<=k)
        {
            k=t1;
            p=i;
        }
    }

    cout<<p<<endl;
}
