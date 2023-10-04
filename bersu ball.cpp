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

    int n;
    cin>>n;

    int arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
     int m;
     cin>>m;

     int frr[m+5];

     for(int i=0;i<m;i++)
     {
         cin>>frr[i];
     }

     sort(frr,frr+m);

     int counter=0;

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(arr[i]==frr[j]||arr[i]==frr[j]+1||arr[i]==frr[j]-1)
             {
                 counter++;
                 frr[j]=-9;
                 break;
             }
         }
     }

     cout<<counter<<endl;

}



