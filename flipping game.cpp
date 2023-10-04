//Dont look at my code :-)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,l=0,k=0,a,j=-100;
    cin>>n;

    while(n--)
    {
        cin>>a;
        if(a==0)
        {
            l++;
        }
      else if(a==1)
        {
            l--;
            k++;
        }
        if(j<l)
        {
            j=l;
        }
        if(l<0)
        {
            l=0;
        }

    }
cout<<j+k<<endl;
}
