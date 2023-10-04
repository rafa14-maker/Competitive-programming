#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n+5],l[n+5],r[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],l[i]=arr[i],r[i]=arr[i];
     if(n==1)
    {
        cout<<1<<" "<<0<<endl;
        return 0;
    }
    for(int i=1;i<n;i++)l[i]+=l[i-1];
    for(int j=n-2;j>=0;j--)r[j]+=r[j+1];

   // for(int i=0;i<n;i++)cout<<l[i]<<" "<<r[i]<<endl;

   int counter=0,flag=0;
   for(int i=0;i<n;i++)
   {
       if(l[i]<=r[i])counter++;
       else flag++;
   }
   cout<<counter<<" "<<flag<<endl;
}
