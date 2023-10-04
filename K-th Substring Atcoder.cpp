#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n;
    cin>>n;
   set<string>s;
 // vector<string>v;
    for(int i=0;i<str.size();i++)
    {
        string st="";
        for(int j=i;j<str.size();j++)
        {
            st+=str[j];
        //    cout<<st<<"\n";
            s.insert(st);
        }
    }
  int counter=0;

  for(set<string>::iterator it = s.begin();it!=s.end();it++)
  {
      counter++;
      if(counter==n)
      {
          cout<<*it<<"\n";
          return 0;
      }
  }

}
