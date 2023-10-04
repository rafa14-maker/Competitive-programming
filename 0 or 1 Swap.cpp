#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],frr[i]=arr[i];
    sort(frr,frr+n);
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=frr[i])counter++;
    }
    if(counter==2||counter==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
