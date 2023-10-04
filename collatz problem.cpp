#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    k=n;
    int counter=1;
    while(n>1)
    {
        counter++;
        if(n%2==0)n=n/2;
        else n=n*3+1;
    }

   if(k>2) cout<<counter+1<<endl;
   else if(k==2)cout<<1<<endl;
   else cout<<1<<endl;
}
