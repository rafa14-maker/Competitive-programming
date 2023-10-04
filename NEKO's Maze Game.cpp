#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+100;
int bad[N][3];

int main()
{
    int n,q;
    cin>>n>>q;
    int obs=0;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        swap(x,y);
        if(y==1)
        {
            if(bad[x][y])
            {
                if(bad[x][2])obs--;
                if(x+1<=n&&bad[x+1][2])obs--;
                if(x-1>=1&&bad[x-1][2])obs--;
            }
            else
            {
                if(bad[x][2])obs++;
                if(x+1<=n&&bad[x+1][2])obs++;
                if(x-1>=1&&bad[x-1][2])obs++;
            }
        }
        else
        {
              if(bad[x][y])
            {
                if(bad[x][1])obs--;
                if(x+1<=n&&bad[x+1][1])obs--;
                if(x-1>=1&&bad[x-1][1])obs--;
            }
            else
            {
                if(bad[x][1])obs++;
                if(x+1<=n&&bad[x+1][1])obs++;
                if(x-1>=1&&bad[x-1][1])obs++;
            }
        }
        bad[x][y]^=1;
        if(obs==0)cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
}
