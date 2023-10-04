#include<bits/stdc++.h>
using namespace std;

int cha(char n)
{
    if(n=='.')
    {
        return 1;
    }
    return -1;
}

int main()
{
  char arr[4][4];

  for(int i=0;i<4;i++)
  {
      gets(arr[i]);
  }
  int counter=0;
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          int tmp=cha(arr[i][j])+cha(arr[i+1][j])+cha(arr[i][j+1])+cha(arr[i+1][j+1]);
          if(tmp==4||tmp==-4||tmp==2||tmp==-2)
          {
              counter++;
          }
      }
  }

  if(counter==0)
  {
      cout<<"NO"<<endl;
  }
  else
  {
      cout<<"YES"<<endl;
  }

  return 0;
}
