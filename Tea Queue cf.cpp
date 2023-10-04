#include<bits/stdc++.h>
using namespace std;

bool check(pair<int,pair<int,int> >a,pair<int,pair<int,int> >b)
{
    int a1 = a.first;
    int a2 = a.second.first;
    int b1 = b.first;
    int b2 = b.second.first;
    if(a1<b1)return true;
    else if(a1==b1&&a2<=b2)return true;
    else return false;
}

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,pair<int,int> > >v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,make_pair(i,b)));
    }
    sort(v.begin(),v.end(),check);

  //  for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second.second<<endl;

  int arr[n+5]={0};

  int ans = 1;

  for(int i=0;i<v.size();i++)
  {
      int k = v[i].first;
      int a  = v[i].second.first;
      int b = v[i].second.second;
    //  cout<<a<<endl;
      if(ans<k)
      {
          ans = k;
          arr[a] =k;
          ans++;
      }
      else if(ans<=b)
      {
          arr[a] = ans;
          ans++;
      }
      else arr[a] = 0;
  }

  for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
