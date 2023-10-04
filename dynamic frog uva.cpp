#include<bits/stdc++.h>
using namespace std;

int n;
int arr[150];
bool hit[150];
bool small[150];
int test;

int f()
{
    int mnd=arr[0];
    for(int i=0;i<n;i++)
    {
        hit[i]=true;
        if(!small[i+1])
        {
            mnd=max(mnd,arr[i+1]-arr[i]);
        }
        else
        {
            mnd=max(mnd,arr[i+2]-arr[i]);
            i++;
        }
    }
    for(int i=n;i>0;i--)
    {
        if(!hit[i-1]||!small[i-1])
        {
            mnd=max(mnd,arr[i]-arr[i-1]);
        }
        else
        {
            mnd=max(mnd,arr[i]-arr[i-2]);
            i--;
        }
    }
    return mnd;
}

void solve()
{
    int d;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        char c,k;
        int a;
        cin>>c>>k>>a;
        if(c=='S')small[i]=true;
        else small[i]=false;
        arr[i]=a;
        hit[i]=false;
    }
    small[n]=false;
    arr[n]=d;
    hit[n]=false;

    printf("Case %d: %d\n",++test,f());
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
