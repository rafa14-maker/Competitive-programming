#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;

    cin>>n;

    int arr[5];

    for(i=0;i<5;i++)
    {
        arr[i]=0;
    }

    for(i=0;i<n;i++)
    {
        cin>>j;

        if(j==1)
        {
            arr[0]+=1;
        }
                if(j==2)
        {
            arr[1]+=1;
        }
                if(j==3)
        {
            arr[2]+=1;
        }
                if(j==4)
        {
          arr[3]+=1;
        }        if(j==5)
        {
            arr[4]+=1;
        }
    }

    for(i=0;i<5;i++)
    {
        bool print= true;
        for(j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j]&&arr[i]>1&&arr[j]>1)
            {
                arr[j]=0;
                print=false;

            }
        }
        if(print!=true)
        {
            arr[i]=1;
        }
    }
int     counter=0;

    for(i=0;i<5;i++)
    {
        if(arr[i]>1)
        {
            counter+=1;
        }
        else{
        counter+=arr[i];}
    }
   cout<<counter<<endl;
}
