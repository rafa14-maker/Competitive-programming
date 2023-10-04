#include<bits/stdc++.h>
using namespace std;

multiset<int>v;
multiset<int , greater<int> >v2;

void cut(int idx)
{
    int l = *v.upper_bound(idx) ;
    int r = *v2.upper_bound(idx) ;
    cout<< l - r<<endl;
}

void solve()
{
    int n,q;
    cin>>n>>q;
   v.insert(0);
   v.insert(n);
    v2.insert(0);
   v2.insert(n);
    while(q--)
    {
        int k,idx;
        cin>>k>>idx;
        if(k==1)
        {
             v.insert(idx);
             v2.insert(idx);
        }
        else
        {
              cut(idx);
        }
    }
}

/*
void solve()
{

    multiset <int> gquiz2;
    multiset <int , greater<int> > v;

    gquiz2.insert(40);
    gquiz2.insert(30);
    v.insert(40);
    v.insert(30);
    v.insert(60);
    v.insert(20);
    v.insert(50);
    gquiz2.insert(60);
    gquiz2.insert(20);
    gquiz2.insert(50);

    cout << "\nThe multiset gquiz2 \n"
             "after assign from gquiz1 is : \n";
    for (auto itr = gquiz2.begin(); itr!= gquiz2.end(); ++itr)
    {
        cout << *itr <<" ";
    }
    cout << endl;


    cout << "gquiz2.lower_bound(40) : \n"
         << *gquiz2.lower_bound(40) << endl;
    cout << "gquiz2.upper_bound(40) : \n"
         << *gquiz2.upper_bound(40) << endl;

         cout << "gquiz2.lower_bound(40) : \n"
         << *v.lower_bound(40) << endl;
    cout << "gquiz2.upper_bound(40) : \n"
         << *v.upper_bound(40) << endl;

} */

int main()
{
    solve();
}
