#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
    int n;
    cin>>n;

    int arr[1005]={0};

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
    }

    vector<int>v;

    while(1)
    {
        bool tr = true;

        for(int i=1;i<=1000;i++)
        {
            if(arr[i]>0)
            {
                v.push_back(i);
                arr[i]--;
                tr = false;
            }
        }

        if(tr)break;

    }

   int cnt = 0;
   for(int i=1;i<v.size();i++)
   {
       if(v[i]>v[i-1])cnt++;
   }

   cout << cnt << endl;
}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
  // int q;cin>>q;while(q--)solve();
   solve();
}

