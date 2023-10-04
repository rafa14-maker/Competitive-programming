#include<bits/stdc++.h>
using namespace std;

vector<pair<char,int> >v1;
vector<pair<char,int> >v2;

int main()
{
    int n;
    cin>>n;
    string arr,frr;
    cin>>arr>>frr;

    for(int i=0;i<arr.size();i++)
    {
        v1.push_back(make_pair(arr[i],i+1));
    }
       for(int i=0;i<frr.size();i++)
    {
        v2.push_back(make_pair(frr[i],i+1));
    }
    sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());

     vector<int>v;

     for(int i=0;i<v1.size();i++)
     {
         if(v1[i].first!='?')
         {
             char a=v1[i].first;
             int p=-1;
             int l=0,r=v2.size()-1;
             while(l<=r)
             {
                 int mid=(l+r)/2;
                // cout<<v2[mid].first<<endl;
                 if(v2[mid].first==a)
                 {
                     p=mid;
                     v2[mid].first='9';
                     break;
                 }
                 else if(v2[mid].first>a)
                 {
                     r=mid-1;
                 }
                 else l=mid+1;
             }
            if(p!=-1)
            {
               v.push_back(v1[i].second);
               v.push_back(v2[p].second);
               v1[i].first='9';
               v2[p].first='9';
               arr[v1[i].second-1]='9';
               frr[v2[p].second-1]='9';
            }
         }
     }

      for(int i=0;i<v1.size();i++)
     {
         if(v1[i].first=='?')
         {
            for(int j=0;j<frr.size();j++)
            {
                if(frr[j]!='9'&&frr[j]!='?')
                {
                    v.push_back(v1[i].second);
                    v1[i].first='9';
                    v.push_back(j+1);
                    frr[j]='9';
                    arr[v1[i].second-1]='9';
                }
            }
         }
     }
     for(int i=0;i<v2.size();i++)
     {
         if(v2[i].first=='?')
         {
        for(int j=0;j<arr.size();j++)
            {
                if(arr[j]!='9'&&arr[j]!='?')
                {
                    v.push_back(v1[i].second);
                    v.push_back(j+1);
                    v2[i].first='9';
                    arr[j]='9';
                    frr[v1[i].second-1]='9';
                }
            }
         }
     }

       for(int i=0;i<v2.size();i++)
     {
         if(v2[i].first=='?')
         {
        for(int j=0;j<arr.size();j++)
            {
                if(arr[i]!='9')
                {
                    v.push_back(v2[i].second);
                    v.push_back(j+1);
                    v2[i].first='9';
                    arr[j]='9';
                    frr[v2[i].second]='9';
                }
            }
         }
     }

     cout<<v.size()/2<<endl;
     for(int i=0;i<v.size();i+=2)
     {
         cout<<v[i]<<" "<<v[i+1]<<endl;
     }


}
