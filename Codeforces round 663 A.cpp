#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int arr[4];
   int cnt=0;
   int k;
   cin>>arr[0]>>arr[1]>>arr[2]>>k;
   sort(arr,arr+3);
   reverse(arr,arr+3);
  bool tr=true;
  if(arr[0]==0||arr[1]==0||arr[2]==0||k==0)tr=false;
   for(int i=0;i<3;i++)
   {
       if(tr){
       if(arr[i]%2==1||arr[i]>=2&&arr[i]%2==1)
       {
          if(arr[i]==1) tr=false;

          if(arr[i]%2==1){
           arr[i]--;
           k++;
          }
       }
       }
   }
cnt=0;
   for(int i=0;i<3;i++)
   {
       if(arr[i]%2==1)cnt++;
   }
   if(k%2==1)cnt++;
   if(cnt>=2)
   {
       cout<<"No"<<endl;
   }
   else cout<<"Yes"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

    //solve();
}
