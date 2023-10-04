#include<bits/stdc++.h>
using namespace std;
#define max 100000000
int zero(int n)
{
    int count=0;
    while(n>0)
    {
     n/=5;
     count+=n;
    }
    return count;
}

int boss(int l,int r,int k)
{
    if (r >= l) {
        int mid=l+(r-l)/2;
         int counter=zero(mid);

         if(counter==k)
         {
             while(zero(mid)==k)
             {
                 mid--;
             }
             return mid++;
         }
         if(counter<k) {
		return boss(l+1,r,k);
	}

	else {
		return boss(l,r-1,k);
}

    }

    return -1;
}

int main()
{
   int a,b,c,l;

   cin>>a;

   for(b=1;b<=a;b++)
   {
       cin>>c;
      l=boss(0,max,c);
       if(l==-1)
       {
           printf("Case %d: impossibe\n",b);
       }
       else
       {
           printf("Case %d: %d\n",b,l);
       }
   }
}
