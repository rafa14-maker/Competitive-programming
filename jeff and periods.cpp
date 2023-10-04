/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,tmp,period;

    cin>>n;

    vector<vector<int> >arr(100001);
    vector<pair<int,int> >frr;

    for(int i=0;i<n;++i)
    {
        cin>>tmp;
        arr[tmp].push_back(i);
    }

   for(int i=0;i<100001;++i)
   {
       if(arr[i].size()==1)
       {
           frr.push_back({i,0});
       }
       if(arr[i].size()>1)
       {
           period=arr[i][1]-arr[i][0];
           int p=0;
           while(p<arr[i].size()-1&&arr[i][p]+period==arr[i][p+1])
           {
               p++;
           }
           if(p==arr[i].size()-1)
           {
               frr.push_back({i,period});
           }
       }
   }

   cout<<frr.size()<<endl;

   for(int i=0;i<frr.size();++i)
   {
       cout<<frr[i].first<<" "<<frr[i].second<<endl;
   }

}


