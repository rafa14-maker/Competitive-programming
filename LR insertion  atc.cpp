#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 5e5+5;

struct Node
{
    int data;
    int left =-1;
    int right =-1;
}idx[N];



void in(int dx)
{
    if(dx == -1)return ;
    in(idx[dx].left);
    cout<<dx<<" ";
    in(idx[dx].right);
}



void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   string s;
   cin>>s;

   for(int i=0;i<s.size();i++)
   {
      if(s[i]=='L')
      {
          idx[i].data = i;
          idx[i].left = i+1;
          idx[i].right = -1;
      }
      else
      {
          idx[i].data = i;
          idx[i].left = -1;
          idx[i].right = i+1;
      }
   }

   in(0);
   cout<<endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

