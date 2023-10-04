#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        while(arr[i]>0&&arr[i]%2==0)
        {
            arr[i]/=2;
            counter++;
        }
    }
    cout<<counter<<endl;
}
