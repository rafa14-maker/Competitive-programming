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

    int n,a;
    cin>>n;

    int arr[n+1];

    for(int i=1;i<=n;i++)arr[i]=0;

    int p;
    cin>>p;

    while(p--)
    {
        cin>>a;
        arr[a]++;
    }

    int q;
    cin>>q;

    while(q--)
    {
        cin>>a;
        arr[a]++;
    }


    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
   cout<<"I become the guy."<<endl;
}



