#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,n,b,k=0;


    scanf("%lli",&n);

    while(n--)
    {
        scanf("%lli",&a);
        k++;
        b=a%25;



        if(a%25==0)
        {
            printf("Case %lli: 1 5\n",k);
        }


        else if(b==1)
        {
            printf("Case %lli: 1 1\n",k);
        }

       else if(b==2)
        {
            printf("Case %lli: 1 2\n",k);
        }
        else if(b==3)
        {
            printf("Case %lli: 2 2\n",k);
        }

      else  if(b==4)
        {
            printf("Case %lli: 2 1\n",k);
        }
        else if(b==5)
        {
            printf("Case %lli: 3 1\n",k);
        }

      else  if(b==6)
        {
            printf("Case %lli: 3 2\n",k);
        }
        else if(b==7)
        {
            printf("Case %lli: 3 3\n",k);
        }

      else  if(b==8)
        {
            printf("Case %lli: 2 3\n",k);
        }
        else if(b==9)
        {
            printf("Case %lli: 1 3\n",k);
        }

      else  if(b==10)
        {
            printf("Case %lli: 1 4\n",k);
        }
        else if(b==11)
        {
            printf("Case %lli: 2 4\n",k);
        }

    else    if(b==12)
        {
            printf("Case %lli: 3 4\n",k);
        }
        else if(b==13)
        {
            printf("Case %lli: 4 4\n",k);
        }

      else  if(b==14)
        {
            printf("Case %lli: 4 3\n",k);
        }
        else if(b==15)
        {
            printf("Case %lli: 4 2\n",k);
        }

      else  if(b==16)
        {
            printf("Case %lli: 4 1\n",k);
        }
        else if(b==17)
        {
            printf("Case %lli: 5 1\n",k);
        }

      else  if(b==18)
        {
            printf("Case %lli: 5 2\n",k);
        }
        else if(b==19)
        {
           printf("Case %lli: 5 3\n",k);
        }

      else  if(b==20)
        {
           printf("Case %lli: 5 4\n",k);
        }
        else if(b==21)
        {
            printf("Case %lli: 5 5\n",k);
        }

      else  if(b==22)
        {
            printf("Case %lli: 4 5\n",k);
        }
        else if(b==23)
        {
           printf("Case %lli: 3 5\n",k);
        }

      else  if(b==24)
        {
           printf("Case %lli: 2 5\n",k);
        }

    }

    return 0;
}
