/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int day[]={31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string arr,frr,krr,zrr,prr[10000];

    int a=0;
    cin>>arr;

    for(int i=0;i<arr.size();i++)
    {
       if(arr[i+2]==arr[i+5]&&arr[i+5]=='-'&&arr[i]>='0'&&arr[i]<='9'&&arr[i+1]>='0'&&arr[i+1]<='9'&&arr[i+3]>='0'&&arr[i+3]<='9'&&arr[i+4]>='1'&&arr[i+4]<='9'&&arr[i+6]>='0'&&arr[i+6]<='9'&&arr[i+7]>='0'&&arr[i+7]<='9'&&arr[i+8]>='0'&&arr[i+8]<='9'&&arr[i+9]>='0'&&arr[i+9]<='9')
       {
        zrr={""};
                 zrr= arr.substr(i,10);
                  //  cout<<zrr<<endl;
             int k=zrr[4]-'0';
             k+=10*(zrr[3]-'0');

               int b=zrr[1]-'0';
             b+=10*(zrr[0]-'0');
            // cout<<b<<" "<<k<<" "<<day[k-1]<<endl;
                if(day[k-1]>=b){
                prr[a]=zrr;
                a++;}
       }
       else
       {
           continue;
       }
    }
int counter=0,l=0;
for(int i=0;i<a;i++)
{
  counter=1;
  for(int j=0;j<a;j++)
  {
      if(prr[i]==prr[j]&&i!=j)
      {
          counter++;
      }
  }

  if(counter>l)
  {
      l=counter;
      frr=prr[i];
  }

}

cout<<frr<<endl;

}



