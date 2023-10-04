#include<bits/stdc++.h>
using namespace std;
#define max 1000005
#define m 1073741824

int arr[max];

void call()
{
    for(int i=1;i<=max;i++)
    {
        arr[i]=1;
    }
    for(int i=2;i<=max;i++)
    {
        for(int j=i;j<=max;j+=i)
        {
            arr[j]++;
        }
    }

}

int main()
{
    call();

    int sum=0;

    int a,b,c;

    cin>>a>>b>>c;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                (sum+=arr[i*j*k])%m;
            }
        }
    }

    cout<<sum;


}

