#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        multiset<int>mul;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            for(int j=0;j<k;j++)
            {
                int a;
                cin>>a;
                mul.insert(a);
            }
            int ma,mn;
            multiset<int>::iterator it;


            multiset<int>::iterator lowest = mul.begin();
            multiset<int>::iterator highest = --mul.end();


            sum += *highest - *lowest;

            mul.erase(lowest); mul.erase(highest);
            mul.erase(lowest); mul.erase(highest);
     }
     cout<<sum<<endl;
        }

    }

