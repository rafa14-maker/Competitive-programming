#include<bits/stdc++.h>
using namespace std;

vector<int>arr[2*100005];

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;
   // vector<int>po;

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;

        int sum=0;
        for(int j=0;j<a;j++)
        {
            int o;
            cin>>o;
            arr[i].push_back(o);
            sum+=o;
        }
     // po.push_back(sum);
      //  cout<<sum<<endl;
        for(int j=0;j<a;j++)
        {
            int p=sum-arr[i][j];
           //  cout<<p<<endl;
            v.push_back(make_pair(p,i));
          //  po.push_back(arr[j]);
        }
    }
  sort(v.begin(),v.end());

  //  for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;

    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i].first==v[i+1].first&&v[i].second!=v[i+1].second)
        {
            cout<<"YES"<<endl;
            cout<<v[i].second<<" ";

            int sum=v[i].first,flag=v[i].second;

            int t=0;

            for(int j=0;j<arr[flag].size();j++)
            {
                t+=arr[flag][j];
            }
         // cout<<"sum"<<" "<<t<<endl;
            for(int j=0;j<arr[flag].size();j++)
            {
                if(t-arr[flag][j]==sum)
                {
                    cout<<j+1<<endl;
                    break;
                }
            }

             cout<<v[i+1].second<<" ";

             sum=v[i+1].first;
             flag=v[i+1].second;

             t=0;

            for(int j=0;j<arr[flag].size();j++)
            {
                t+=arr[flag][j];
            }
          //  cout<<"sum"<<" "<<t<<endl;
            for(int j=0;j<arr[flag].size();j++)
            {
                if(t-arr[flag][j]==sum)
                {
                    cout<<j+1<<endl;
                    break;
                }
            }
     return 0;
        }
    }
    cout<<"NO"<<endl;
}
