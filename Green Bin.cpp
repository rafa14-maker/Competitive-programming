#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sort(arr[i].begin(),arr[i].end());
    }
    sort(arr.begin(),arr.end());
    long long int k=1,sum=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            k++;
            if(i==n-2)
            {
                sum+=(k*(k-1))/2;
            }
        }
        else
        {
            sum+=(k*(k-1))/2;
            k=1;
        }
    }
    cout<<sum<<endl;
}
