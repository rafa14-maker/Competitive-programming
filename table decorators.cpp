#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[3],a,c,b;
    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr,arr+3);

    if((arr[0]+arr[1])*2<arr[2])
    {
        cout<<arr[0]+arr[1];
    }
    else
    {
        cout<<(arr[0]+arr[1]+arr[2])/3;
    }

  }
