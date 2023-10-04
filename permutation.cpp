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


    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        if(k>0)
        {
            cout<<2*i+2<<" "<<2*i+1<<" ";
        }
        else
        {
            cout<<2*i+1<<" "<<2*i+2<<" ";
        }
        k--;
    }
    cout<<endl;

}



