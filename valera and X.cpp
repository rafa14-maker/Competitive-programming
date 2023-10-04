#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+5][n+5];
    int krr[27];
    for(int i=0;i<=26;i++)krr[i]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            krr[arr[i][j]-'a']++;
        }
    }
      int counter=0;

      for(int i=0,j=0;i<n-1,j<n-1;i++,j++)
      {
          if(arr[i][j]!=arr[i+1][j+1])
          {
              counter++;
              break;
          }
      }

      char k='0';

      for(int i=0,j=n-1;i<n,j>=0;i++,j--)
      {
          if(k=='0')k=arr[i][j];
          else
          {
              if(k!=arr[i][j])
              {
                  counter++;
                  break;
              }
          }
      }
      if(counter==0)
      {
           int a=(n*n)-((n*2)-1);
           int b=((n*2)-1);
           int found=0;
           for(int i=0;i<27;i++)
           {
               if(krr[i]==a)found++;
               else if(krr[i]==b)found++;
           }
           if(found==2)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;

           }
      }
      else
      {
          cout<<"NO"<<endl;
      }

}
