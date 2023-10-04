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

     int n,m;
     cin>>n>>m;

     int arr[n+5][m+5];

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cin>>arr[i][j];
         }
     }

     int flag=0;

      for(int i=0;i<n;i++)
     {
         int counter=0;
        int  k=0;
         for(int j=0;j<m;j++)
         {
             if(k==0)k=arr[i][j];
               else if(k==arr[i][j])counter++;
         }
         if(counter==0&&k!=0)
         {
             for(int j=0;j<m;j++)
            {
                cout<<<<" ";
            }
            return 0;
         }
     }

     if(flag==0)
     {

    for(int j=0;j<m;j++)
     {
         int counter=0;
         int k=0;
         for(int i=0;i<n;i++)
         {
             if(k==0)k=arr[i][j];
              else  if(k==arr[i][j])counter++;
         }
         if(counter==0&&k!=0)
         {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i][j]<<" ";
            }
            return 0;
         }
     }
     }
     if(flag==0)
     {
         cout<<"NIE"<<endl;
     }
}



