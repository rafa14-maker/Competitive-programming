#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
  string arr,frr;
  cin>>arr>>frr;

    bool a=false,b=false;
    int cnt=0;
    for(int i=0;i<arr.size();i++)
    {
           if(arr[i]=='1')a=true;
           else b=true;
           if(frr[i]=='1')a=true;
           else b=true;

        if(a&&b)
        {
            cnt+=2;
            a=false;
            b=false;
        }
    }

    cout<<cnt<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}


