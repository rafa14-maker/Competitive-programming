#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,digit=0,k,p,tmp,num,first,last;

    cin>>num;

    tmp=num;

    while(tmp>0)
    {
        digit++;
        tmp/=10;
    }

     if(digit==1)
     {
         cout<<44<<endl;
          return 0;
     }

     if(digit==2)
     {
         if(num<=44)
         {
             cout<<44<<endl;
              return 0;
         }
         else if(num<=47)
         {
           cout<<47<<endl;
            return 0;
         }
            else if(num<=74)
            {
                cout<<74<<endl;
                 return 0;
            }
            else if(num<=77)
            {
                cout<<77<<endl;
                 return 0;
            }
            else if(num>77)
            {
                cout<<4444<<endl;
                 return 0;
            }

     }
     if(digit==3)
     {
         cout<<4444<<endl;
         return 0;
     }

     if(digit==5||digit==6)
     {
         cout<<4444444<<endl;
         return 0;
     }
     if(digit==4)
     {
       if(num<=4444)
       {
           cout<<4444<<endl;
           return 0;
       }

       else if(num<7777)
       {
           while(num<7777){

           last = num%10;
           int third=((num-last)/10)%10;
           int second=((num-(third*10+last))/100)%10;
           first=((num-second*100-third*10-last)/1000);


           if((first==4||first==7)&&(second==4||second==7)&&(third==4||third==7)&&(last==4||last==7))
           {
               cout<<num<<endl;
               return 0;
           }
           else{num++;}

           }

       }
        else if(num>7777)
       {
           cout<<4444444<<endl;
           return 0;
       }
     }
     if(digit==7)
     {
         if(num<=4444444)
         {
             cout<<4444444<<endl;
             return 0;
         }
         else if(num>4444444&&num<7777777)
         {
           while(num<7777777){
           last=num%10;

            int six=((num-last)/10)%10;

            int fifth=((num-(six*10)-last)/100)%10;

            int forth=((num-(fifth*100)-(six*10)-last)/1000)%10;

           int third=((num-(forth*1000)-(fifth*100)-(six*10)-last)/10000)%10;

           int second=((num-(third*10000)-(forth*1000)-(fifth*100)-(six*10)-last)/100000)%10;

           first=num-(second*100000)-(third*10000)-(forth*1000)-(fifth*100)-(six*10)-last;

           first/=1000000;

           if((first==4||first==7)&&(second==4||second==7)&&(third==4||third==7)&&(forth==4||forth==7)&&(six==4||six==7)&&(last==4||last==7)&&(fifth==4||fifth==7))
           {
               cout<<num<<endl;
               return 0;
           }
           else
           {
               num++;
           }

           }

         }
         else if(num<=7777777)
         {
             cout<<7777777<<endl;
         }

     }

}
