/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    int arr[n+5],frr[m+5];

    for(int i=1;i<=n+1;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=m+1;i++)
    {
        cin>>frr[i];
    }

    int k=0,l=0;

    for(int i=1;i<=n+1;i++)
    {
        if(arr[i]!=0){
            k=arr[i];
            l=n+1-i;
            break;
        }
    }
    int r=0,p=0;
     for(int i=1;i<=m+1;i++)
    {
        if(frr[i]!=0)
        {
            r=frr[i];
            p=m+1-i;
            break;
        }
    }
 // cout<<k<<" "<<l<<" "<<r<<" "<<p;
    if(l==p)
    {
        while(__gcd(k,r)>1)
        {
            int a=__gcd(k,r);
            k/=a;
            r/=a;
        }

        if(k<0&&r<0)
        {
            k=k*(-1);
            r=r*(-1);
            cout<<k<<"/"<<r<<endl;
        }

       else if(k<0||r<0)
        {
           if(k<0)k=k*(-1);
          if(r<0)r=r*(-1);
            cout<<"-"<<k<<"/"<<r<<endl;
            return 0;
        }
        else{
        cout<<k<<"/"<<r<<endl;}
    }
    if(l!=p)
    {
        if(p>l)
        {
            cout<<0<<"/"<<1<<endl;
        }
        else
        {
        if(k<0&&r<0)
        {
            cout<<"Infinity"<<endl;
        }
        else if(k<0||r<0)
            {
                cout<<"-Infinity"<<endl;
            }
            else
            {
                cout<<"Infinity"<<endl;
            }
        }
    }

}


