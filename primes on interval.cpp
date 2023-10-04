#include<bits/stdc++.h>
using namespace std;

const int N =1e6+5;

int arr[N];

void seive()
{
    for(int i=2;i*i<=N;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i;j<=N;j+=i)
            {
                arr[j]++;
            }
        }
    }
    for(int i=2;i*i<=N;i++)
    {
        int k=i,p=0;
        while(k*i<=N)
        {
            p++;
            arr[k*i]+=p;
            k*=i;
        }
    }
}

int main()
{
    seive();
    for(int i=1;i<=30;i++)
    {
        cout<<i<<" "<<arr[i]<<endl;
    }
}
