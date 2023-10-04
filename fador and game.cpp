/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n,m,k;
   cin>>n>>m>>k;

   int arr[n+1],frr[m+1],krr[n+1];

   for(int i=0;i<=m;i++)
   {
       cin>>frr[i];
   }
   int p=frr[m];

   for(int i=0;i<n;i++)
   {
       if(p>0)
       {
           if(p%2==1){arr[i]=1;}
           else{arr[i]=0;}
           p/=2;
       }
       else
       {
           arr[i]=0;
       }
   }


   int found=0;
   for(int j=0;j<m;j++)
   {
       int counter=0,p=frr[j];
       for(int i=0;i<n;i++)
   {
       if(p>0)
       {
           if(p%2==1){krr[i]=1;}
           else{krr[i]=0;}
           p/=2;
       }
       else
       {
           krr[i]=0;
       }
   }

   for(int i=0;i<n;i++)
   {
       if(arr[i]!=krr[i])counter++;
   }
   if(counter<=k)found++;
   }

   cout<<found<<endl;

}



