#include<bits/stdc++.h>
using namespace std;

int main()
{
 int num,a,b,c,d,y;

 cin>>num;

 y=num;

 while(true)
 {

 y++;

 a=y/1000;

 b=(y-(a*1000))/100;

 c=((y-(a*1000))-b*100)/10;

 d=y-(a*1000+b*100+c*10);

  if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
  {
      cout<<y<<endl;
      break;
  }




 }



return 0;
}
