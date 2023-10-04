#include<bits/stdc++.h>
using namespace std;

int convert(string f)
{
    int k=0,p=1;
  //  cout<<f<<endl;
   // reverse(f.begin(),f.end());
    for(int i=0;i<f.size();i++)
    {
      //  cout<<f[i]<<endl;
        k+=(f[i]-'0');
      if(i<f.size()-1)  k*=10;
    }
    return k;
}

int main()
{
    string s;
    cin>>s;
    int counter=1e8;
    for(int i=0;i<s.size()-2;i++)
    {
        string frr;
        frr+=s[i];
        frr+=s[i+1];
        frr+=s[i+2];
        int k=convert(frr);
        counter=min(counter,abs(k-753));
    }
    cout<<counter<<endl;
}
