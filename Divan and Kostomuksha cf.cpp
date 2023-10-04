#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define r1 5000000
#define m 4294967296

bool prime[r1];
vector<int>v;
const int N = 5*1e6+5;

vector<int>adj[N];

void seive()
{
    for(int i=3;i<=r1;i+=2)prime[i]=true;
    prime[2]=true;

    for(int i=3;i*i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=r1;j+=i)
            {
                adj[j].push_back()
                prime[j]=false;
            }
        }
    }
    v.push_back(2);

    for(int i=3;i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            v.push_back(i);
        }
    }

}

int n;
int arr[N];

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)cin>>arr[i];



}

int main()
{
    seive();
    cout<<v.size()<<endl;
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

