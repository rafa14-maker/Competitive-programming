#include<iostream>
using namespace std;

int main()
{
    int i,n,c,counter=0,j;

    char k;

    int arr[9];

    for(i=0;i<9;i++)
    {
        cin>>k;
        if(k=='X')
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }

        for(i=0,j=8;i<9,j>=0;i++,j--)
        {
            if(arr[i]!=arr[j])
            {
                counter++;
                break;
            }
        }
        if(counter==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}
