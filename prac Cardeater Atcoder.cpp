#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int frr[N];

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter=0,flag=0;
    for(int i=0;i<n;i++)frr[arr[i]]++;

    set<int>s;

    for(int i=0;i<n;i++)s.insert(arr[i]);

    set<int>::iterator it;

    /*for (it = s.begin(); it != s.end(); ++it)
    {
        cout << *it <<" "<<frr[*it]<<endl;;
    }*/



    cout<<s.size()<<endl;
}

