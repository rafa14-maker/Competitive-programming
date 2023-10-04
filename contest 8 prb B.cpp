#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i ,b,tmp,rem,sum=0,k,counter;

    cin>>b;

    for(i=2;i<b;i++)
    {
       tmp=b;

       while(tmp>0)
       {
           rem=tmp%i;
           tmp/=i;
           sum+=rem;

       }
    }
    cout<<sum<<"/"<<b-2<<endl;


}

