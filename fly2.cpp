#include<iostream>

using namespace std;

int main()
{
	cout<<"For sum : 1"<<"\n"<<"for subtraction : 2"<<"\n"<<"For multiplication : 3"<<"\n"<<"For divison : 4"<<"\n";
	
	int a,b,c;
	
	cout<<"enter choice :";
	cin>>a;
	
	if(a==1)
	{
		cout<<"Enter test cases :";
		cin>>b>>c;
		cout<<"sum :"<<b+c;
	}
	
	else if (a==2)
	{
		cout<<"Enter test cases :";
		cin>>b>>c;
		cout<<"sub :"<<b-c;	
	}
	
	else if(a==3)
	{
			cout<<"Enter test cases :";
		cin>>b>>c;
		cout<<"multi :"<<b*c;
	}
	
	else if(a==4)
	{
			cout<<"Enter test cases :";
		cin>>b>>c;
		 
		 try
		 {
		 	if(c==0)
		 	{
		 		throw b;
			 }
			 cout<<"div :"<<b/c<<endl;
		 }
		 catch(...)
		 {
		 	cout<<"exception found "<<endl;
		 }
	
	}
	

	return 0;
}
