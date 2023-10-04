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
    int cnt=0;
    int i=0,j=0;
    while(i<n)
    {
        while(j>=0&&arr[i]!=frr[j]&&arr[i]!='?')j=pi[j];
        i++;
        j++;
        if(j==m)
        {
           cnt++;
            j=pi[j];
        }
    }

   cout<<cnt<<endl;
}


void solve()
{
    cin>>arr;
    cin>>frr;
    n=arr.size();
    m=frr.size();
    kmp();
    //cout<<endl;
}

int main()
{
   // int q;
   // cin>>q;
   // while(q--)solve();
   solve();
}

