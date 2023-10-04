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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int arr[d+5];
    for(int i=1;i<=d;i++)arr[i]=1;
    for(int i=k;i<=d;i+=k)arr[i]=0;
    for(int i=l;i<=d;i+=l)arr[i]=0;
    for(int i=m;i<=d;i+=m)arr[i]=0;
    for(int i=n;i<=d;i+=n)arr[i]=0;

    int counter=0;

    for(int i=1;i<=d;i++)
    {
        if(arr[i]==0)counter++;
    }
    cout<<counter<<endl;
}



