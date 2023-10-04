#include<bits/stdc++.h>
using namespace std;

int n;
int kp;

int arr[105];
int frr[100005];

void f(int i,int j,int idx)
{
    if(idx==kp)
    {
        check();
    }

    arr[i]++;
    frr[idx]=1;
    if(j==n-1)f(i+1,1,idx+1);
    else f(i,j+1,idx+1);
    arr[i]--;

    arr[j]++;
    frr[idx]= -1;
    if(j==n-1)f(i+1,1,idx+1);
    else f(i,j+1,idx+1);
    arr[j]--;

    frr[idx]=0;
    if(j==n-1)f(i+1,1,idx+1);
    else f(i,j+1,idx+1);
}

void solve()
{
   cin>>n;
   kp=(n*(n/2))+1;



}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

