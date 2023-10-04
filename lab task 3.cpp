#include<iostream>
#include<string>

using namespace std;

class HousingSociety
{
	private:
		string SocietyName;
		string Address;
		string total_no_of_buildings;
	public:
		HousingSociety(string SocietyName,string Address,string total_no_of_buildings)
		{
			this->SocietyName=SocietyName;
			this->Address=Address;
			this->total_no_of_buildings=total_no_of_buildings;
		}
		string getSocietyName()
		{
			return SocietyName;
		}
		string getAddress()
		{
			return Address ;
		}
		string gettotal_no_of_buildings()
		{
			return total_no_of_buildings;
		}
		
};
class Building
{
	private:
		string BuildingNo;
		string FloorNo;
		string FlatNo;
	public:
		Building(string BuildingNo,string FloorNo,string FlatNo)
		{
			this->BuildingNo=BuildingNo;
			this->FloorNo=FloorNo;
			this->FlatNo=FlatNo;
		}
		string getBuildingNo()
		{
			return BuildingNo;
		}
		string getFloorNo()
		{
			return  FloorNo;
		}
		string getFlatNo()
		{
			return FlatNo;
		}
		
};
class person:public Building,public HousingSociety
{
	private:
		string name;
		string gender;
		string occupation;
	public:
		person(string name,string gender,string occupation, string SocietyName,string Address,string total_no_of_buildings,string BuildingNo,string FloorNo,string FlatNo):HousingSociety(SocietyName,Address,total_no_of_buildings):Building(BuildingNo, FloorNo, FlatNo)
		{
			this->name=name;
			this->gender=gender;
			this->occupation=occupation;
		}
	void display()
	{
		cout<<"name :"<< name<<endl;
		cout<<"gender :"<<gender <<endl;
		cout<<" occupation:"<<occupation <<endl;
		cout<<" BuildingNo :"<<getBuildingNo()<<endl;
		cout<<"FloorNo :"<<getFloorNo()<<endl;
		cout<<"FlatNo :"<<getFlatNo()<<endl;
		cout<<"BuildingNo :"<<getBuildingNo()<<endl;
		cout<<"FloorNo :"<<getFloorNo()<<endl;
		cout<<"FlatNo :"<<getFlatNo()<<endl;
		cout<<"total building :"<<gettotal_no_of_buildings()<<endl;
		}	
};
int main()
{
	person coffee("rafayeat","male","student","noyatola","32/A","five","269/c","Five","Six");
	coffee.display();
	
	return 0;
}
