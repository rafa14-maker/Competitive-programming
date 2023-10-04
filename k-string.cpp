#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    int k;
    cin>>k>>arr;
    int v[27];
    for(int i=0;i<27;i++)v[i]=0;

    for(int i=0;i<arr.size();i++)
    {
        v[arr[i]-'a']++;
    }
    for(int i=0;i<27;i++)
    {
        if(v[i]%k!=0){cout<<-1<<endl;return 0;}
        v[i]/=k;
        while(v[i]--)frr+=(i+'a');
    }
    while(k--)cout<<frr;
}
