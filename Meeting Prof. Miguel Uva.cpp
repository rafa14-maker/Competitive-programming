#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+7;

int arr[50][50];
int frr[50][50];
int n;

void solve()
{
    for(int i=0;i<50;i++)for(int j=0;j<50;j++)frr[i][i]=0,arr[i][i]=0,frr[i][j]=N,arr[i][j]=N;

    for(int i=0;i<n;i++)
    {
        char a,b,c,d;
       int dis;
        cin>>a>>b>>c>>d;
        cin>>dis;
        int ak= (c-'A');
        int bk=(d-'A');

        //cout<<ak<<" "<<bk<<endl;

        if(b=='U')
        {
            if(a=='Y')
            {
                frr[ak][bk]=min(frr[ak][bk],dis);
            }
            else
            {
                arr[ak][bk]=min(arr[ak][bk],dis);
            }
        }
        else
        {
            if(a=='Y')
            {
                frr[ak][bk]=min(frr[ak][bk],dis);
                frr[bk][ak]=min(frr[bk][ak],dis);
            }
            else
            {
                arr[ak][bk]=min(arr[ak][bk],dis);
                arr[bk][ak]=min(arr[bk][ak],dis);
            }
        }
    }

    for(int k=0;k<50;k++)
    {
        for(int i=0;i<50;i++)
        {
            for(int j=0;j<50;j++)
            {
                    frr[i][j]=min(frr[i][k]+frr[k][j],frr[i][j]);
                     arr[i][j]=min(arr[i][k]+arr[k][j],arr[i][j]);
            }
        }
    }

    char kp,pk;
    cin>>kp>>pk;
    int mon = kp-'A';
    int mig = pk-'A';

    int mn=N;

    for(int i=0;i<50;i++)
    {
            mn=min(frr[mon][i]+arr[mig][i],mn);
    }

    if(mn==N)cout<<"You will never meet."<<endl;
    else
    {
        cout<<mn;
        for(int i=0;i<50;i++)
    {
        if(frr[mon][i]+arr[mig][i]==mn)
        {
            char a = 'A'+i;
           cout<<" "<<a;
        }
       // cout<<endl;
    }
    cout<<endl;
    }

}

int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}
