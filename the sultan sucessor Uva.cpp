#include<bits/stdc++.h>
using namespace std;

int arr[10][10],row[8];
int mn;

bool check(int r,int c)
{
    for(int i=0;i<c;i++)
    {
        if(row[i]==r||(abs(c-i)==abs(row[i]-r)))return false;
    }
    return true;
}


int cal(int row[8])
{
    int sum=0;
    for(int i=0;i<8;i++)
    {
        int a=row[i];
        sum+=arr[i][a];
    }
    return sum;
}

void f(int k)
{
    if(k==8)
    {
        mn=max(cal(row),mn);
        return ;
    }

    for(int i=0;i<8;i++)
    {
        if(check(i,k))
        {
            row[k]=i;
            f(k+1);
        }
    }
}

void solve()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>arr[i][j];
        }
    }
    mn=0;
    f(0);
    printf("%5d\n",mn);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
