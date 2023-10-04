#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    int n;
    cin>>n;
    string arr;
    cin>>arr;

    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i+1]==arr[i])
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}
