#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[105]={0};
    int frr[105]={0};
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
        frr[a]=i;
    }
    int counter=0;

    for(int i=1;i<=100;i++)
    {
        if(arr[i]>0)counter++;
    }
    if(counter<k)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=100;i++)
        {
            if(arr[i]>0)
            {
                cout<<frr[i]<<" ";
                k--;
            }
            if(k<=0)break;
        }
    }
}
