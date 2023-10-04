#include<bits/stdc++.h>

using namespace std;

int main()
{
    string arr,frr;

    cin>>arr;


    frr={"hello"};

    int i,n=0,k=0;

    for(i=0;i<arr.size();i++)
    {
        if(arr[i]==frr[k])
        {
            k++;
            n++;
        }
    }
    if(n==5)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    return 0;
}
