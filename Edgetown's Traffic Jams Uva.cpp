#include<bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> int to_int(T t){ stringstream ss; ss<<t; int r; ss>>r; return r; }
template<class T> string to_str(T t){ stringstream ss; ss<<t; return ss.str(); }

const ll N = (1<<30);

ll n;

void solve()
{
     unsigned long long  arr[105][105];
    unsigned long long frr[105][105];

    for(int i=0;i<=101;i++)
    {
        for(int j=0;j<=101;j++)
        {
            frr[i][j]=N;
            arr[i][j]=N;
        }
    }

    for(int i=0;i<n;i++)
    {
        string buffer;
        getline(cin,buffer);
            stringstream ss(buffer);
            ss>>buffer;
            int u = to_int(buffer);
            while(ss>>buffer){
                int v = to_int(buffer);
                arr[u-1][v-1] = 1;
            }
    }


    for(int i=0;i<n;i++)
    {
        string buffer;
      getline(cin,buffer);
            stringstream ss(buffer);
            ss>>buffer;
            int u = to_int(buffer);
            while(ss>>buffer){
                int v = to_int(buffer);
                frr[u-1][v-1] = 1;
    }
    }
          string buffer;
   getline(cin,buffer);
        stringstream ss(buffer);
        int a; ss>>a;
        int b; ss>>b;


    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
                 frr[i][j]=min(frr[i][j],frr[i][k]+frr[k][j]);
            }
        }
    }

    bool tr=true;

     for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==j||arr[i][j]==N)continue;

                 if((arr[i][j]*a)+b < frr[i][j])tr=false;
            }
        }

    if(tr)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}


int main()
{
    bool tr=true;
    string buffer;
    while(getline(cin,buffer))
    {
       n = to_int(buffer);
       if(n==0)break;
       solve();
    }
}


/*

6
1 2 3 4 6
2 1 4
3 1 4 5
4 1 2 3 5
5 3 4 6
6 1 5
1 2 3 4 6
2 1 4
3 1 4 5
4 1 2 3 5
5 3 4 6
6 1 5
2 8

*/
