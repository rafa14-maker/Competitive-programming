#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int frr[10];
    for(int i=0;i<10;i++)cin>>frr[i];

    int counter=10;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<10;j++)
        {
            if(frr[j]<=arr[i])
            {
                flag++;
                break;
            }
        }
       if(flag==0) counter=min(counter,arr[i]);
    }
    cout<<counter<<endl;
}
