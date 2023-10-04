#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=1,j,n,counter=0;

    cin>>n;

    for(j=2;;j++)
    {
        if(n>=i)
        {
            n=n-i;
            counter++;
        }
        else if(n<i)
        {
            cout<<counter<<endl;
            return 0;
        }
        i=i+j;
    }
}
