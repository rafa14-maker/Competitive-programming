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

    int arr[10005];

    int n,m,d;
    cin>>n>>m>>d;

    for(int i=0;i<n*m;i++)
    {
        cin>>arr[i];
    }

   long long  k=10000000000;

    for(int i=0;i<n*m;i++)
    {
        long long counter=0;
        for(int j=0;j<n*m;j++)
        {
            if(arr[i]!=arr[j]){
            if(abs(arr[i]-arr[j])%d==0)
            {
                int c=abs(arr[i]-arr[j]);
                counter+=c/d;
            }
            else
            {
                counter=10000000000;
                break;
            }
            }
        }
        k=min(k,counter);
      //  cout<<k<<" ";
    }

    if(k==10000000000)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<k<<endl;
    }

}



