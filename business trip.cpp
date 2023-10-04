#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[15];
    for(int i=0;i<12;i++)cin>>arr[i];

    sort(arr,arr+12);

    int sum=0,counter=0;

    for(int i=11;i>=0;i--)
    {
           if(sum>=n)
           {
               cout<<counter<<endl;
               return 0;
           }
           sum+=arr[i];
           counter++;
    }
   if(sum>=n)cout<<counter<<endl;
   else  cout<<-1<<endl;
}
