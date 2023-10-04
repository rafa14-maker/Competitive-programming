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
    int n,m,sum1=0,sum2=0;
    cin>>n>>m;

    int arr[n+5],frr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>frr[i];
        sum1+=arr[i];
        sum2+=frr[i];
    }
    if(m<sum1||m>sum2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){

	int c=min(frr[i],m-sum1+arr[i]);

    cout<<c<<" ";

    m=m-c;
    sum1=sum1-arr[i];
         }
}


