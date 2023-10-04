#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f;
    while(scanf("%d",&f)!=EOF)
    {
        int n;
        n=f;
        int arr[n+5];
        int frr[n+5]={0};
        for(int i=0;i<n;i++)cin>>arr[i];
        int counter=0;
        for(int i=0;i<n-1;i++)
        {
            int k=abs(arr[i]-arr[i+1]);
            if(k>=n)counter++;
            frr[k]++;
            if(frr[k]>1)counter++;
        }


        if(counter==0)cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
    return 0;
}
