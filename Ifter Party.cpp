#include<bits/stdc++.h>
using namespace std;

int main()
{
    int e;
    scanf("%d",&e);
    for(int u=1;u<=e;u++)
    {
        long long p,l;
        scanf("%lld %lld",&p,&l);
        long long q=p-l;
        if(l>=q)
        {
            printf("Case %d: impossible\n",u);
            continue;
        }

        vector<long long>v;

        for(int i=1;i<=sqrt(q);i++)
        {
            if(q%i==0){
            v.push_back(i);
           if(i!=q/i) v.push_back(q/i);
            }
        }

        vector<long long>k;

         for(int i=0;i<v.size();i++)
         {
             if(p%v[i]==l)
             {
                 k.push_back(v[i]);
             }
         }

         if(k.size()==0) printf("Case %d: impossible\n",u);
         else
         {
             sort(k.begin(),k.end());
              printf("Case %d:",u);
              for(int i=0;i<k.size();i++)printf(" %d",k[i]);
              cout<<"\n";
         }

    }
}
