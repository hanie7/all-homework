#include<iostream>
#include<math.h>
using namespace std;

class point{
	
	private:
		int x, y;
		
	public:
		point(int x, int y){
			setX(x);
			setY(y);
		}
		
		void setX(int x){
			this -> x = x;
		}
		
		int getX(){
			return this -> x;
		}
		
		
		void setY(int y){
			this -> y = y;
		}
		
		int getY(){
			return this -> y;
		}
		
		double getDistance(point temp){
			
			int disX = getX() - temp.getX();
			int disY = getY() - temp.getY();
			
			cout << "First Point :\t" << toString() << "\n";
			cout << "Second Point :\t" << temp.toString() << "\n";
			cout << "Distance :\t";
			
			return sqrt(pow(disX, 2) + pow(disY, 2));
		}
		
		string toString(){
			return "(" + to_string(getX()) + "," + to_string(getY()) + ")";
		}
	
};
int main()
{
	point first(0, 1);
	point second(2, -1);
	cout << first.getDistance(second);
}
