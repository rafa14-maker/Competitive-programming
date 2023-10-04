#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int counter=0;
        int k=arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<=k)
            {
                k=arr[i];
            }
            else
            {
                counter++;
            }
        }

        cout<<counter<<endl;
    }
}
