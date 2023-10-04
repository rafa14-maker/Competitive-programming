#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[105]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
    }
    int counter=0;
    for(int i=1;i<=100;i++)
    {
        counter=max(arr[i],counter);
    }
    cout<<counter<<endl;
}
