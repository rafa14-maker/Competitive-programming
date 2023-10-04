#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
          int k=i%10;
          cout<<abs(k-9);
        }
        cout<<"\n";
    }
}
