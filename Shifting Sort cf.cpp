#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
int arr[55],frr[55];

void shift(int left,int right)
{
    int k = arr[right];
    for(int i=right-1;i>=left;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[left] = k;
  //  cout<<k<<endl;
  //  for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
}

void solve()
{
  //  cout<<"yes"<<endl;
 // int n;
  cin>>n;
 // int arr[n+5],frr[n+5];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      frr[i]=arr[i];
  }
  sort(frr,frr+n);

 // shift(0,n-1);

 // for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;


  vector<pair<int,int> >v;

  for(int i=0;i<n;i++)
  {
      for(int j=i;j<n;j++)
      {
          if(i!=j&&arr[j]==frr[i])
          {
            //  cout<<i<<" "<<j<<endl;
              shift(i,j);
              v.push_back(make_pair(min(i+1,j+1),max(i+1,j+1)));
              break;
          }
      }
  }
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i].first<<" "<<v[i].second<<" "<<v[i].second - v[i].first<<endl;
  }

}

int main()
{
   int q;cin>>q;while(q--)solve();
   //solve();
}

