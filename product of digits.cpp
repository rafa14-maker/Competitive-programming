#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int  a,b,c,i,j,d,counter,found;

   while(a!=0)
   {

    cin>>a;

     if(a>0){
    for(i=2;i<=a;i++){
        found=0; counter=0;    b=a;
            while(b%i==0)
            {
           counter++;
                b/=i;
                if(b==1)
                {
                    cout<<counter<<endl;
                    i=a;
                     found++;
                    break;
                }
            }

    }
    if(a==1)
         {
             cout<<1<<endl;
         }

}
else if(a==-1){
    cout<<1<<endl;
}


 else if (a<0){
     a*=-1;

   for(i=2;i<=a;i++){
        found=0; counter=0;    b=a;
            while(b%i==0)
            {
           counter++;
                b/=i;
                if(b==1&&counter%2!=0)
                {


                    cout<<counter<<endl;

                    i=a;
                     found++;
                    break;
                }
            }



    }
                if(counter==0)
            {
                cout<<1<<endl;
                break;
            }


}

}

}




