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

    int n,s,t;
    cin>>n>>s>>t;

    int arr[n+5];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    if(s==t)
    {
        cout<<0<<endl;
        return 0;
    }
    int k=n,counter=0,p=s;

    while(k--)
    {
        counter++;
        p=arr[p];
        if(p==t)
        {
            cout<<counter<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;

}



