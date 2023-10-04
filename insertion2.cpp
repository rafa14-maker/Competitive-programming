#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int i,j,k,num,pos;

    cin>>k;

    for(i=0;i<k;i++)
    {

        cin>>arr[i];
    }

    cout<<"yes";
    cin>>num;
    cin>>pos;

     for(i=k; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }


        arr[pos-1] = pos;
        k++;
       for(i=0;i<k;i++)
    {

        cout<<arr[i];
    }

}
