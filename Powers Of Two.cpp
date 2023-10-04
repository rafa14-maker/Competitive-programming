#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    if(k>n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(k==n)
    {
        cout<<"YES"<<endl;
        while(n--)cout<<1<<" ";
        return 0;
    }

    string s;

    while(n>0)
    {
        int r=n%2;
        if(r==1)s+='1';
        else s+='0';
        n/=2;
    }

   // reverse(s.begin(),s.end());

    vector<int>v;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            v.push_back(pow(2,i));
        }
    }

  //  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;


  if(k==v.size())
  {
     cout<<"YES"<<endl;
       for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
       return 0;

  }

  else if(k>v.size())
  {
      int r=k-v.size();

      int i=0;
      while(r>0)
      {
          if(i==v.size())break;
          if(v[i]>1)
          {
              int k=v[i]/2;
              v.push_back(k);
              v[i]=k;
              r--;
          }
          else i++;
      }
      if(k==v.size())
     {
     cout<<"YES"<<endl;
       for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
       return 0;

      }
  else
  {
     // cout<<r<<endl;
      cout<<"NO"<<endl;
     for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
      return 0;
  }

  }
  else if(v.size()>k)
  {
       int r=v.size()-k;
      int i=0;
      while(r--)
      {
          if(i==v.size())break;
          if(v[i]>1e9)
          {
              int k=v[i]*2;
              v.push_back(k);
              v[i]=k;
          }
          else i++;
      }
      if(k==v.size())
     {
     cout<<"YES"<<endl;
       for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
       return 0;

      }
  else
  {
      cout<<"NO"<<endl;
    //  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
      return 0;
  }

  }

}
