#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,a,b,counter=0;

    string arr;

    cin>>arr;

    for(i=0;i<arr.size();i++)
    {
        if(arr[i]=='4'||arr[i]=='7')
        {
            counter++;
        }
    }



    if(counter==4||counter==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


   return 0;
}
