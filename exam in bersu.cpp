#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum;
    cin>>n>>sum;

    int arr[n+5],frr[n+5];

    for(int i=0;i<n;i++)cin>>arr[i],frr[i]=arr[i];

    for(int i=1;i<n;i++)frr[i]=frr[i]+frr[i-1];

 //  for(int i=0;i<n;i++)cout<<frr[i]<<" ";

 //  cout<<endl;

    for(int i=0;i<n;i++)
    {
        int l=0;



        int c=i-1;

       while(1==1)
        {
            if(frr[i]<=sum)break;
            if(c==-1)break;
                    l++;
                    frr[i]-=krr[c];
                   // cout<<krr[j]<<" "<<i+1<<" "<<frr[i]<<endl;
                    c--;
        }

        cout<<l<<" ";
    }
}
