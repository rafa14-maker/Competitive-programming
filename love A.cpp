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

    int counter=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='a')counter++;
    }

    int b=arr.size()-counter;

    cout<<counter+min(b,counter-1);
}



