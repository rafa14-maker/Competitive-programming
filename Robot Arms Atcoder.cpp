#include<bits/stdc++.h>
using namespace std;

vector<pair<long long,long long> >v;

void f()
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(v[i].first==v[j].first)
            {
                if(v[i].second>v[j].second)
                {
                    swap(v[i].second,v[j].second);
                }
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        v.push_back(make_pair(a+b,a-b));
    }
   sort(v.begin(),v.end());
   f();

   //for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;

   long long flag=1,counter=v[0].first;
   for(int i=1;i<v.size();i++)
   {
       if(counter<=v[i].second)
       {
           flag++;
           counter=v[i].first;
       }
   }
   cout<<flag<<endl;
}
