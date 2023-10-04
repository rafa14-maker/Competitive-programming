#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int w,b;
    cin>>w>>b;

   int arr[2][n+5];

   for(int i=0;i<2;i++)
   {
       for(int j=0;j<n;j++)arr[i][j]=1;
   }

   for(int j=0;j<k1;j++)arr[0][j]=0;
   for(int j=0;j<k2;j++)arr[1][j]=0;

   int one=0,two=0;

   for(int i=0;i<n;i++)
   {
       if(arr[0][i]==arr[1][i]&&arr[0][i]!=2)
       {
         //  arr[0][i]=2;
         //  arr[1][i]=2;
           if(arr[0][i]==0)one++;
           else two++;

           arr[0][i]=2;
           arr[1][i]=2;

       }
       else
       {
           if(i+1<n)
           {
               if(arr[0][i]!=2&&arr[0][i]==arr[0][i+1])
               {
                //   arr[0][i]=2;
                //   arr[0][i+1]=2;
                   if(arr[0][i]==0)one++;
                   else two++;

                    arr[0][i]=2;
                   arr[0][i+1]=2;

               }
               if(arr[1][i]!=2&&arr[1][i]==arr[1][i+1])
               {
                 //  arr[1][i]=2;
                   //arr[1][i+1]=2;
                   if(arr[1][i]==0)one++;
                   else two++;

                    arr[1][i]=2;
                   arr[1][i+1]=2;
               }
           }
       }
   }
  //  cout<<one<<" "<<two<<endl;
   if(one>=w&&two>=b)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
