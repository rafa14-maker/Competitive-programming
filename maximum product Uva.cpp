#include<bits/stdc++.h>
using namespace std;

void solve(int n,int test)
{
    //int n;
    //cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    long long sum=0;


   for(int i=0;i<v.size();i++)
   {
       long long k=v[i];
       sum=max(sum,k);
       for(int j=i+1;j<v.size();j++)
       {
           k*=v[j];
           sum=max(sum,k);
       }
   }

 printf("Case #%d: The maximum product is %lld.\n\n",test,sum);

}

int main()
{
    int n;
    int cnt=0;
    while(scanf("%d",&n)!=EOF)
    {
       // if(cnt)cout<<endl;
        solve(n,++cnt);
    }
}
