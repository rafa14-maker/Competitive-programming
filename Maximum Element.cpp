#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    vector<int>v;
    int idx=0;
    while(q--)
    {
        int n;
        scanf("%d",&n);
        if(n==1)
         {
             int k;
              scanf("%d",&k);
             v.push_back(k);
            // st.push(k);
         }
         else if(n==2)
         {
             v.pop_back();
         }
         else
         {
             int mx=0;
          for(int i=0;i<v.size();i++)mx=max(mx,v[i]);
           printf("%d\n",mx);
         }
    }
}
