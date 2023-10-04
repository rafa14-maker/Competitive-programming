#include<bits/stdc++.h>
using namespace std;
set<int>s;

 bool tr[65][65][65];

void buil()
{
     for(int i=0;i<=20;i++)
   {
       s.insert(i);
       s.insert(i*2);
       s.insert(i*3);
   }
   s.insert(50);
}

void solve(int n)
{
  for(int i=0;i<=60;i++)for(int j=0;j<=60;j++)for(int k=0;k<=60;k++)tr[i][j][k]=false;

   int com=0,per=0;

   for(auto i=s.begin();i!=s.end();i++)
   {
       for(auto j=s.begin();j!=s.end();j++)
       {
           for(auto k=s.begin();k!=s.end();k++)
           {
               if(*i+*k+*j!=n)continue;

               per++;

               if(!tr[*i][*j][*k])
               {
                   com++;
                   tr[*i][*j][*k]=true; tr[*i][*k][*j]=true; tr[*j][*i][*k]=true;
                    tr[*j][*k][*i]=true; tr[*k][*i][*j]=true; tr[*k][*j][*i]=true;
               }
           }
       }
   }
   if (com == 0 && per == 0) {
            cout << "THE SCORE OF " << n << " CANNOT BE MADE WITH THREE DARTS." << endl;
        } else {
            cout << "NUMBER OF COMBINATIONS THAT SCORES " << n << " IS " << com << "." << endl;
            cout << "NUMBER OF PERMUTATIONS THAT SCORES " << n << " IS " << per << "." << endl;
        }
        cout << "**********************************************************************" << endl;
}

int main()
{
    buil();
   while(1)
   {
       int n;
       cin>>n;
       if(n<=0)
       {
           cout<<"END OF OUTPUT"<<endl;
           break;
       }
       solve(n);
   }
}
