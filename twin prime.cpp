#include<bits/stdc++.h>
using namespace std;
#define max 20000005

bool prime[max];

int twin[max];

int i,j,k,l,p;

void seive()
{

    memset(prime,true,sizeof(prime));

    for(int p=2;p*p<=max;p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*2;i<=max;i+=p)
            {
                prime[i]=false;
            }
        }
    }

    for(i=2;i<max;i++)
    {
        if(prime[i]==true){

        if(prime[i+2]!=true&&prime[i-2]!=true)
        {

           prime[i]=false;
        }
    }
    }
    j=1;
    for(int i =3;i<=max;i++){
        if(prime[i]==true&& prime[i+2]==true)
        {
            twin[j]=i;
            j++;
        }
    }

}

int main()
{
    seive();

    while((scanf("%d",&k)==1)){

   printf("(%d, %d)\n",twin[k],twin[k]+2);
}
}
