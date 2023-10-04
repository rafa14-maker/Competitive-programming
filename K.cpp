#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=1;
    int sum=0;
    int p=0;
    while(sum<=n)
    {
       sum=(pow(2,counter)-1)*(pow(2,counter-1));
       if(n%sum==0)p=max(p,sum);
       counter++;
    }
    cout<<p<<endl;
}
