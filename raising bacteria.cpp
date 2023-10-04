//Dont copy my code ^________^

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;

    while(n>0)
    {
      sum+=n%2;
      n/=2;
    }
    cout<<sum<<endl;
}
