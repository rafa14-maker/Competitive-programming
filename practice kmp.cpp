#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+7;

string arr,frr;
int pi[N];

void cal()
{
    int m=frr.size();
    int i=0,j=-1;
    pi[0]=-1;
    while(i<m)
    {
        if(j>=0&&frr[i]!=frr[j])j=pi[j];
        i++;
        j++;
        pi[i]=j;
    }
}

void kmp()
{
    int n=arr.size();
    int m=frr.size();
    int i=0,j=0;
    bool tr=false;
    while(i<n)
    {
        while(j>=0&&arr[i]!=frr[j])j=pi[j];
        i++;
        j++;
        if(j==m)
        {
            tr=true;
            cout<<"found"<<endl;
            j=pi[j];
        }

    }
    if(!tr)
    {
        cout<<"Not found"<<endl;
    }
}

void solve()
{
    cin>>arr>>frr;
    cal();
    kmp();
}

int main()
{
   int q;
   cin>>q;
   while(q--)solve();
}
