#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    char arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    string frr;

        string s;
        for(int j=0;j<n;j++)
        {
            s+=arr[j];
            string krr;
            while(krr.size()<k)
            {
                krr+=s;
            }
            if(frr.size()==0||frr>krr)frr=krr;
        }

        for(int i=0;i<k;i++)cout<<frr[i];
        cout<<endl;

}

int main()
{
//int q;
    //cin>>q;
   // while(q--)solve();
   solve();
}
