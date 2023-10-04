#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int frr[N]={0};
    int krr[N]={0};
    for(int i=0;i<n;i++)
    {
        if(i%2==0)frr[arr[i]]++;
        else krr[arr[i]]++;
    }
    int counter=0,a=0,fre1=0;
    for(int i=0;i<N;i++)
    {
        if(frr[i]>counter)
        {
            counter=frr[i];
            fre1=frr[i];
            a=i;
        }
    }
    counter=0;
    int b=0,fre2=0;
    for(int i=0;i<N;i++)
    {
        if(krr[i]>counter)
        {
            counter=krr[i];
            fre2=0;
            b=i;
        }
    }
    counter=0;
    if(a!=b){
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]!=a)counter++;
        }
        else
        {
            if(arr[i]!=b)counter++;
        }
    }}
    else
    {
        int c=0,d=0,flag=9999999;
        for(int i=0;i<N;i++)
        {
            if(n-frr[i]<flag&&i!=a)
            {
                flag=frr[i];
                c=i;
            }
        }
        flag=9999999;
         for(int i=0;i<N;i++)
        {
            if(n-krr[i]<flag&&i!=b)
            {
                flag=krr[i];
                d=i;
            }
        }
    }
   // cout<<a<<" "<<b<<endl;
    cout<<counter<<endl;
}
