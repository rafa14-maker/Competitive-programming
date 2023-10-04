#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    int n;cin>>n;
    cin>>arr>>frr;
    int m=max(arr.size(),frr.size());

    for(int i=0;i<m;i++)
    {
        if(arr.size()>i)cout<<arr[i];
         if(frr.size()>i)cout<<frr[i];
    }
}
