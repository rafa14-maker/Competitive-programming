#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,counter=0,found=0;

    int arr[5];

    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                if(arr[i]+arr[j]>k&&arr[i]+arr[k]>arr[j]&&arr[j]+arr[k]>arr[i])
                {
                    counter++;
                    break;
                }
            }
        }
    }
    if(counter==0)
    {
        sort(arr,arr+4);

      for(i=0;i<2;i++)
      {
          if(arr[i]+arr[i+1]<=arr[i+2])
          {
              found++;
              break;
          }
      }
    }

    if(counter>0)
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if(found>0)
    {
        cout<<"SEGMENT"<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
}
