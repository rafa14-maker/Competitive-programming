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

    for(int i=0;i<n;i++)cin>>arr[i];

    int l=0,r=n-1,counter1=0,k=-1;

    string frr;

    while(l<=r)
    {
        if(arr[l]<arr[r])
        {
          if(k<arr[l])
          {
            frr+='L';
            k=arr[l];
            l++;
          }
          else if(k<arr[r])
          {
             frr+='R';
            k=arr[r];
            r--;
          }
          else
          {
              break;
          }
        }
        else
        {
           if(k<arr[r])
          {
            frr+='R';
            k=arr[r];
            r--;
          }
          else if(k<arr[l])
          {
             frr+='L';
            k=arr[l];
            l++;
          }
          else
          {
              break;
          }
        }
    }
    cout<<frr.size()<<endl;
    cout<<frr<<endl;
}

