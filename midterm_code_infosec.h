// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
	int age = 0; //Sanford Apfel
	cout << "What is your name? ";
	getline(cin, name);
	cout << "How old are you?";
	cin >> age;
	cout << "Hello, " << age << " year old " << name << "!\n";
}
