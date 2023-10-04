#include<iostream>
#include<string>

using namespace std;

class HousingSociety
{
	private:
		string societyName;
		string address;
		string total_no_of_buildings;
	public:
		HousingSociety(string societyname,string address,string total_no_of_buildings)
		{
			this->societyName=societyName;
			this->address=address;
			this->total_no_of_buildings=total_no_of_buildings;
		}
		string get_soName()
		{
			return societyName;
		}
		string get_address()
		{
			return address;
		}
		string get_total()
		{
			return total_no_of_buildings;
		}
};
class Building
{
	private:
		string buildingNo;
		string floorNo;
		string flatNo;
		
	public:
	Building(string buildingNo,string floorNo,string flatNo)
	{
		this->buildingNo=buildingNo;
		this->flatNo=flatNo;
		this->floorNo=floorNo;
		}	
	string get_buildingNo()
	{
		return buildingNo;
		}
		string get_floorNo()
		{
			return floorNo;
			}	
			string get_flatNo()
			{
				return flatNo;
			}
};

class person:public HousingSociety,public Building
{
	private:
		string name;
		string gender;
		string occupation;
	public:
		person(string societyName,string address,string total_no_of_buildings,string buildingNo,string floorNo,string flatNo,string name,string gender ,string occupation):HousingSociety(societyName,address,total_no_of_buildings),Building(buildingNo,floorNo,flatNo)
		{
			this->name=name;
			this->gender=gender;
			this->occupation=occupation;
		}
	void display()
	{
		cout<<"society name :"<<get_soName()<<endl;
		cout<<"Address :"<<get_address()<<endl;
		cout<<"total no buildings "<<get_total()<<endl;
		cout<<"building no:"<<get_buildingNo()<<endl;
		cout<<"floor no :"<<get_floorNo()<<endl;
		cout<<"flat no:"<<get_flatNo()<<endl;
		cout<<"name :"<<name<<endl;
		cout<<"gender :"<<gender<<endl;
		cout<<"occupation :"<<occupation<<endl;
	}	
};
int main()
{
	person coffee("magbazar","east noyatola","2","32/1","3(a)","G/H","rafayeat","Male","student");
	coffee.display();
	
	return 0;
}

