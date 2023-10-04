#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double sum=0;
    while(n--)
    {
        double a;
        string s;
        cin>>a>>s;
        if(s=="JPY")
        {
            sum+=a;
        }
        else
        {
            sum+=(a*380000);
        }
    }
    printf("%.8lf\n",sum);
}
