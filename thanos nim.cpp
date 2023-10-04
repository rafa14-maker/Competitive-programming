#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    if(arr[0]==arr[n/2])cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}
