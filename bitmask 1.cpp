#include<bits/stdc++.h>

using namespace std;

int arr[]={1,2,3,4,5,6,7};

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=pow(2,n);i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(arr[j]);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
       cout<<endl;

    }
    cout<<0<<endl;
}
