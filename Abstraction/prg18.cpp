#include<iostream>
#include<exception>
#include<windows.h>
using namespace std;
//CUSTOM EXECPTION CLASS
class Invalid_speed : public exception{
	int speed;
	public:
		const char* what() //method override
		{
			return "check out your speed limit !!";
		}
		void getspeed()
		{
			cout<<"Your car Speed is : "<<this->speed<<endl;
		}
		void setspeed(int speed)
		{
			this->speed = speed;
		}
};
class car
{
	string name;
	int speed;
	public:
		car(string n,int a)
		{
			name=n;
			speed=a;
		}
		void speedlimit()
		{
			while(1)
			{
				cout<<"speed is : "<<speed<<endl;
				Sleep(1000);
				speed +=10;
				if(this->speed >= 160)
				{
					Invalid_speed ob;
					ob.setspeed(this->speed);
					throw ob;
				}
			}
		}
};

int main()
{
	car s1("Audi",0);
	try
	{
		s1.speedlimit();
	}
	catch(Invalid_speed e)
	{
		cout<<e.what()<<endl;
	}
	return 0;
}