#include<bits/stdc++.h>
using namespace std;

#define swap(a,b) a=a^b,b=a^b,a=a^b

int main()
{
    int n,rev;
    while(cin>>n)
    {
        rev=n;
        char* bits = (char*)&rev;
        swap(bits[0],bits[3]);
        swap(bits[1],bits[2]);
        cout<<n<<" converts to "<<rev<<endl;
    }
}
