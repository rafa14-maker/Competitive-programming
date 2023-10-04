
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

   string arr[]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","0"};

   int n;
   cin>>n;

   int counter=0;
   string frr;

   while(n--)
   {
       cin>>frr;
       for(int i=0;i<30;i++)
       {
           if(arr[i]==frr)
           {
            //   cout<<frr<<" ";
               counter++;
               break;
           }
       }
   }
   cout<<counter<<endl;
}


