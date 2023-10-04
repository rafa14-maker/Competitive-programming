//Dont copy my code ^_________^

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr,krr;
    cin>>arr>>frr>>krr;

    arr+=frr;
    sort(krr.begin(),krr.end());
    sort(arr.begin(),arr.end());

    if(arr==krr)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
