#include<bits/stdc++.h>
using namespace std;

int arr[1000005];

void call()
{
    for(int i=1;i<=10000;i++)arr[i]=i;

    for(int i=2;i<=10000;i++)
    {
        if(arr[i]==i)
        {
            for(int j=i;j<=10000;j+=i)
            {
                arr[j]-=arr[j]/i;
            }
        }
    }
}

int main()
{
 call();
 int n;
 cin>>n;
 int p=arr[n];
 cout<<arr[p]<<endl;
}
