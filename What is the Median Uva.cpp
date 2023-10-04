#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;

    int n;

    while(scanf("%d",&n)!=-1)
    {
       v.push_back(n);

       int len=v.size();

       sort(v.begin(),v.end());

       if(v.size()%2==1)cout<<v[len/2]<<endl;
       else cout<<(v[len/2-1]+v[len/2])/2<<endl;
    }
}
