#include<bits/stdc++.h>
using namespace std;

int frr[10][10];
int ticket[10][10];
int arr[1050];
int n,l;

bool middle(int n)
{
    if(n<4)return false;
    for(int i=0;i<5;i++)
    {
        if(frr[2][i]>=40)return false;
    }
    return true;
}

bool corner()
{
    if(n<4)return false;
    if(frr[0][0]<35&&frr[0][4]<35&&frr[4][0]<35&&frr[4][4]<35)return true;
    return false;
}

bool diagonal()
{
    if(n<9)return false;
    if(frr[0][0]>=45||frr[1][1]>=45||frr[2][2]>=45||frr[3][3]>=45||frr[4][4]>=45)return false;
    if(frr[1][3]>=45||frr[3][1]>=45||frr[0][4]>=45||frr[4][0]>=45)return false;
    return true;
}

bool every()
{
   if(n<25)return false;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           if(frr[i][j]==75)return false;
       }
   }
   return true;
}

void solve(int test)
{
    cin>>n>>l;

    for(int i=0;i<n;i++)cin>>arr[i];

    int cor,mid,dia,tab;
    cin>>cor>>mid>>dia>>tab;

    printf("Case %d:\n",test);

    while(l--){

         for(int i=0;i<5;i++)
         {
             for(int j=0;j<5;j++)
             {
                 cin>>ticket[i][j];
                 frr[i][j]=75;
             }
         }

         for(int i=0;i<n;i++)
         {
             int c=(arr[i]-1)/15;
             for(int j=0;j<5;j++)
             {
                 if(ticket[j][c]==arr[i])
                 {
                     frr[j][c]=i;
                     break;
                 }
             }
         }

        int sum=0;
        if(middle(n))sum+=mid;
        if(corner())sum+=cor;
        if(diagonal())sum+=dia;
        if(every())sum+=tab;
        cout<<sum<<"\n";
    }

}

int main()
{
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        solve(i);
        if(i<q)cout<<"\n";
    }
}
