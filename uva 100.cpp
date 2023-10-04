#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

const int N = 1e6+7, INF = 1e9+7, K = 9,M=1e5+2;
int i,j,a,b,counter=0;

int main()
{
         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   while(scanf("%d %d",&i,&j)!=EOF)
   {
       int tmp1=i,tmp=j;
       if(i>j)swap(i,j);

    b=0;

       for(a=i;a<=j;a++)
       {
        counter=1;
       unsigned int  k=a;
        while(k!=1)
        {
            counter++;
            if(k%2==1)k=3*k+1;
            else k/=2;
        }
        b=max(counter,b);
       }

       printf("%d %d %d\n",tmp1,tmp,b);
   }


}

