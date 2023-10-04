/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int arr[101];

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;



    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    sort(arr+1,arr+n+1);

    double sum=0,pi=2*acos(0.0);

    for(int i=n;i>=1;i-=2)
    {
        sum+=pi*(arr[i]*arr[i]-arr[i-1]*arr[i-1]);
    }

    printf("%.10lf\n",sum);

}


