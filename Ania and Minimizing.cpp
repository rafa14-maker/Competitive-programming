#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

   if(n==1&&k>0)
   {
       cout<<0<<endl;
       return 0;
   }


    for(int i=0;i<s.size()&&k>0;i++)
    {
      if(i==0)
      {
          if(s[i]!='1'&&s[i]!='0')
          {
              s[i]='1';
              k--;
              if(k==0)break;
          }

      }
      else if(s[i]!='0'&&i!=0)
      {
          s[i]='0';
          k--;
          if(k==0)break;
      }
    }
    cout<<s<<endl;
}
