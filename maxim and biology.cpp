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
    string frr="ACTG";

    string arr;
    cin>>arr;

    int counter=0,k=100000000;

    for(int i=0;i<n;i++)
    {
        counter=0;
      if(i+3>arr.size())break;
        if(abs(arr[i]-frr[0])>13)
        {
          counter+=26-abs(arr[i]-frr[0]);
        }
        else
        {
             counter+=(abs(arr[i]-frr[0]));
        }
      // cout<<counter<<" ";
        if(arr[i+1]-frr[1]>13)
        {
          counter+=26-abs(arr[i+1]-frr[1]);
        }
        else
        {
             counter+=(abs(arr[i+1]-frr[1]));
        }
     //   cout<<counter<<" ";
        if(arr[i+2]-frr[2]>13)
        {
          counter+=26-abs(arr[i+2]-frr[2]);
        }
        else
        {
            counter+=(abs(arr[i+2]-frr[2]));
        }
     //    cout<<counter<<" ";
        if(arr[i+3]-frr[3]>13)
        {
          counter+=26-abs(arr[i+3]-frr[3]);
        }
        else
        {
             counter+=(abs(arr[i+3]-frr[3]));
        }
      //  cout<<counter<<" ";
        k=min(k,counter);
    }

    cout<<k<<endl;

}



