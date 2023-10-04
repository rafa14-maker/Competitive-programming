#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;

    cin>>arr;

    int i,sum=0,n=1;

    for(i=0;i<arr.size();i++)
    {
        sum+=arr[i];

    }
  cout<<sum<<arr;
}
