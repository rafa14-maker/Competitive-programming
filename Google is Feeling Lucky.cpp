#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    int counter=0;
    cin>>q;
    while(q--)
    {
        string arr[11];
        vector<pair<int,int> >v;
        int mx=0;
         for(int i=0;i<10;i++)
         {
             cin>>arr[i];
             int a;
             cin>>a;
             v.push_back(make_pair(a,i));
             mx=max(a,mx);
         }
         printf("Case #%d:\n",++counter);
         for(int i=0;i<10;i++)
         {
             if(v[i].first==mx)
             {
                 cout<<arr[v[i].second]<<endl;
             }
         }
    }
}
