#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr>>frr;

    int counter=0;
    for(int i=arr.size()-1,j=frr.size()-1;i>=0,j>=0;i--,j--)
    {
        if(arr[i]==frr[j])counter++;
        else break;
    }
    cout<<arr.size()-counter+frr.size()-counter<<endl;
}
