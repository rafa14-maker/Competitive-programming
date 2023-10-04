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

    int n,d,l;
    cin>>n>>d>>l;
    int arr[n+5];

    for(int i=1;i<=n;i++)
    {
        if(d>0)arr[i]=l;
        else arr[i]=1;

        d=arr[i]-d;
    }

    arr[n]-=d;

    if(arr[n]<=0||arr[n]>l)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}



