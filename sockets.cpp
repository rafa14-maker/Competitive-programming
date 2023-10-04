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

int n,m,k;
cin>>n>>m>>k;

int arr[n+5];

for(int i=0;i<n;i++)cin>>arr[i];

sort(arr,arr+n);

if(k>=m)
{
    cout<<0<<endl;
    return 0;
}

int counter=0;

for(int i=n-1;i>=0;i--)
{
    counter++;
    k+=arr[i]-1;
    if(m<=k)
    {
        cout<<counter<<endl;
        return 0;
    }
}

cout<<-1<<endl;

}


