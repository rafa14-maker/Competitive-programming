#include<iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{int t;
char arr[110],frr[110];
cin>>t;
    for(int i=1;i<=t;i++)
    {
    cin>>arr;
    cin>>frr;

      int counter=0,found=0;
      for(int j=0;j<strlen(frr);j++)
      {
          if(frr[j]!=' ')
          {
              found++;
              for(int p=0;p<strlen(arr);p++)
              {
                  if(arr[p]!=' '&&arr[p]==frr[j])
                  {
                     counter++;
                     break;
                  }
              }
          }
      }
      if(counter==found)
      {
          printf("Case %d: Yes\n",i);
      }
      else
      {
           printf("Case %d: No\n",i);
      }

    }
}
