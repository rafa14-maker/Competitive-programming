#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
         int counter=0;
         while(n%2==0)
         {
             n/=2;
             counter++;
         }
         if(counter%2==0)cout<<"First Box"<<endl;
            else cout<<"Second Box"<<endl;
       }

    }

