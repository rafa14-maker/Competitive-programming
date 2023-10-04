#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    int t=0;
    while(1)
    {
        scanf("%d %d %d",&n,&m,&k);

        if(n==0&&m==0&&k==0)break;

        bitset<10005>f;
        bitset<10005>s;

        for(int i=0;i<k;i++)
        {
            int a,b;
            cin>>a>>b;
            f.set(a+1,1);
            s.set(b+1,1);
        }

        int i,j;
        cin>>i>>j;
        i++;
        j++;

        vector<pair<int,int> >v;
        v.push_back(make_pair(i,j));
      if(i+1<=n)  v.push_back(make_pair(i+1,j));
      if(i-1>0)  v.push_back(make_pair(i-1,j));
      if(j+1<=m)  v.push_back(make_pair(i,j+1));
      if(j-1>0)  v.push_back(make_pair(i,j-1));

        int flag=0;

        for(int i=0;i<v.size();i++)
        {
            int a=v[i].first;
            int b=v[i].second;
            if(f.test(a)==0&&s.test(b)==0)flag++;
        }

        if(flag!=0)
        {
            printf("Case %d: Escaped again! More 2D grid problems!\n",++t);
        }
        else
        {
            printf("Case %d: Party time! Let's find a restaurant!\n",++t);
        }
    }
}
