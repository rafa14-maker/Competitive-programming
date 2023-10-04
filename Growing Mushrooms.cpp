#include<bits/stdc++.h>
using namespace std;

int main()
{
    double t1,t2,k,a,b;
    int n;
    cin>>n>>t1>>t2>>k;
    vector<pair<double,int> >v;
    for(int i=1;i<=n;i++)
    {
       cin>>a>>b;
        if(a>b)swap(a,b);
        double sum=0;
        sum+=t1*a;
        sum-=((sum*k)/100);
        sum+=t2*b;
        double sum2=0;
        sum2+=t1*b;
        sum2-=((sum2*k)/100);
        sum2+=t2*a;
        //cout<<sum<<" "<<sum2<<endl;
        v.push_back(make_pair(max(sum,sum2),-i));
    }
  sort(v.rbegin(),v.rend());

    for(int i=0;i<n;i++)
    {
        printf("%d %0.2lf\n",-v[i].second,v[i].first);
    }
}
