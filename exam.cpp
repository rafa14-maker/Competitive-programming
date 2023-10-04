#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];

    for(int i=0;i<n;i++)
    {
        arr[i]=5;
    }
    int sum=n*5;
  int i=0;
    while(sum>k)
    {
            arr[i]--;
            i++;
            sum--;
            if(i==n)i=0;
    }

    int counter=0;
    for(int i=0;i<n;i++)
    {
      //  cout<<arr[i]<<" ";
        if(arr[i]==2)
        {

            counter++;
        }
    }
    cout<<counter<<endl;

}
