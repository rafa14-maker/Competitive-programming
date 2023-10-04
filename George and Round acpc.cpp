#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    //cin>>k;
    int frr[k+5];
    for(int i=0;i<k;i++)cin>>frr[i];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int p=0;
       for(int j=0;j<k;j++)
       {
           if(frr[j]>=arr[i])
           {
               frr[j]=0;
               p++;
               break;
           }
       }
       if(p==0)flag++;
    }
    cout<<flag<<endl;
}
