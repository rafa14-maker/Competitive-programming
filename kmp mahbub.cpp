#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+7;

string arr,frr;
int n,m;
int pi[N];

void cal()
{
    int i=0,j=-1;
    pi[0] = -1;
    while(i<m)
    {
        while(j>=0&&frr[i]!=frr[j])j=pi[j];
        i++,j++;
        pi[i]=j;
    }
}

void kmp()
{
    cal();
    vector<int>v;
    int i=0,j=0;
    while(i<n)
    {
        while(j>=0&&arr[i]!=frr[j])j=pi[j];
        i++;
        j++;
        if(j==m)
        {
            v.push_back(i-m+1);
            j=pi[j];
        }
    }

    if(v.size()==0)cout<<"Not Found"<<endl;
    else
    {
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
    }

}


void solve()
{
    cin>>arr;
    cin>>frr;
    n=arr.size();
    m=frr.size();
    kmp();
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
