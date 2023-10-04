#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int sum=arr[i];
            for(int j=i+1;j<n&&j<i+k;j++)
            {
                sum+=arr[j];
            }
            v.push_back(sum);
        }
        sort(v.begin(),v.end());
        int counter=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==v[0])counter++;
            else break;
        }
        cout<<counter<<endl;
    }
}
