#include<bits/stdc++.h>
using namespace std;
#define LIMIT 1000000
 bool prime[LIMIT];
 long long  seiveof()
{
    memset(prime,true,sizeof(prime));

    for( long long  p=2;p*p<=LIMIT;p++)
    {
        if(prime[p]==true)
        {
            for( long long  i=p*2;i<=LIMIT;i+=p)
            {
                prime[i]=false;
            }
        }
    }
}
int check_perfect_square(long long n){
    double sqrt_n = sqrt(n);
    if(sqrt_n == int(sqrt_n)){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    seiveof();
     long long n,a,b,c,i;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;

       if(a==1)
       {
           cout<<"NO"<<endl;
       }

       else if(a%2==0&&a!=4)
        {
            cout<<"NO"<<endl;
        }

       else if(check_perfect_square(a)&&prime[int (sqrt(a))]==1)
        {


                cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }


    }


}
