#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4, 8, 15, 16, 23, 42};

    int a,b,c,d;
    cout<<"? 1 2"<<endl;
    cin>>a;
    cout<<"? 1 3"<<endl;
    cin>>b;
    cout<<"? 4 5"<<endl;
    cin>>c;
    cout<<"? 4 6"<<endl;
    cin>>d;


       do {
        if (arr[0]*arr[1]==a&&arr[0]*arr[2]==b&&arr[3]*arr[4]==c&&arr[3]*arr[5]==d){
            cout<<"! ";
            for(int i=0; i<5; ++i) cout<<arr[i]<<' ';
            cout<<arr[5]<<endl;
            break;
        }
    } while (next_permutation(arr,arr+6));
}


