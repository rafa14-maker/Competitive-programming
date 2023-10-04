#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[101];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j){
            sum+=arr[j];}
        }
        if(sum%2==0)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}
