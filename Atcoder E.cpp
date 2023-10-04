#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>one;
    vector<int>two;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<0)one.push_back(a);
        else two.push_back(b);
    }
    sort(one.begin(),one.end());
    sort(two.begin(),two.end());
    reverse(two.end(),two.end());
    vector<int>take;
    reverse(one.begin(),one.end());


    for(int i=0;i<min(one.size(),k);i++)
    {
        take.push_back(one[i]);
    }

    if(take.size()!=k)
    {
        int p=k-take.size();
        int idx=two.size()-1;
        while(p--)
        {
            take.push_back(two[idx]);
            idx--;
        }
    }

     vector<long long>frr;

     for(int i=0)

}
