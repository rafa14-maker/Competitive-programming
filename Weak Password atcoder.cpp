#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a = (int)s[0]-'0';
     int b = (int)s[1]-'0';
      int c = (int)s[2]-'0';
       int d = (int)s[3]-'0';

    int p1 = (a+1)%10;
    int p2 = (a+2)%10;
    int p3 = (a+3)%10;

    if(a==b&&b==c&&c==d||p1==b&&p2==c&&p3==d)cout<<"Weak"<<endl;
    else cout<<"Strong"<<endl;
}
