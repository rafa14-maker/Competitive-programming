#include<bits/stdc++.h>
using namespace std;

int arr[1000];

void order()
{
    for(int i=0;i<=1000;i++)
    {
        arr[i]=1;
    }

    for(int i=2;i<=1000;i++)
    {
        for(int j=i;j<=1000;j+=i)
        {
            arr[j]++;
        }
    }
}

int main()
{
    order();

    for(int i=1;i<=1000;i++)
    {
        cout<<arr[i]<<" ";
    }
}
