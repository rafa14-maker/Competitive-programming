#include<bits/stdc++.h>
using namespace std;

 int shuff[100][53],card[53];

 void change(int n)
 {
     int tmp[53];
     for(int i=1;i<=52;i++)
     {
         tmp[i]=card[shuff[n][i]];
     }
     for(int i=1;i<=52;i++)
     {
         card[i]=tmp[i];
     }
 }
 void print()
 {
     char num[][10]={"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
     char suit[][10]={"Clubs","Diamonds","Hearts","Spades"};
     for(int i=1;i<=52;i++)
     {
         printf("%s of %s\n",num[card[i]%13],suit[(card[i]-1)/13]);
     }

 }

 int main()
 {
     int t,n;
     int i,j,k;
     char line[50];
     cin>>t;
     while(t--)
     {
         cin>>n;
         for(k=1;k<=n;k++)
         {
             for(i=1;i<=52;i++)
             {
                 cin>>shuff[k][i];
             }
         }
         for(i=1;i<=52;i++)card[i]=i;

         gets(line);
         while(gets(line))
         {
             if(line[0]=='\0')break;
             sscanf(line,"%d",&n);
             change(n);
         }
         print();
         if(t)puts("");
     }
 }
