#include<bits/stdc++.h>
using namespace std;



int main()
{
    freopen("hamming.in", "r", stdin);

    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string arr,frr;
        cin>>arr>>frr;
        sort(arr.begin(),arr.end());
        sort(frr.begin(),frr.end());
        reverse(frr.begin(),frr.end());
        int counter=0;
        for(int i=0;i<n;i++)if(arr[i]!=frr[i])counter++;
        cout<<counter<<endl;
    }
}
