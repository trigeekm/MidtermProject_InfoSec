#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int age = 0; //Sanford Apfel
	int switchans = 0;
	cout << "What is your name? ";
	getline(cin, name);
	cout << "How old are you?";
	std::cin >> age;
	cout << "Hello, " << age << " year old " << name << "!\n" <<
		"Will you be getting the Nintendo Switch? (1: Yes , 2: No)" << endl;
	std::cin >> switchans;
		switch (switchans) {
		case 1: std::cout << "Enjoy spending $70 on a new controller.\n";
			break;
		case 2: std::cout << "I guess you'll be missing out on BOTW!\n";
			break;
		default: std::cout << "Invalid Message.";
			break;
		}
		return 0;
}
