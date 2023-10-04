#include<bits/stdc++.h>
using namespace std;
#define r1 1000000
#define m 4294967296

bool prime[r1];
vector<int>arr;

void seive()
{
    for(int i=3;i<=r1;i+=2)prime[i]=true;
    prime[2]=true;

    for(int i=3;i*i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=r1;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    arr.push_back(2);

    for(int i=3;i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            arr.push_back(i);
        }
    }

}
int main()
{
    seive();
    //for(int i=0;i<10;i++)cout<<arr[i]<<endl;
    int n;
    cin>>n;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=n)
        {
            cout<<arr[i]<<endl;
            return 0;
        }
    }
}
