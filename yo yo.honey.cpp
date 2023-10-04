#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[105]={0};
    int frr[105]={0};
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
        frr[a]=i+1;
    }
    int counter=0;
    for(int i=1;i<=100;i++)
    {
        if(arr[i]>0)counter++;
    }
    if(counter<k)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=100;i++)
        {
            if(arr[i]>0)
            {
                cout<<frr[i]<<" ";
                k--;
                if(k==0)
                {
                    return 0;
                }
            }
        }
    }
}
