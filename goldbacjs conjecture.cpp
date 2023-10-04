#include<bits/stdc++.h>
using namespace std;
#define max 10000003

bool prime[max];
vector<int>arr;

void seive()
{
    memset(prime,true,max);

    for(int i=2;i*i<max;i++)
    {
        if(prime[i]==true)

         {



            for(int j=i*2;j<max;j+=i)
            {
                prime[j]=false;
            }
        }
    }

    for(int i=2;i<=max;i++)
    {
        if(prime[i]==true)
        {
            arr.push_back(i);
        }
    }


}

int main()
{
    seive();

    int t,p=0;

    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        int counter=0;


            for(int i=0;arr[i]<=n-arr[i];i++){
                if(prime[n-arr[i]])counter++;
            }


        printf("Case %d: %d\n",++p,counter);
    }
}
