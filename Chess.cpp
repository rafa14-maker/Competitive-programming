#include<bits/stdc++.h>
using namespace std;

void queen(int a,int b)
{
    cout<<min(a,b)<<endl;
}
void knight(int a,int b)
{
  cout<<(a*b)/2<<endl;
}
void king(int a,int b)
{
  cout<<((a+1)/2)*((b+1)/2)<<endl;
}
void rook(int a,int b)
{
    cout<<min(a,b)<<endl;
}


int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        int a,b;
        cin>>c>>a>>b;
        if(c=='Q')queen(a,b);
        else if(c=='r')rook(a,b);
        else if(c=='K')king(a,b);
        else knight(a,b);
    }
}
