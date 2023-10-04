#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i].first==v[j].first&&v[i].second<v[j].second)
                    swap(v[i].second,v[j].second);
            }
        }

      int i=0,j=0,counter=0,flag=0,t=0;
      string s="";
      while(1)
      {
         // cout<<i<<" "<<j<<endl;
          if(flag>=v.size())break;
          int a=v[flag].first,b=v[flag].second;
          if(a<i||b<j)
          {
              t++;
              break;
          }
          int k=a-i;
          while(k--)s+='R';

          k=b-j;
          while(k--)s+='U';

          i=a;
          j=b;

          flag++;
      }
      if(t!=0)cout<<"NO"<<endl;
      else cout<<"YES"<<endl<<s<<endl;
    }
}
