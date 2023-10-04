#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int counter=0;
    int a=0;
    for(int i=0;i<arr.size();i++)
    {
        int b=arr[i]-'a';
      //  cout<<a<<" "<<b<<endl;
        int sum=abs(a-b);
       counter+=min(sum,26-sum);
       a=b;
    }
    cout<<counter<<endl;
}
