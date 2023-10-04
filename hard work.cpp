#include<bits/stdc++.h>
using namespace std;

  string s1,s2,s3;

  string  cat(string zrr)
  {
      string prr;
      for(int i=0;i<zrr.size();i++)
    {
        if(zrr[i]>='A'&&zrr[i]<='Z')
        {
            prr+=(zrr[i]+32);
        }
        else if(zrr[i]>='a'&&zrr[i]<='z')
        {
            prr+=zrr[i];
        }
    }
    return prr;
  }
int main()
{
    cin>>s1>>s2>>s3;
  s1=cat(s1);
  s2=cat(s2);
  s3=cat(s3);

  // cout<<arr<<endl;
 // cout<<brr<<frr<<krr<<endl;
   int n;
   cin>>n;

   while(n--)
   {
       string a;
       cin>>a;
       string b=cat(a);

      if(b==s1+s2+s3||b==s1+s3+s2||b==s2+s1+s3||b==s2+s3+s1||b==s3+s2+s1||b==s3+s1+s2)
      {
          cout<<"ACC"<<endl;
      }
      else
      {
          cout<<"WA"<<endl;
      }
   }
}
