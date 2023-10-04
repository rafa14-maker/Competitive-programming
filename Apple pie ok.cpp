#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>k>>m>>n;
    int f;
    f=k*10;
    f=f-n;
  //  cout<<f<<endl;
    int pk;
    pk=f/m;
    if(f%m!=0)pk++;
    cout<<pk<<endl;
}
