#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];

    for(int i=0;i<n;i++){
            cin>>arr[i];
        }
     long long counter=1e9;

     for(int i=0;i<n;i++)
     {
         long long k=0;
         for(int j=0;j<n;j++)
         {
             long long p=abs(arr[i]-arr[j]);
             if(p%2==1)k++;
         }
         counter=min(counter,k);
     }
     cout<<counter<<endl;
  }
