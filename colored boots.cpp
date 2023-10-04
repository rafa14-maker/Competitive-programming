#include<bits/stdc++.h>
using namespace std;

vector<int>v1[30];
vector<int>v2[30];

int main()
{
    int n;
    cin>>n;
    string arr,frr;
    cin>>arr>>frr;

    vector<int>p1;
    vector<int>p2;

  for(int i=0;i<arr.size();i++)
  {
      int k=(arr[i]-'a');
      if(arr[i]=='?')p1.push_back(i);
     // cout<<k<<endl;
    else  v1[k].push_back(i);
  }

   for(int i=0;i<frr.size();i++)
  {
      int k=(frr[i]-'a');
      if(frr[i]=='?')p2.push_back(i);
     // cout<<k<<endl;
   else  v2[k].push_back(i);
  }

  vector<int>v;

  for(int i=0;i<27;i++)
  {
      for(int j=0;j<min(v1[i].size(),v2[i].size());j++)
      {
          v.push_back(v1[i][j]);
          v1[i][j]=-1;
          v.push_back(v2[i][j]);
          v2[i][j]=-1;
      }
  }
 /* cout<<v.size()/2<<endl;
  for(int i=0;i<v.size();i+=2)
  {
      cout<<v[i]+1<<" "<<v[i+1]+1<<endl;
  }*/

  for(int i=0;i<p1.size();i++)
  {
      if(p1[i]!=-1){
      int flag=0;
      for(int j=0;j<26;j++)
      {
          if(flag>0)break;
          for(int k=0;k<v2[j].size();k++)
          {
              if(v2[j][k]!=-1)
              {
                  v.push_back(p1[i]);
                  v.push_back(v2[j][k]);
                  p1[i]=-1;
                  v2[j][k]=-1;
                  flag++;
                  break;
              }
          }
      }
      }
  }

  for(int i=0;i<p2.size();i++)
  {
      int flag=0;
      if(p2[i]!=-1){
      for(int j=0;j<26;j++)
      {
          if(flag>0)break;
          for(int k=0;k<v1[j].size();k++)
          {
              if(v1[j][k]!=-1)
              {
                  v.push_back(p2[i]);
                  v.push_back(v1[j][k]);
                  p2[i]=-1;
                  v1[j][k]=-1;
                  flag++;
                  break;
              }
          }
          }
      }
  }

  for(int i=0;i<p1.size();i++)
  {
      if(p1[i]!=-1)
      {
          for(int j=0;j<p2.size();j++)
          {
              if(p2[j]!=-1)
              {
                  v.push_back(p1[i]);
                  v.push_back(p2[j]);
                  p1[i]=-1;
                  p2[j]=-1;
                  break;
              }
          }
      }
  }

   cout<<v.size()/2<<endl;
  for(int i=0;i<v.size();i+=2)
  {
      cout<<v[i]+1<<" "<<v[i+1]+1<<endl;
  }



}
