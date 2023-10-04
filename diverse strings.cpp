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
    int n;
    cin>>n;

    while(n--){
    string arr;
    cin>>arr;

    int counter=0;
    sort(arr.begin(),arr.end());
   // cout<<arr<<endl;

    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]+1<arr[i+1]||arr[i]==arr[i+1])
        {
            counter++;
         //   cout<<arr[i]<<endl;
        }
    }

    if(counter==0)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }

    }

}



