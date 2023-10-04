#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long n;
    cin>>n;

    long long a=5;

   while (n > a) {
        n -= a;
        a *= 2;
    }
    cout<<arr[(n - 1)/(a/5)]<<endl;

   }
