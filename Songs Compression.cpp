#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        sum+=a;
        v.push_back(a-b);
    }
    sort(v.begin(),v.end());
    int counter=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(sum>k)
        {
            sum-=v[i];
            counter++;
        }
        else break;
    }
    if(sum<=k)cout<<counter<<endl;
    else cout<<-1<<endl;
}
