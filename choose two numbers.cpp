#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int m;
    cin>>m;
    int frr[m];
    for(int i=0;i<m;i++)cin>>frr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int k=arr[i]+frr[j],flag=0;
            for(int l=0;l<n;l++)
            {
                if(arr[l]==k)
                {
                    flag++;
                }
            }
            for(int l=0;l<m;l++)
            {
                if(frr[l]==k)
                {
                    flag++;
                }
            }
            if(flag==0)
            {
                cout<<arr[i]<<" "<<frr[j]<<endl;
                return 0;
            }
        }
    }
}
