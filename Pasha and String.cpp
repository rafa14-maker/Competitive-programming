#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k=s.size();
    int frr[k+5]={0};

    for(int i=0;i<n;i++)
    {
        frr[arr[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        frr[i]+=frr[i-1];
    }
    for(int i=1;i<=k/2;i++)
    {
        if(frr[i]%2==1)
        {
            swap(s[i-1],s[k-i]);
        }
    }
    cout<<s<<endl;
}
