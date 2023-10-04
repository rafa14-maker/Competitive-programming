#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
int arr[N];
int frr[N][10];

void cal()
{
    for(int i=1;i<N;i++)
    {
        int idx = i;
        while(idx>9)
        {
            int dx = 1;
            int p = idx;
            while(p>0)
            {
                int r = p%10;
                if(r != 0) dx*=r;
                p/=10;
            }
            idx = dx;
        }
        arr[i] = idx;
    }
   // for(int i=1;i<=50;i++)cout<<i<<" "<<arr[i]<<endl;

   for(int i=1;i<N;i++)
   {
       int a = arr[i];
       frr[i][a]=1;
   }

   for(int i=1;i<N;i++)
   {
       for(int j=1;j<10;j++)
       {
           frr[i][j] += frr[i-1][j];
       }
   }


}


void solve()
{
    int q;
    cin>>q;

    while(q--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        cout<<frr[r][k] - frr[l-1][k]<<endl;
    }
}

int main()
{
    cal();
    solve();
}
