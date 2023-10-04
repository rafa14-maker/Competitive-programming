#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr;
    int n,i,k,l,p,j;
    scanf("%d",&n);
    while(n--)
    {
       cin>>frr;
       k=0;
       for(i=0;arr[i]!='\0';i++)
       {
           if(arr[i]==frr[k])
           {
               k++;
               p=i;
           }
       }
        for(i=0;arr[i]!='\0';i++)
       {
           if(arr[i]==frr[0])
           {
               l=i;
               break;
           }
       }


       if(k!=frr.size())
       {
           cout<<"Not matched"<<endl;
       }
       else
       {
           printf("Matched %d %d\n",l,p);
       }
    }
}
