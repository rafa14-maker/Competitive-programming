#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;
    for(int i=1;;i++)
    {
        if(pow(5,i)>n)break;
        int k=n;
        counter+=(n/pow(5,i));
      //  cout<<i<<endl;
    }
    cout<<counter<<endl;
}
