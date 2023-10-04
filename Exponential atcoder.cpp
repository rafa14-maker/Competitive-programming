#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=1;
    for(int i=2;i<=n;i++)
    {
        int j=i;
        while(j*i<=n)
        {
            counter=max(j*i,counter);
          j*=i;
        }
    }
    cout<<counter<<endl;
}
