#include<bits/stdc++.h>
using namespace std;

bool f(int c)
{
    if(c==2||c==0||c==1||c==8||c==5)return true;
    return false;
}

void solve()
{
    int h,m;
    cin>>h>>m;

    char frr[5];
    for(int i=0;i<5;i++)cin>>frr[i];

    int a=frr[0]-'0';
    int b = frr[1]-'0';
    int k = a*10+b;

    int kp,pk;

    int idx=0;

     while(1)
     {
         int ak = k/10;
         int bk = k%10;

         if(f(ak)&&f(bk))
         {
             kp=k;
             break;
         }
         k++;
         idx++;
         if(idx>h*2)break;
         if(k>h)k=0;
     }

    a=frr[3]-'0';
     b = frr[4]-'0';
     k = a*10+b;
     idx=0;

     while(1)
     {
         int ak = k/10;
         int bk = k%10;
         if(f(ak)&&f(bk))
         {
             pk=k;
             break;
         }
         k++;
          idx++;
         if(idx>m*2)break;
         if(k>m)k=0;
     }

     if(kp==0&&pk==0)
     {
         cout<<"00:00"<<endl;
         return ;
     }

    // cout<<"Yes"<<" ";
     if(kp<10)cout<<0<<kp;
     else cout<<kp;
     cout<<":";
     if(pk<10)cout<<0<<pk;
     else cout<<pk;
     cout<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
