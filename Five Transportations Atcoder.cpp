#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int arr[6];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    int sum=0;
    sum+=(n/arr[0])+(n%arr[0]);
    sum+=(n/arr[1])+(n%arr[1]);
    sum+=(n/arr[2])+(n%arr[2]);
    sum+=(n/arr[3])+(n%arr[3]);
    sum+=(n/arr[4])+(n%arr[4]);
    cout<<sum<<endl;
}
