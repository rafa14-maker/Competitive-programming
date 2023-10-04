#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    long long arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<long long>v;

    for(int i=0;i<n;i++)
    {
        if(v.size()==0)
        {
            v.insert(arr[i]);
        }
        else if(v.size()<k)
        {
                v.insert(arr[i]);
        }
        else if(v.size()==k)
        {
            v.insert(arr[i]);
            set<int>::iterator it1;
            it1 = v.begin();
              v.erase(it1);
        }
       // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
       // cout<<endl;
    }
    cout<<v.size()<<endl;
    for (auto it = myset.begin();
        it != v.end(); ++it)
        cout << ' ' << *it;
}
