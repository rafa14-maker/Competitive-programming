#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        ll arr[n+5];
        ll frr[2020]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ll k =arr[i]+1000;
            frr[k]++;
        }
        ll counter=0;
        for(int i=0;i<=2000;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i%2==j%2)
                {
                    if(frr[(i+j)/2]){
                    if(i==j)counter+=((frr[i]*(frr[j]-1))/2);
                    else counter+=((frr[i]*(frr[j])));
                    }
                }
            }
        }
        cout<<counter<<endl;
    }
}
