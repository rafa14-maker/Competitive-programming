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

    int mid,l,r;

    if(m%2==0)
    {
        mid=m/2;
    }
    else
    {
        mid=(m+1)/2;
    }
    int counter=0,a=0,b=0,c;
  if(m%2==1){
  for(int i=1;i<=n;i++)
    {
        if(counter==0)
        {
            cout<<mid<<endl;
            counter++;
            a=0,b=0;
        }
       else if(counter>0)
        {
            if(counter==m)
            {
                counter=1;
                cout<<mid<<endl;
                a=0,b=0;
            }
          else  if(counter%2==1)
            {
                a++;
                cout<<mid-a<<endl;
                counter++;
            }
            else if(counter%2==0)
            {
               b++;
               cout<<mid+b<<endl;
               counter++;
            }
        }
    }
  }
  else
  {
      for(int i=1;i<=n;i++)
    {
        if(counter==0)
        {
            cout<<mid<<endl;
            counter++;
            a=0,b=0;
        }
       else if(counter>0)
        {
            if(counter==m)
            {
                counter=1;
                cout<<mid<<endl;
                a=0,b=0;
            }
          else  if(counter%2==1)
            {
                a++;
                cout<<mid+a<<endl;
                counter++;
            }
            else if(counter%2==0)
            {
               b++;
               cout<<mid-b<<endl;
               counter++;
            }
        }
    }
  }
}



