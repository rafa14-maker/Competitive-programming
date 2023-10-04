#include<bits/stdc++.h>
using namespace std;

int main()
{
  map<string,int>mp;
    vector<string>v;
    int counter=0;
    for(char i='a';i<='z';i++)
    {
        string s;
        v.push_back(s+i);
        mp[s+i]=++counter;
    }

        for(int i=0;i<v.size();i++)
        {
            if(v[i].size()<5){
            int len=v[i].size()-1;
            for(char j=v[i][len]+1;j<='z';j++)
            {
                v.push_back(v[i]+j);
                mp[v[i]+j]=++counter;
            }
        }
        }
      //  cout<<"Yes"<<endl;
  //  for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
  string s;
  while(cin>>s)
  {
      string f;
      f=s;
      sort(f.begin(),f.end());
      if(f==s)
      {
          cout<<mp[s]<<endl;
      }
      else
      {
          cout<<0<<endl;
      }
  }
}
