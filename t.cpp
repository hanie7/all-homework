#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[500];
	cin.getline(str,500);
	int size = strlen(str);
	int comma = 0, dot = 0;
	for(int i = 0; i < size; i++)
	{
		if(str[i] == '.')
		   dot = dot + 1;
		else if(str[i] == ',')
		 	comma = comma + 1;
	}
	cout << "dot count = " << dot << "\n";
	cout << "comma count = " << comma;
	
}
