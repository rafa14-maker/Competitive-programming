#include<iostream>
using namespace std;

template<class yo>

class fahim
{
    yo a,b;

public:
    fahim(yo n,yo y)
    {
        a=n;
        b=y;
    }
    yo bigger();
};

template<class yo>
yo fahim<yo>::bigger()
{
    return (a>b?a:b);
}


int main()
{
    fahim<int> rafa(4,5);
    cout<<rafa.bigger()<<endl;

    return 0;
}
