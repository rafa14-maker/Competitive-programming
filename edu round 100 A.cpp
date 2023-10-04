#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    long long cnt=0;
    sort(arr,arr+3);
    while(1)
    {
      if(arr[0]==0||arr[1]==0||arr[2]==0)break;
      if(arr[0]==arr[1]&&arr[1]==arr[2])break;
     long long kp=arr[2]- arr[0];
     arr[2]-=kp;
      cnt+=kp;
      if(cnt>=6)
      {
          long long pk=cnt/6;
          arr[0]-=pk;
          arr[1]-=pk;
          arr[2]-=pk;
          cnt=(cnt%6);
      }
      sort(arr,arr+3);
    }
  //  cout<<cnt<<endl;
    if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]!=0)
    {
        if((arr[0]+arr[1]+arr[2]+cnt)%9==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    if(arr[0]==0&&arr[1]==0&&arr[2]==0)cout<<"YES"<<endl;
    else if(arr[0]==0||arr[1]==0||arr[2]==0)cout<<"NO"<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
}

