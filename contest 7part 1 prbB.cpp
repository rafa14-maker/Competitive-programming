#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,counter=0;

    cin>>a>>b>>c>>d;

     if(a==b)
     {
         counter++;
     }
     if(a==c)
     {
         counter++;
     }
     if(a==d)
     {
         counter++;
     }
     if(b==c)
     {
         counter++;
     }
      if(b==d)
     {
         counter++;
     }
     if(c==d)
     {
         counter++;
     }

    if(counter>3)
    {
        cout<<3<<endl;
        return 0;
    }
    if(counter==3)
    {
        cout<<counter-1<<endl;
        return 0;
    }


    cout<<counter<<endl;


}
