#include<bits/stdc++.h>
using namespace std;

bool check(string str)
{
   // int counter=0;
    for(int i=0,j=str.size()-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
            return false;
    }
    return true;
}

int main()
{
    int q;
    cin>>q;

   // cout<<check("mim")<<endl;

    while(q--)
    {
        vector<string>v;
        map<string,int>mp;
        string s;
        cin>>s;
        string counter;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
              string k =s.substr(i,j);
              v.push_back(k);
             mp[k]++;
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            string str;
            string krr=v[i];
            int l=0,r=krr.size()-1;
            while(l<=r)
              {
                  if(krr[l]!=krr[r])
                  {
                      str+=krr[l];
                      l++;
                  }
                  else
                  {
                      l++;
                      r--;
                  }
              }
            string grr=krr+str;
            if(mp[str]&&check(grr)&&grr.size()>counter.size())
            {
                counter=grr;
            }
       }
       cout<<counter<<endl;
    }
}
