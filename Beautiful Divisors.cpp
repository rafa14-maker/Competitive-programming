#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=1;
    vector<int>v;
    int counter=2;
    while(k<=1e5)
    {
        v.push_back(k);
        k=(pow(2,counter)-1)*pow(2,counter-1);
        counter++;
    }
   // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    int n;
    cin>>n;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(n%v[i]==0)
        {
            cout<<v[i];
            return 0;
        }
    }
}
