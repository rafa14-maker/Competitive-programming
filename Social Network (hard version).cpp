#include<bits/stdc++.h>
using namespace std;

map<int,int>m;


int main()
{
    int n,k;
    cin>>n>>k;
        deque<int>d;

     for(int i=0;i<n;i++)
     {
         int p;
         cin>>p;
         if(m[p]==0)
         {
             if((int)d.size()==k)
             {
                 int l= d.front();
                 m[l]=0;
                 d.pop_front();
             }
             d.push_back(p);
             m[p]=1;
        }

     }

     cout<<d.size()<<endl;
     while(d.size()>0)
     {
         cout<<d.back()<<" ";
         d.pop_back();
     }
}
