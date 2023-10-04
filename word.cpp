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
    string arr;
    cin>>arr;
    int counter=0,found=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')counter++;
        if(arr[i]>='A'&&arr[i]<='Z')found++;
    }

    if(counter>=found)
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>='A'&&arr[i]<='Z')arr[i]+=32;
        }
        cout<<arr<<endl;
    }
    else if(counter<found)
    {
         for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>='a'&&arr[i]<='z')arr[i]-=32;
        }
        cout<<arr<<endl;
    }

}



