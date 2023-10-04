#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter=0;
    int k=1;
    while(k!=2)
    {
        if(counter>1e5)break;
        counter++;
        k=arr[k-1];
    }
    if(counter>1e5)cout<<"-1"<<endl;
    else cout<<counter<<endl;
}
