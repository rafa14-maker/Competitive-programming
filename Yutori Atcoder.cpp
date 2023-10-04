#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int counter=0;
    for(int i=2;i<=sqrt(n)+5;i++)
    {
        int idx=n;
     //  cout<<idx<<endl;
        while(idx>1)
        {
            if(idx%i==0)idx/=i;
            else idx-=i;
          //  if(idx<=1)break;
        }
        if(idx==1)counter++;
    }
    cout<<counter<<endl;
}
