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

    int counter=0,found=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='4')counter++;
        else if(arr[i]=='7')found++;
    }

    if(counter>found)cout<<4<<endl;
    else if(counter<found)cout<<7<<endl;
    else if(counter==found&&counter!=0)cout<<4<<endl;
    else cout<<-1<<endl;

}



