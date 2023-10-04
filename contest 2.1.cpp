#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,counter=0,founder=0,n,i;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        if(a>b)
        {
            counter++;
        }
        else if(b>a)
        {
            founder++;
        }
    }
  if(counter>founder)
  {
      cout<<"Mishka"<<endl;
  }
  else if(counter==founder)
  {
      cout<<"Friendship is magic!^^"<<endl;
  }
  else if(counter<founder)
  {
      cout<<"Chris"<<endl;
  }

  return 0;
}
