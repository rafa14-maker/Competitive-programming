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

    int n,x;
    cin>>n>>x;
    int arr[n*2+5];

    for(int i=1;i<=n*2;i++)
    {
        cin>>arr[i];
    }
    int i=0,k=1,sum=0;

    while(i<arr[n*2])
    {
        if(i+x<arr[k])
        {
            i+=x;
        }
        else if(i+x>=arr[k])
        {
            sum+=(arr[k+1]-(i));
            i=arr[k+1];
            k+=2;
        }
    }
    cout<<sum<<endl;
}



