#include<bits/stdc++.h>
using namespace std;


void solve()
{
   int a,b;
   cin>>a>>b;
   char arr[a+5][b+5];



   for(int i=0;i<a;i++)
   {
       for(int j=0;j<b;j++)
       {
           cin>>arr[i][j];
       }
   }

  /* for(int i=0;i<a;i++)
   {
       for(int j=0;j<b;j++)
       {
           if(arr[i][j]=='.')
           {
               if(i+1<a&&arr[i][j]=='.')
               {
                   if(arr[i+1][j]=='R')arr[i][j]='W';
                   else if(arr[i+1][j]=='W')arr[i][j]='R';
               }
                 if(j+1<b&&arr[i][j]=='.')
               {
                   if(arr[i][j+1]=='R')arr[i][j]='W';
                   else if(arr[i][j+1]=='W')arr[i][j]='R';
               }
                  if(i-1>=0&&arr[i][j]=='.')
               {
                   if(arr[i-1][j]=='R')arr[i][j]='W';
                   else if(arr[i-1][j]=='W')arr[i][j]='R';
               }
                  if(j-1>=0&&arr[i][j]=='.')
               {
                   if(arr[i][j-1]=='R')arr[i][j]='W';
                   else if(arr[i][j-1]=='W')arr[i][j]='R';
               }
           }
       }
   }

   bool tr=true;

   for(int i=0;i<a;i++)
   {
       for(int j=0;j<b;j++)
       {
           if(i+1<a)if(arr[i+1][j]==arr[i][j])tr=false;
           if(j+1<b)if(arr[i][j+1]==arr[i][j])tr=false;
           if(i-1>=0)if(arr[i-1][j]==arr[i][j])tr=false;
           if(j-1>=0)if(arr[i][j-1]==arr[i][j])tr=false;
       }
   }

   if(tr)
   {
       cout<<"YES"<<endl;
       for(int i=0;i<a;i++)
       {
           for(int j=0;j<b;j++)cout<<arr[i][j];
           cout<<endl;
       }
   }
   else cout<<"NO"<<endl;
   */

   int w=-1,r=-1;
   bool tr=true;

   for(int i=0;i<a;i++)
   {
       for(int j=0;j<b;j++)
       {
           if(arr[i][j]=='W')
           {
               if(w==-1)w=(i+j)%2;
               else
               {
                   if(w!=(i+j)%2)tr=false;
               }
           }
           else if(arr[i][j]=='R')
           {
               if(r==-1)r=(i+j)%2;
               else
               {
                   if(r!=(i+j)%2)tr=false;
               }
           }
       }
   }
   if(r==w&&r!=-1)tr=false;

   if(w==-1&&r!=-1)
   {
       if(r==1)w=0;
       else w=1;
   }
   if(r==-1&&w!=-1)
   {
       if(w==1)r=0;
       else r=1;
   }
   if(r==-1&&w==-1)
   {
       r=0;
       w=1;
   }

   if(!tr)cout<<"NO"<<endl;
   else
   {
       cout<<"YES"<<endl;
       for(int i=0;i<a;i++)
       {
           for(int j=0;j<b;j++)
           {
               if(arr[i][j]=='.')
               {
                   if((i+j)%2==w)cout<<"W";
                   else cout<<"R";
               }
               else cout<<arr[i][j];
           }
           cout<<endl;
       }
   }

}

int main()
{
    int q;cin>>q;while(q--)solve();
 // solve();
}

