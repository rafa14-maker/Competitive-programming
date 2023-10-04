#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  vector<char>a;
  vector<char>b;
  for(int i=0;i<3;i++)
  {
      char c;
      cin>>c;
      a.push_back(c);
  }

 // sort(a.begin(),a.end());

  for(int i=0;i<3;i++)
  {
      char c;
      cin>>c;
      b.push_back(c);
  }

  //  sort(b.begin(),b.end());

  int cnt = 0;

    for(int i=0;i<3;i++)
    {
        if(a[i]!=b[i])
        {
            cnt++;
        }
    }
 if(cnt == 0||cnt==2||cnt==3)cout<<"Yes"<<endl;
 else cout<<"No"<<endl;

 //cout<<"Yes"<<endl;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}

