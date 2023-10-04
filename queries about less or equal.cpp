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

    long long  n,m;
    cin>>n>>m;

    long long  arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    while(m--)
    {
        int a;
        cin>>a;

        long long l =arr[0],mid;
        long long  r=arr[n-1];

        while(l<r)
        {
            mid=(l+r)/2;
            if(arr[mid]<=a)
            {
                while(arr[mid+1]<=a){mid++;}
                break;
            }
            else
            {
                r=mid;
            }
        }

        cout<<arr[mid]<<endl;

    }

}



