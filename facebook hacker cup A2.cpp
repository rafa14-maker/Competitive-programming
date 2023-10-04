#include<bits/stdc++.h>
using namespace std;

int frr[30][30];
const int mx = 1e8+7;
string s;
int test;

void re()
{
    for(int i=0;i<30;i++)
    {
        for(int j=0;j<30;j++)
        {
            frr[i][j]=mx;
        }
    }
}

void war()
{
    for(int k=0;k<30;k++)
    {
        for(int i=0;i<30;i++)
        {
            for(int j=0;j<30;j++)
            {
                frr[i][j]=min(frr[i][j],frr[i][k]+frr[k][j]);
            }
        }
    }
}


void solve()
{
    re();
    cin>>s;
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ac,bc;
        cin>>ac>>bc;
        a = (int)(ac-'A');
        b = (int)(bc-'A');
        frr[a][b]=1;
      //  frr[b][a]=1;
    }
     war();
    int sum = mx;

    for(char c='A';c<='Z';c++)
    {
        int idx=0;
        bool tr=false;
        for(int i=0;i<s.size();i++)
        {
            a = (int)s[i]-'A';
            b = (int)c-'A';
            if(a!=b)
            {
                if(frr[a][b]==mx)tr=true;
                else
                {
                    idx+=frr[a][b];
                }
            }
        }
        if(!tr)sum=min(sum,idx);
    }

    if(sum!=mx)printf("Case #%d: %d\n",++test,sum);
    else printf("Case #%d: -1\n",++test);

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
