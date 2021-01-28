#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

class Time{
	
private :
int hours, minutes, seconds;
		
public:
Time(){
hours = 0;
minutes = 0;
seconds = 0;
}
		
Time(int h, int m, int s){
hours 	= max(0, min(h, 23)); 
minutes = max(0, min(m, 59));
seconds = max(0, min(s, 59));
}
		
int getHours(){
return hours;
}
		
int getMin(){
return minutes;
}
		
int getSec(){
return seconds;
}
		
void Display(){
cout  << setfill('0') << setw(2) <<  getHours() << ":" << setw(2) <<  getMin() << ":" << setw(2) << getSec() << "\n";
}
		
void add(Time x)
{
seconds = getSec() + x.getSec();
minutes = getMin() + x.getMin();
hours = getHours() + x.getHours();
			
if(seconds >= 60)
minutes ++;
if(minutes >= 60)
hours ++;
			
seconds %= 60;
minutes %= 60;
hours %= 24;
		}
		
};
int main(){
	
	Time t1(12, 20, 20);
	Time t2 (11, 39, 40);
	
	cout << "First Time is : \t";
	t1.Display();
	
	cout << "Second Time is : \t";
	t2.Display();
	
	t1.add(t2);
	
	cout << "Now the time is : \t";
	t1.Display();

}
