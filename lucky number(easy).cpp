/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

long long n,ans=1e14;

void call(long long num,int i,int r)
{
    if(i>13)return;
    if(num>=n&&r==0)
    {
        ans=min(ans,num);
    }
    call(num*10+4,i+1,r+1);
     call(num*10+7,i+1,r-1);
}

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;

    call(0,1,0);

    cout<<ans<<endl;

}



