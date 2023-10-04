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

    string arr;
    cin>>arr;

    int frr[10];

    for(int i=1;i<=9;i++)
    {
        cin>>frr[i];
    }
  bool gd=false;
    for(int i=0;i<arr.size();i++)
    {
        int b=arr[i]-'0';
        if(gd&&b>frr[b])break;
        if(b<frr[b])
        {
           gd=true;
           arr[i]=frr[b]+'0';
        }
    }
  cout<<arr<<endl;
}



