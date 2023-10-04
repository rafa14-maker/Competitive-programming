#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+7;

int n,k;
string arr[105];
int pi[N];

void cal(string frr)
{
    int k=0;
    pi[0] = 0;
    int m=frr.size();

     for(int i = 1; i < m; i++) {
        while(k>0 && frr[k] != frr[i]) k = pi[k-1];
        if(frr[k] == frr[i]) k++;
        pi[i] = k;
    }
}

string mer(string a,string b)
{
    memset(pi,0,sizeof pi);
    cal(b);
    int i = a.size()-b.size();
    int j =0 ;

    for(;i<a.size();i++)
    {
        while(j>0&&a[i]!=b[j])j=pi[j-1];
        if(a[i]==b[j])j++;
    }

    for(;j<b.size();j++)a+=b[j];

    return a;

}

void solve()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++)cin>>arr[i];

    string krr=arr[0];

    for(int i=1;i<k;i++)
    {
        krr= mer(krr,arr[i]);
       // cout<<krr<<endl;
    }
   // cout<<krr<<endl;
    cout<<krr.size()<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
