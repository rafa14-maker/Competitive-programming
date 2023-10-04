/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){return !b?a:GCD(b,a%b);}

int arr[110],frr[110];

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<=m;i++)
    {
        cin>>frr[i];
    }
         if(n<m)
         {
        cout<<"0/1"<<endl;
           }
        else if(n>m)
        {
            if(arr[0]*frr[0]>0)cout<<"Infinity"<<endl;
            else cout<<"-Infinity"<<endl;
        }
        else
        {
            int a=abs(arr[0]),b=abs(frr[0]);
            int k=GCD(a,b);
            a/=k;
            b/=k;
            if(arr[0]*frr[0]<0)cout<<"-";
            cout<<a<<"/"<<b<<endl;
        }
}


