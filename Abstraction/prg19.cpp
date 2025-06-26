#include<iostream>
#include<exception>
#include<windows.h>
using namespace std;
class OverSpeed : public exception
{
	int speed;
	public:
		void setSpeed(int x) {
			speed = x;
		}
		const char * what() { // method override
			return "Slow Down buddy!!";
		}
		
		void getSpeed() {
			cout << "Your Speed is - " << speed << endl;
		}
		
		
};

class Car {
	int speed;
	public:
		Car() {
			speed = 0;
		}
		
		void speedLimit() {
			while(1) {
				cout << "Car Speed is - " << speed << endl;
				Sleep(1000);
				speed += 10;
				cout << '\a'; // beep
				if(this->speed > 100) {
					this->speed -= 10;
					OverSpeed ob;
					ob.setSpeed(this->speed);
					throw ob;
				}
			}
		}
};

int main() {
	cout << "Happy Journey " << endl;
	Car ob;
	try {
		ob.speedLimit();
	}catch(OverSpeed s) {
		cout << s.what() << endl;
		s.getSpeed();
	}
	cout << "Thanks " << endl;
	return 0;
}