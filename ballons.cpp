#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}
