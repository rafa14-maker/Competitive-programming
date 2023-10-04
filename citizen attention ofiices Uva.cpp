#include<bits/stdc++.h>
using namespace std;

int frr[10][10];
int arr[25];
int ans[25];

int cal()
{
    int cnt=0;
    int x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(frr[i][j]!=0)
            {
                int tmp=1e9;
                for(int k=0;k<25;k++)
                {
                    if(arr[k]!=0){
                    x=k/5;
                    y=k%5;
                    int kp=abs(x-i)+abs(y-j);
                    tmp=min(tmp,kp);
                    }
                }
                cnt+=tmp*frr[i][j];
            }
        }
    }
    return cnt;
}

void solve()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            frr[i][j]=0;
        }
    }

    for(int i=0;i<25;i++)arr[i]=0,ans[i]=0;
    //for(int i=24;i>=20;i--)arr[i]=1;


    int q;
    cin>>q;
    while(q--)
    {
        int i,j,k;
        cin>>i>>j>>k;
        frr[i][j]+=k;
    }

    int cost=1e9,temp;

    for(int a=0;a<25;a++)
    {
        for(int b=a+1;b<25;b++)
        {
            for(int c=b+1;c<25;c++)
            {
                for(int d=c+1;d<25;d++)
                {
                    for(int e=d+1;e<25;e++)
                    {
                        for(int i=0;i<25;i++)arr[i]=0;
                        arr[a]=1;
                        arr[b]=1;
                        arr[c]=1;
                        arr[d]=1;
                        arr[e]=1;
                        int tmp=cal();
                        if(cost>tmp)
                        {
                            cost=tmp;
                            //cout<<cost<<endl;
                            int idx=0;
                            for(int i=0;i<25;i++)
                            {
                                if(arr[i]==1)
                                {
                                    ans[idx]=i;
                                    idx++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
     cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<" "<<ans[4]<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
