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

  int n,m;
  cin>>n>>m;

  char arr[n][m];

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          arr[i][j]='.';
      }
  }
    for(int i=0;i<n;i+=2)
  {
      for(int j=0;j<m;j++)
      {
          arr[i][j]='#';
      }
  }
  int k=0;
     for(int i=1;i<n;i+=2)
  {
     if(k%2==0)arr[i][m-1]='#';
     else arr[i][0]='#';

     k++;
  }
   for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          cout<<arr[i][j];
      }
      cout<<endl;
  }


}



