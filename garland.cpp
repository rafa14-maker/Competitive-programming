/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int arr[27],frr[27];

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string krr,lrr;
    cin>>krr>>lrr;

    for(int i=0;i<krr.size();i++)
    {
        arr[krr[i]-'a']++;
    }

     for(int i=0;i<lrr.size();i++)
    {
        frr[lrr[i]-'a']++;
    }
    int k=0;
    for(int i=0;i<27;i++)
    {
        if(arr[i]==0&&frr[i]!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
        else
        {
          k+=min(arr[i],frr[i]);
        }
    }
    cout<<k<<endl;

}



