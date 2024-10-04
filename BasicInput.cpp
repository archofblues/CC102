#include <iostream>

using namespace std;

int main ()
{
	string Nickname;
	string CourseYearLevel;
	string School;
	cout << "Nickname:";
	cin >> Nickname;
	cout <<"Course-Year Level:";
	cin >> CourseYearLevel;
	cout << "School:";
	cin >> School;
	cout << "Wow Congrats" << Nickname << "!" << CourseYearLevel << " is a nice course." 
	<< "And you are studying in" << School << " which is one of the Center of Excellence in Tertiary Education." << endl;
	return 0;
}