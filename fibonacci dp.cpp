#include<bits/stdc++.h>
using namespace std;

int arr[100000];


int fibo(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(!arr[n])
    {
        arr[n]=fibo(n-1)+fibo(n-2);
    }
    return arr[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
}

