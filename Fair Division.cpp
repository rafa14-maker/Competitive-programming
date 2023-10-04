#include<bits/stdc++.h>
using namespace std;

int n;
int arr[150];

void solve()
{
    cin>>n;
    long long sum=0;
    int one=0,two=0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
       if(arr[i]==1)one++;
       else two++;
   }

   if(one==0)
   {
       if(two%2==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       return ;
   }
   if(two==0)
   {
       if(one%2==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       return ;
   }


   if(one==two&&one>=2)
   {
       cout<<"YES"<<endl;
       return ;
   }

    while(two>=2&&one>=2)
    {
        one-=2;
        two-=2;
    }

    if(one==0&&two%2==0)cout<<"YES"<<endl;
    else if(two==0&&one%2==0)cout<<"YES"<<endl;
    else
    {
        int sum=(two)*2+one;
        if(sum%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
