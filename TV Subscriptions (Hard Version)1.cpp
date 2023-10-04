#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k,d;
    cin>>n>>k>>d;
    int arr[n+5];

    int flag=0,counter=1e9;

   map<int,int>frr;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

        frr[arr[i]]++;

        if(frr[arr[i]]==1)flag++;

       if(i==d)
       {
           counter=min(flag,counter);
       }
       else if(i>d)
       {
           frr[arr[i-d]]--;
           if(frr[arr[i-d]]==0)flag--;
           counter=min(flag,counter);
       }
    } cout<<counter<<endl;
}
}
