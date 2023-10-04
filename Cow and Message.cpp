#include<bits/stdc++.h>
using namespace std;

long long arr1[30][30];
long long  arr2[30];


int main()
{
    string s;
    cin>>s;

  for(int i=0;i<s.size();i++)
  {
      int k=(s[i]-'a');
      for(int j=0;j<26;j++)
      {
         arr1[j][k]+=arr2[j];
      }
      arr2[k]++;
  }

  long long counter=0;
  for(int i=0;i<26;i++)
  {
      counter=max(counter,arr2[i]);
      for(int j=0;j<26;j++)
      {
          counter=max(counter,arr1[i][j]);
      }
  }
  cout<<counter<<endl;

}
