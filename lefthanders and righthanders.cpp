/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
   //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    string arr;

    cin>>arr;

    int p=arr.size()/2;
    for(int i=0;i<arr.size()/2;i++)
    {
        if(arr[i]=='L'&&arr[p]=='R')
        {
            cout<<i+1<<" "<<p+1<<endl;
        }
        else
        {
            cout<<p+1<<" "<<i+1<<endl;
        }
        p++;
    }
}



