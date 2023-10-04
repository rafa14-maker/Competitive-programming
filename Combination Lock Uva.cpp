#include<bits/stdc++.h>
using namespace std;

int main()
{
    int st,fi,se,th;
    while(1)
    {
        cin>>st>>fi>>se>>th;
        if(st==0&&fi==0&&se==0&&th==0)break;
        cout<<1080+((st-fi+40)%40+(se-fi+40)%40+(se-th+40)%40)*9<<endl;
    }
}
