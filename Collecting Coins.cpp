#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int arr[3],n;
        cin>>arr[0]>>arr[1]>>arr[2];
        cin>>n;
        sort(arr,arr+3);
        int k=arr[2]-arr[0]+arr[2]-arr[1];
        n-=k;
        if(n>=0&&n%3==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
