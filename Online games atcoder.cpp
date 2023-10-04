#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5]={0};
    vector<pair<int,int> >v;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
      //  long long k = b-a+1;
      //  arr[1] +=1;
      //  arr[k+1] -=1;
      v.push_back(make_pair(a,1));
      v.push_back(make_pair(a+b,-1));
    }

   sort(v.begin(),v.end());

   int cnt = 0;

   for(int i=0;i<v.size()-1;i++)
   {
       cnt += v[i].second;
       arr[cnt]+= (v[i+1].first - v[i].first);
   }

   for(int i=0;i<n;i++)cout<<arr[i+1]<<" ";cout<<endl;

}

int main()
{
    solve();
}
