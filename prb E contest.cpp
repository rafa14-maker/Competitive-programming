#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,counter=0;

    string arr;

    cin>>arr;

    for(i=0;i<arr.size();i++)
    {

            if(i==0&&(arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z'))
            {
                counter++;
            }

        else if(arr[i]>='A'&&arr[i]<='Z')
        {
            counter++;
        }

    }

    if(arr.size()==counter)
    {
         for(i=0;i<arr.size();i++)
    {
        if(i==0)
        {
            if(arr[i]>='a'&&arr[i]<='z')
            {
                arr[i]-=32;
            }
            else
            {
                arr[i]+=32;
            }
        }
        else if(i>0)
        {
            arr[i]+=32;
        }
    }
    }



    cout<<arr;
}
