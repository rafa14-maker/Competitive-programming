#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
	int i,counter=0;
	for(i=0;i<n;i++)
	{
		if(n%i==0)
		{
			counter++;
		}
	}
	if(counter==3)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main(){
    
    long long a, n,i;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>n;
        if (n==4){
            cout<<"YES"<<endl;
        }
        else if (n%2==0){
            cout<<"NO"<<endl;
        }
        else if(prime(n)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
