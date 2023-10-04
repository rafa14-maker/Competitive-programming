#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int counter=0;
    while(arr.size()>1)
    {
        string frr;
        counter++;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=(arr[i]-'0');
        }
        while(sum>0)
        {
          frr+=((sum%10)+'0');
          sum/=10;
        }
        for(int i=0,j=frr.size()-1;i<j;i++,j--)
        {
            swap(frr[i],frr[j]);
        }
        arr=frr;
    }
    cout<<counter<<endl;
}
