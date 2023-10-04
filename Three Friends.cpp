#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        vector<long long>arr;
        vector<long long>frr;
        vector<long long>krr;

        arr.push_back(a);
         arr.push_back(a+1);
          arr.push_back(a-1);

           frr.push_back(b);
         frr.push_back(b+1);
          frr.push_back(b-1);

           krr.push_back(c);
         krr.push_back(c+1);
          krr.push_back(c-1);

          long long sum=99999999999999999;

        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<frr.size();j++)
            {
                for(int k=0;k<krr.size();k++)
                {
                    long long counter=abs(arr[i]-krr[k])+abs(arr[i]-frr[j])+abs(frr[j]-krr[k]);
                    sum=min(counter,sum);
                }
            }
        }
        cout<<sum<<endl;
    }
}
