#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,counter=0,j;
    string arr;
    cin>>j;
    cin>>arr;

    while(i<j)
    {
        if(arr[i]==arr[i+1])
        {
            counter++;
            i+=2;

        }
        if(arr[i]!=arr[i+1])
        {
            counter=0;
            break;
        }

    }

    cout<<counter<<endl;
}
