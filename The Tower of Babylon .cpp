#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        vector<pair<int,int> >v;
        vector<int>frr;
        for(int i=0;i<n;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            v.push_back(make_pair(a,b));
            frr.push_back(c);

            v.push_back(make_pair(b,a));
            frr.push_back(c);

            v.push_back(make_pair(a,c));
            frr.push_back(b);

            v.push_back(make_pair(c,a));
            frr.push_back(b);

            v.push_back(make_pair(b,c));
            frr.push_back(a);

            v.push_back(make_pair(c,b));
            frr.push_back(a);
        }

        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i].first<v[j].first)
                {
                    swap(v[i].first,v[j].first);
                    swap(v[i].second,v[j].second);
                    swap(frr[i],frr[j]);
                }
            }
        }
       vector<int>krr;
       vector<int>prr;
        for(int i=0;i<v.size();i++)
        {
            krr.push_back(v[i].second);
            prr.push_back(frr[i]);
        }

        int len=krr.size();
        int dp[len+5]={0};

        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if(krr[i]<krr[j])
                {
                    dp[j]++;
                }
            }
        }
        int sum=1;
        int frr2[50]={0};
        for(int i=0;i<len;i++)
        {
            if(dp[i]>sum)
            {
                sum=dp[i];
                frr2[sum]=max(frr2[sum],prr[i]);
            }
            else if(dp[i]==sum)
            {
                 frr2[sum]=max(frr2[sum],prr[i]);
            }
        }
       long long go=0;
       for(int i=0;i<50;i++)go+=frr2[i];
       cout<<go<<endl;
    }
}
