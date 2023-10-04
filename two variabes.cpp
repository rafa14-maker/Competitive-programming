#include<bits/stdc++.h>
using namespace std;

long long arr[100005];

int main()
{
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=100000;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    //for(int i=0;i<=10;i++)cout<<arr[i]<<" ";
    int t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        for(int i=1;i<=100000;i++)
        {
            if(arr[i]>=a)
            {cout<<i-1<<endl;
            break;}
        }
    }
}
