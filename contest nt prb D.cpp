#include<bits/stdc++.h>
using namespace std;

#define MAX 10000000;

bool prime[max];

memset(prime,max,true);

void seive()
{
    int i,j;

    for(i=2;i*i<max;i++)
    {
        if(prime[i]==true)
        {
            for(j=i;j<max;j+=i)
            {
                prime[j]=false;
            }
        }
    }

}

int main()
{
    seive();

    int i,j;

    for(i=0;i<9;i++)
    {
        cout<<prime[i]<<endl;
    }

}
