#include<iostream>

using namespace std;

class Area
{
	private:
		int height;
		int width;
		int area;
	public:
		Area(int height,int width)
		{
			this->height=height;
			this->width=width;
		}
		int getArea()
		{
		return 	 height*width;
		
		}
};
class Paintcost:public Area
{
	private:
		int cost;
	public:
		Paintcost(int a)
		{
			cost=a;
		}
		int get_total_cost()
		{
			return getArea()*cost;
		}
};
class wall:public Paincost
{
	public: wall(){
		
	}
	wall(int a,int height,int width):Paintcost(a),Area(height,width);
	void dispaly()
	{
		cout<<"total cost :"<<get_total_cost()<<endl;
	}
};
int main()
{
	wall coffee(4,5,6);
	coffee.dispaly();
	
	return 0;
}
