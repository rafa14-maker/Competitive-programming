#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
    int n;
    cin>>n;
    int arr[2*n+5];
    int k=n*2;
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+k);
    long long sum;
     sum=(arr[n]-arr[n-1]);
   // else sum=(arr[n+1]-arr[n]);
    cout<<sum<<endl;
    }
}
