#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(abs(a-c)==abs(b-d))
    {
        cout<<a<<" "<<d<<" "<<c<<" "<<b;
    }
    else if(a==c){cout<<a+b-d<<" "<<b<<" "<<a+b-d<<" "<<d;}
    else if(b==d){cout<<a<<" "<<b+a-c<<" "<<c<<" "<<d+a-c;}
    else{cout<<-1<<endl;}
}

