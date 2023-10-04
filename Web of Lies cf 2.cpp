#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;

multiset<int>mt[N];
set<int>alive;
set<int>st;

int n,m;


void solve()
{
    cin>>n>>m;

    for(int i=1;i<=n;i++)alive.insert(i);

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        if(mt[a].size()==0)
        {
            if(alive.find(a)!=alive.end())
            {
                alive.erase(a);
            }
        }
        mt[a].insert(b);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        //cout<<"ok"<<endl;
        if(k==1)
        {
            int a,b;
            cin>>a>>b;
            if(a>b)swap(a,b);
           // if(mt[b].size()==0)cnt++;
         //  if(mt[a].size()==0)cnt--;

          if(mt[a].size()==0)
          {
            if(alive.find(a)!=alive.end())
            {
                alive.erase(a);
            }
          }
            mt[a].insert(b);
          //  st.insert(a);
        }
        else if(k==2)
        {
            int a,b;
            cin>>a>>b;
            if(a>b)swap(a,b);
            //auto it = mt[a].find(b);
            mt[a].erase(b);
            if(mt[a].size()==0)
            {
               alive.insert(a);
            }
        }
        else if(k==3)
        {
            cout<<alive.size()<<endl;
        }
    }
}

int main()
{
    solve();
}

/*

5 4
4 5
2 3
3 4
1 2
6
3
1 4 5
1 2 3
1 3 4
1 1 2
3
 */
