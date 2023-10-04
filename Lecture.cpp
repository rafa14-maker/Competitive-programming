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

string arr[3000],frr[3000],krr[3000];

int n,m;

cin>>n>>m;

for(int i=0;i<m;i++)
{
    cin>>arr[i]>>frr[i];
}

for(int i=0;i<n;i++)
{
    cin>>krr[i];
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(krr[i]==arr[j])
        {
            int k=arr[j].size(),p=frr[j].size();

            if(k>p)cout<<frr[j]<<" ";
            else cout<<arr[j]<<" ";
        }
    }
}
cout<<endl;



}



