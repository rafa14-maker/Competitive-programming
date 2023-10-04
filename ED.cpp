#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,frr;
    cin>>str;
    frr=str;
  sort(str.begin(),str.end());
  if(frr==str)reverse(str.begin(),str.end());
    cout<<str<<endl;
}
