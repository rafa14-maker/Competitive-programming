#include<bits/stdc++.h>
using namespace std;

const int N = 10000;

void solve(int n)
{
    char c;
    cin>>c;

    int frr[N+5];


    for(int i=0;i<N;i++)frr[i]=-1;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        frr[a]=i;
    }

    for(int i=1;i<=N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(j+i<N&&j+(i*2)<N&&frr[j]!=-1&&frr[j+i]!=-1&&frr[j+(i*2)]!=-1)
            {
                if(frr[j]<frr[j+i]&&frr[j+i]<frr[j+(i*2)])
                {
                    cout<<"no"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"yes"<<endl;

}

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        solve(n);
    }
}
