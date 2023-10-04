#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        long long counter=0;
        cin>>n>>k;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        while(k--){
                counter=0;
                long long a;
        cin>>a;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<a)
            {
                counter++;
                a=2*(a-arr[i]);
            }
        }
        cout<<counter<<endl;}
    }
}
