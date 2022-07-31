#include<iostream>
#include <string>

int main(){
	int age;
	std::string fullname;
		
	std::cout << "Type your full name ";
	std::getline(std::cin, fullname);

	std::cout  << "Enter age ";
	std::cin >> age;

	std::cout << "Name : " << fullname << '\n' << "Age : " << age << '\n';

}
