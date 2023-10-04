#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 2e5+5;

int n;
int arr[N];

bool f1(deque<int>dq)
{
    vector<int>v;

    while(!dq.empty())
    {
        int f = dq.front();
        dq.pop_front();
        v.push_back(f);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=v[i])return false;
    }
    return true;

}

bool f(deque<int>dq){

   deque<int>vk,vs;

   while(!dq.empty())
   {
       int a = dq.front();
       int b = dq.back();
       if(a<b)
       {
           vk.push_front(a);
           vs.push_front(a);
           dq.pop_front();
       }
       else if(a>b)
       {
            vk.push_back(b);
            vs.push_back(b);
           dq.pop_back();
       }
       if(a==b)
       {
             vk.push_front(b);
            vs.push_back(a);
            dq.pop_back();
       }
   }

   if(f1(vk))
   {
       return true;
   }
   else if(f1(vs))
   {
        return true;
   }
   else return false;
}

void solve()
{
   // cout<<"yes"<<endl;
  // int n;
  cin>>n;
  // int arr[n+5];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   deque<int>dq,pq;

   int l = 0,r = n-1;

   while(l<=r)
   {
       if(l==r)
       {
           dq.push_back(arr[l]);
           pq.push_front(arr[r]);
           l++;
       }
       else if(arr[l]<arr[r])
       {
           dq.push_front(arr[l]);
           pq.push_front(arr[l]);
           l++;
       }
       else if(arr[r]<arr[l])
       {
            dq.push_back(arr[r]);
           pq.push_back(arr[r]);
           r--;
       }
   }

     if(f(dq))
     {
          while(!dq.empty())
       {
           int f = dq.front();
           cout<<f<<" ";
           dq.pop_front();
       }
          cout<<endl;
     }
     else if(f(pq))
     {
          while(!pq.empty())
       {
           int f = pq.front();
           cout<<f<<" ";
           pq.pop_front();
       }
        cout<<endl;
     }
     else
     {
         cout<<-1<<endl;
     }

}

int main()
{
    CherryFrog;
  int q;cin>>q;while(q--)solve();
 //  solve();
}

