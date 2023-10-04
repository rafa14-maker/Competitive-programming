#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        vector<pair<int,int> >v;
        long long n;
        cin>>n;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
           v.push_back(make_pair(i,n/i));
            }
        }
         int flag=0;
        if(v.size()==0)
        {
            cout<<"NO"<<endl;
            flag++;
        }
        else
        {
            for(int i=0;i<v.size();i++)
            {
                int a=v[i].first,b=v[i].second;

                if(flag>0)break;
                for(int i=2;i<=sqrt(a);i++)
                {
            if(a%i==0&&b!=i&&b!=a/i&&i!=a/i)
                 {
                     cout<<"YES"<<endl;
               cout<<i<<" "<<a/i<<" "<<b<<endl;
               flag++;
               break;
               }
                }
                for(int i=2;i<=sqrt(b);i++)
                {
            if(b%i==0&&i!=b/i&&i!=a&&a!=b/i)
              {
                   cout<<"YES"<<endl;
               // v.push_back(make_pair(i,n/i));
                cout<<i<<" "<<b/i<<" "<<a<<endl;
               flag++;
               break;
                }
                 }
            }
        }
        if(flag==0)cout<<"NO"<<endl;
    }
}
