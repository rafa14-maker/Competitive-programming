#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(arr[0]==arr[1])cout<<arr[2]<<endl;
    else if(arr[1]==arr[2])cout<<arr[0]<<endl;
    else cout<<0<<endl;
}
