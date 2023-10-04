#include<bits/stdc++.h>
using namespace std;

string arr[5],frr[5],krr[5];
vector<char>v;

void solve()
{
    v.clear();
    for(int i=0;i<3;i++)cin>>arr[i]>>frr[i]>>krr[i];
    for(int i=0;i<3;i++)
    {
        if(krr[i]=="even")
        {
            for(int j=0;j<arr[i].size();j++)
            {
                v.push_back(arr[i][j]);
                v.push_back(frr[i][j]);
            }
        }
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
