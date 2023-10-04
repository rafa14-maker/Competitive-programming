#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        vector<int>v;
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')k++;
            else
            {
                if(k!=0)v.push_back(k);
                k=0;
            }
        }
        if(k>0)v.push_back(k);
        sort(v.begin(),v.end());
        int counter=0,flag=0;
        while(1==1)
        {
          if(counter%2==0)
          {
              int g=0;
              for(int i=0;i<v.size();i++)
              {
                  if(v[i]>=a)
                  {
                      g++;
                      v[i]-=a;
                      break;
                  }
              }
              if(g==0)
              {
                  flag=1;
                  break;
              }
          }
          if(counter%2==1)
          {
              int g=0;
              for(int i=0;i<v.size();i++)
              {
                  if(v[i]>=b)
                  {
                      v[i]-=b;
                      g++;
                      break;
                  }

              }
              if(g==0)
              {
                  flag=2;
                  break;
              }
          }
          if(flag!=0)break;
          counter++;
        }

       // for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
