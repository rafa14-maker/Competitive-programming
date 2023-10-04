#include<bits/stdc++.h>
using namespace std;

 int arr[]={6,2,5,5,4,5,6,3,7,5};

 void f(char a, char b,int val)
 {
      int k= (int)a-'0';
            int p = (int)b-'0';
              cout<<arr[k]+arr[p]-val<<endl;
 }

int main()
{


    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        f(s[0],s[1],0);


    }
}
