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

  string frr=arr;

  sort(frr.begin(),frr.end());

  for(int i=0;i<arr.size();i++)
  {
      if(frr[i]!=arr[i])
      {
          for(int j=i+1;j<arr.size();j++)
          {
              if(frr[i]==arr[j])
              {
                  cout<<"YES"<<endl;
                  cout<<min(i+1,j+1)<<" "<<max(i+1,j+1)<<endl;
                  return 0;
              }
          }
      }
  }

  cout<<"NO"<<endl;

}



