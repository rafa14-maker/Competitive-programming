#include<bits/stdc++.h>
using namespace std;

vector<int>v;
const int N=1e6;
int arr[N+5];

void gen()
{
    for(int i=1;i<=N;i++)arr[i]=1;
    for(int i=2;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
        {
            arr[j]++;
        }
    }
    v.push_back(1);
    int p=1;

    for(int i=1;i<=N;i++)
    {
        int a=p+arr[p];
        v.push_back(a);
        p=a;
        if(p>=N)break;
    }

}

void solve(int test)
{
    int a,b;
    cin>>a>>b;
    int l=0,r=v.size()-1;
    int idx1=1e7,idx2=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]>=a)
        {
            idx1=min(idx1,mid);
            r=mid-1;
        }
        else l=mid+1;
    }
    l=0,r=v.size()-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]<=b)
        {
            idx2=max(mid,idx2);
            l=mid+1;
        }
        else r=mid-1;
    }
    printf("Case %d: %d\n",test,idx2-idx1+1);
//    cout<<idx1<<" "<<idx2<<endl;
   // cout<<idx2-idx1+1<<endl;
}

int main()
{
    gen();
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}
