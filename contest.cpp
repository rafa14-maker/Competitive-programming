#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=max((3*a)/10,a-(a/250)*c);
      f=max((3*b)/10,b-(b/250)*d);
      if(e==f)cout<<"Tie"<<endl;
      else  if(e<f)cout<<"Vasya"<<endl;
      else if(e>f)cout<<"Misha"<<endl;
}
