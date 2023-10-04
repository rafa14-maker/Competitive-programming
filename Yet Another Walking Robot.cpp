#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       vector<pair<int,int> >v;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0,sum=-1;

        int i=0,j=0;
        for(int p=0;p<s.size();p++)
        {
            if(s[p]=='L')i--;
            else if(s[p]=='R')i++;
            else if(s[p]=='U')j++;
            else if(s[p]=='D')j--;
           for(int c=0;c<v.size();c++)
           {
               if(v[c].first==i&&v[c].second==j)
               {
                   int k=p-c;
                   if(sum==-1)
                   {
                       sum=k;
                       a=c;
                       b=p-1;
                }
                else if(sum>=k)
                {
                    a=c;
                    b=p-1;
                }

               }
           }
           v.push_back(make_pair(i,j));
          // cout<<i<<" "<<j<<endl;
        }
       if(a==0&&b==0)cout<<-1<<endl;
       else cout<<a<<" "<<b<<endl;

    }
}
