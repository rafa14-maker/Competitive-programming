/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

 int n,k;
 cin>>n>>k;

 int arr[n+5];

 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int sum=0;
 //sort(arr,arr+n);
 for(int i=0;i<n;i++)
 {
     if(arr[i]!=0){
     for(int j=i+1;j<n;j++)
     {
         if((arr[i]+arr[j])%k==0&&arr[j]!=0)
         {
             sum++;
             arr[i]=0;
             arr[j]=0;
             break;
         }
     }
 }
 }
 cout<<sum*2<<endl;
}


