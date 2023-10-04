#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;
    while(n>0)
    {
      //  counter++;
      // cout<<n<<endl;
        int r=0;
        int a=n;
        while(a>0)
        {
         r=max(r,a%10);
         a/=10;
        }
        n-=r;
       counter++;
    }
    cout<<counter<<endl;
}
