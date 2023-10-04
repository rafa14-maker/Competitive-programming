#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   if(n==2)
   {
       if(arr[0]==arr[1])cout<<0<<endl;
       else cout<<1<<endl;
       return ;
   }

   int sum = 0;
   while(1)
   {
      vector<pair<int,int> >v;
      int idx = 0;
      int ksum = 0;

     for(int i=0;i<n;i++)
     {
       if(i==0)
       {
           idx = i;
           ksum =1;
       }
       else
       {
           if(arr[i]==arr[idx])ksum++;
           else
           {
               v.push_back(make_pair(ksum,idx));
               idx = i;
               ksum =1;
           }
       }
     }

   if(ksum>=1)
   {
        v.push_back(make_pair(sum,idx));
   }

   sort(v.begin(),v.end());

   int len = v.size()-1;

   int a = v[len].second;
   int b = v[len].second + v[len].first-1;
   int rx = v[len].first;

    cout<< a<<" "<<b<<endl;

    int ele = arr[a];

    bool tr = false,kp = false;

    int cnt =0;

    for(int i=1;i<=rx;i++)
    {
        if(a-i>=0&&arr[a-i]!=ele)
        {
            tr = true;
            arr[a-i] = ele;
        }
        if(a-i<0)break;
        cnt++;
    }

    rx+=cnt;
    cnt = 0;

    if(tr)sum++;

     for(int i=1;i<=rx;i++)
    {
        if(b+i<n&&arr[b+i]!=ele)
        {
            kp = true;
            arr[b+i] = ele;
        }
        if(b+i>=n)break;
        cnt++;
    }
    rx+=cnt;

   // cout<<rx<<endl;
    if(kp)sum++;

   if(!tr&&!kp)break;

   }
   cout<< sum<< endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}
