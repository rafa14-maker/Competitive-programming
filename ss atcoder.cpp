#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s; cin >> s; s.pop_back();
    while(1){
        if(s.size()%2==1){s.pop_back(); continue;}
        string t = s.substr(0,s.size()/2);
        if(s==t+t){out(s.size()); return 0;}
        s.pop_back();
    }
}
