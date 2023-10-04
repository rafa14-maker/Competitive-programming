#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a,b,c,d;
    cin>>a>>b>>c>>d;
    int n = (int)(b-'0');
    n+= 10 *(int)(a-'0');
     int m = (int)(d-'0');
    m+= 10 *(int)(c-'0');
  //  cout<<n<<" "<<m<<endl;
  if(1<=n&&n<=12&&1<=m&&m<=12)
  {
      cout<<"AMBIGUOUS"<<endl;
  }
  else if(1<=n&&n<=12)
  {
      cout<<"MMYY"<<endl;
  }
  else if(1<=m&&m<=12)
  {
       cout<<"YYMM"<<endl;
  }
  else
  {
      cout<<"NA"<<endl;
  }
}
