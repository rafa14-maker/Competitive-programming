#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    int flag=0;
    if(arr[0]==5)flag++;
    if(arr[1]==5)flag++;
    if(arr[2]==7)flag++;
    if(flag==3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
