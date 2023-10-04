#include<bits/stdc++.h>
using namespace std;

int n;
set<int>s;

void bit(int mask)
{
   s.insert(mask);
    for(int j=0;j<n;j++)
    {
        if(!(mask&(1<<j)))
        {
            int p=mask;
            p|=(1<<j);
            bit(p);
        }
    }
}


int main()
{
    //int n;
    cin>>n;
    bit(0);

    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

   /* for(int i=1;i<pow(2,n);i++)
    {
        vector<int>v;
        for(int j=002;j<n;j++)
        {
            if(i&(1<<j))
            {
                v.push_back(j);
            }
        }
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    }*/
}
