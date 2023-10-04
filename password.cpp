#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;

  for(int i=111;i<1000;i++)
  {
      int k=i;
      int g=0;
      while(k>0)
      {
          int r=(k%10);
          if(r<=n&&r!=0)g++;
          else break;
          k/=10;
      }
      if(g==3)counter++;
  }
  cout<<counter<<endl;

}
