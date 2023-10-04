#include<bits/stdc++.h>
using namespace std;

  long long n,flag=0,k=0;

  long long arr[10];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        k+=a;
        if(a==0)flag++;
        else arr[a]++;
    }

    if(flag==0)
    {
        cout<<-1<<endl;
        return 0;
    }

    if(k==0||flag==n)
    {
        cout<<0<<endl;
        return 0;
    }

    if(k%3==0&&k!=0)
    {
         for(int i=9;i>=1;i--)
      {
        while(arr[i]>0)
        {
            cout<<i;
            arr[i]--;
        }
      }
      while(flag>0)
      {
          cout<<0;
          flag--;
      }
      return 0;
          }



  int counter=0;

  while(k%3==2)
  {
      if(arr[2]>0)
      {
          arr[2]--;
          counter++;
          k-=2;
      }
      else if(arr[5]>0)
      {
          arr[5]--;
          counter++;
          k-=5;
      }
      else if(arr[8]>0)
      {
          arr[8]--;
          counter++;
          k-=8;
      }
      else
      {
          break;
      }
  }
  if(counter>0&&k%3==0&&k!=0)
  {
      for(int i=9;i>=1;i--)
      {
        while(arr[i]>0)
        {
            cout<<i;
            arr[i]--;
        }
      }
      while(flag>0)
      {
          cout<<0;
          flag--;
      }
      return 0;
  }
  while(k%3==1)
  {
      if(arr[1]>0)
      {
          arr[1]--;
          counter++;
          k-=1;
      }
      else if(arr[4]>0)
      {
          arr[4]--;
          counter++;
          k-=4;
      }
      else if(arr[7]>0)
      {
          arr[7]--;
          counter++;
          k-=7;
      }
      else
      {
          break;
      }
  }
  if(counter>0&&k%3==0&&k!=0)
  {
      for(int i=9;i>=1;i--)
      {
        while(arr[i]>0)
        {
            cout<<i;
            arr[i]--;
        }
      }
      while(flag>0)
      {
          cout<<0;
          flag--;
      }
      return 0;
  }


      while(k%3!=0)
      {
        //  cout<<10<<endl;
         if(arr[1]>0)
         {
             k-=1;
             arr[1]--;
         }
         else if(arr[2]>0)
         {
             k-=2;
             arr[2]--;
         }
         else if(arr[4]>0)
         {
             k-=4;
             arr[4]--;
         }
         else if(arr[5]>0)
         {
             k-=5;
             arr[5]--;
         }
         else if(arr[7]>0)
         {
             k-=7;
             arr[7]--;
         }
        else  if(arr[8]>0)
         {
             k-=8;
             arr[8]--;
         }
         else if(arr[3]>0)
         {
             k-=3;
             arr[3]--;
         }
         else if(arr[6]>0)
         {
             k-=6;
             arr[6]--;
         }
        else  if(arr[9]>0)
         {
             k-=9;
             arr[9]--;
         }
         else
         {
             break;
         }

          if(k%3==0&&k!=0)
          {
        for(int i=9;i>=1;i--)
      {
        while(arr[i]>0)
        {
            cout<<i;
            arr[i]--;
        }
      }
      while(flag>0)
      {
          cout<<0;
          flag--;
      }
      return 0;
          }

          if(k==0)
          {
              cout<<0<<endl;
              return 0;
          }
      }


  if(flag>0)
  {
      cout<<0;
      return 0;
  }
  cout<<-1<<endl;

}
