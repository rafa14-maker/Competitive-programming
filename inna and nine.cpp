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

    string arr;
    cin>>arr;
     long long  a=1;
    long long counter=1;

    for(int i=0;i<arr.size()-1;i++)
    {
       if((arr[i]-'0')+arr[i+1]-'0'==9)a++;
       else if(a%2==1)counter*=(a/2+1),a=1;
       else a=1;
    }

    if(a%2==1)counter*=(a/2+1);

    cout<<counter<<endl;

}
