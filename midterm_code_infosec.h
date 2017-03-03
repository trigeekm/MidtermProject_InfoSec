#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;  // John Von Hagen
	int age = 0; //Sanford Apfel
	int switchans = 0;  // Dyana Jo Stewart
	cout << "What is your name? "; // John Von Hagen
	getline(cin, name);
	cout << "How old are you?";  // Sanford Apfel
	std::cin >> age;
	cout << "Hello, " << name << ", You are " << age << " years old"!\n" << endl;  // John Von Hagen
		"Will you be getting the Nintendo Switch? (1: Yes , 2: No , 3: Maybe)" << endl;  // Dyana Jo Stewart
	std::cin >> switchans;  // Dyana Jo Stewart
		switch (switchans) {
		case 1: std::cout << "Enjoy spending $70 on a new controller.\n";
			break;
		case 2: std::cout << "I guess you'll be missing out on BOTW!\n";
			break;
			case 3: std::cout << "You really should commit one way or another.\n";					
		default: std::cout << "Invalid Message.";
			break;
		}
		return 0;
}
