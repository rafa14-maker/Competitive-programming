#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long  int n,a,l,p,counter=0,i;

    cin>>n;

    string x,y;

    cin>>x>>y;



    for(i=0;i<n;i++)
    {
    l=max(x[i]%10,y[i]%10);
     p=min(x[i]%10,y[i]%10);

       if(l-p==6||l-p==4)
      {
          counter+=4;
      }
      else if(l-p==7||l-p==3)
      {
          counter+=3;
      }
      else if(l-p==8||l-p==2)
      {
          counter+=2;
      }
      else if(l-p==9||l-p==1)
      {
          counter+=1;
      }
       else if(l-p==5)
      {
          counter+=5;
      }



    }

    cout<<counter<<endl;

}
