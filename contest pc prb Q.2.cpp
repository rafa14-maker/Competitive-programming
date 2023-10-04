#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,k,n;

    int arr[5];

    for(i=0;i<5;i++)
    {
        arr[i]=0;
    }

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            arr[0]+=1;
        }
        else if(a==2)
        {
            arr[1]+=1;
        }
         else if(a==3)
        {
            arr[2]+=1;
        }
         else if(a==4)
        {
            arr[3]+=1;
        }
         else if(a==5)
        {
            arr[4]+=1;
        }
    }

   for(i=0;i<5;i++)
   {
       int counter=0;

       for(j=0;j<5;j++)
       {
           if(arr[i]<arr[j])
           {
               counter++;
               break;
           }
       }
       if(counter==0)
       {
           cout<<i+1<<endl;
           return 0;
       }
   }



}
