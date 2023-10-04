/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n1,m1,n2,m2;
   cin>>n1>>m1;

   int arr[n1][m1];

   for(int i=0;i<n1;i++)
   {
       for(int j=0;j<m1;j++)
       {
           char z;
           cin>>z;
         arr[i][j]=z-'0';
       }
   }

   cin>>n2>>m2;

   int brr[n2][m2];

   for(int i=0;i<n2;i++)
   {
       for(int j=0;j<m2;j++)
       {
            char z;
           cin>>z;
         brr[i][j]=z-'0';
       }
   }

   int x=0,y=0,z=0;

 for(int xi=-50;xi<=50;xi++)for(int yj=-50;yj<=50;yj++){
		int tv=0;
		for(int i=(xi<0?-xi:0);i<n1&&i+xi<n2;i++){
			for(int j=(yj<0?-yj:0);j<m1&&j+yj<m2;j++)tv+=arr[i][j]*brr[i+xi][j+yj];
		}
		if(tv>z){
			x=xi;
			y=yj;
			z=tv;
		}
	}
cout<<x<<" "<<y<<endl;
         }



