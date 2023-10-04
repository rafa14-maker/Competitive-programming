#include<bits/stdc++.h>
using namespace std;

long long max1(long long a,long long b)
{
    if(a>=b)return a;
    else return b;
}

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long frr[n+5]={0};
    long long counter=1;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(i+1<n&&arr[i]+1==arr[i+1])
        {

            frr[i]=counter;
            sum=max1(counter,sum);
            counter++;
        }
        else
        {
          //  counter=1;
            frr[i]=counter;
            sum=max1(sum,counter);
            counter=1;
        }
    }

    //for(int i=0;i<n;i++)cout<<frr[i]<<" ";

    for(int i=n-1;i>=0;i--)
    {
        if(i-1>=0&&arr[i]==arr[i-1]+1)
        {
            frr[i-1]=max1(frr[i-1],frr[i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(i+1<n&&i-1>=0&&arr[i-1]+1==arr[i+1])
        {
          if(arr[i+1]!=arr[i]&&arr[i-1]!=arr[i])  sum=max1(sum,frr[i-1]+frr[i+1]);
          else  sum=max1(sum,frr[i-1]+frr[i+1]-1);
        }
    }
    cout<<sum<<endl;
}
