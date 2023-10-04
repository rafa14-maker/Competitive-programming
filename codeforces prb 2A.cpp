#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,i,score,val=0;
	string name,great;
	cin>>a;
	for(i=0;i<a;i++)
	{
	  cin>>name;
	  cin>>score;
	  if(score>val)
	  {
	  	val=score;
	  	great=name;
		  }	
	}
	cout<<great<<endl;;
}
