#include<bits/stdc++.h>
using namespace std;

int n,k,q;
int arr[105][105];
int frr[105][105];

void solve()
{
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            frr[i][j]=0;
        }
    }

    queue<pair<int,pair<int,int> > >pq;

    pq.push(make_pair(arr[0][0],make_pair(0,0)));

    frr[0][0]=arr[0][0];

    while(!pq.empty())
    {
        pair<int,pair<int,int> >f = pq.front();
        pq.pop();
        int d = f.first;
        int i = f.second.first;
        int j = f.second.second;
        for(int a=i+1;a<=i+k&&a<n;a++)
        {
            if(arr[a][j]>arr[i][j]&&frr[a][j]<frr[i][j]+arr[a][j])
            {
                frr[a][j]=frr[i][j]+arr[a][j];
                pq.push(make_pair(frr[a][j],make_pair(a,j)));
            }
        }

        for(int a=i-1;a>=0&&a>=i-k;a--)
        {
             if(arr[a][j]>arr[i][j]&&frr[a][j]<frr[i][j]+arr[a][j])
            {
                frr[a][j]=frr[i][j]+arr[a][j];
                pq.push(make_pair(frr[a][j],make_pair(a,j)));
            }
        }


         for(int a=j+1;a<=j+k&&a<n;a++)
        {
            if(arr[i][a]>arr[i][j]&&frr[i][a]<frr[i][j]+arr[i][a])
            {
                frr[i][a]=frr[i][j]+arr[i][a];
                pq.push(make_pair(frr[i][a],make_pair(i,a)));
            }
        }

        for(int a=j-1;a>=0&&a>=j-k;a--)
        {
            if(arr[i][a]>arr[i][j]&&frr[i][a]<frr[i][j]+arr[i][a])
            {
                frr[i][a]=frr[i][j]+arr[i][a];
                pq.push(make_pair(frr[i][a],make_pair(i,a)));
            }
        }

    }

    int mx=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mx=max(mx,frr[i][j]);
        }
    }
    if(q!=1)printf("\n");
    cout<<mx<<endl;

}

int main()
{
   int t;
   cin>>t;
   for(q=1;q<=t;q++)solve();
}
