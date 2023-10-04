#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

string arr,frr;
int pi[N];


void cal()
{
    int i=0,j=-1;
    pi[0] = -1;
    int m = frr.size();
    while(i<m)
    {
        while(j>=0&&frr[i]!=frr[j])j=pi[j];
        i++,j++;
        pi[i]=j;
    }
}

void solve()
{
   cin>>arr>>frr;
   cal();
   int cnt = 0;

     int i=0,j=0;
     int n = arr.size();
     int m = frr.size();
    while(i<n)
    {
        while(j>=0&&arr[i]!=frr[j])j=pi[j];
        i++;
        j++;
        if(j==m)
        {
            cnt ++;
            j=0;
        }
    }

    cout<<cnt<<endl;

}

int main()
{
    solve();
}
