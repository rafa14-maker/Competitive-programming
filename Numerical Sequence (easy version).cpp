#include<bits/stdc++.h>
using namespace std;

long long arr[1000005];

int main()
{
    for(int i=1;i<=100000;i++)
    {
        arr[i]+=(arr[i-1]+i);
    }
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        for(int i=1;i<=100000;i++)
        {
            if(arr[i]>=n&&arr[i]<=55)
            {
                cout<<n-arr[i-1]<<endl;
                break;
            }
            else
            {
                cout<<<<endl;
                break;
            }
        }
    }
}
