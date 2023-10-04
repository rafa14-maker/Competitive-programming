#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,j;

    char n;

    int arr[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>n;
            if(n=='X')
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=2;
            }
        }
    }




   if((arr[0][0]==arr[2][2])&&(arr[2][0]==arr[0][2])&&(arr[1][0]==arr[1][2])&&(arr[0][1]==arr[2][1]))
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }



    return 0;
}
