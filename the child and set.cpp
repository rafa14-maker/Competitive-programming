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

  vector<long long>arr;

  int s,l;

  cin>>s>>l;

  for(int i=l;i>0&&s>0;i--)
  {
      if(s-(i&-i)>=0)
      {
          s-=(i&-i);
          arr.push_back(i);
      }
  }

  if(s!=0)
  {
      cout<<-1;
  }
  else
  {
     cout<<arr.size()<<endl;
     for(int i=0;i<arr.size();i++)
     {
         cout<<arr[i]<<" ";
     }
  }
}



