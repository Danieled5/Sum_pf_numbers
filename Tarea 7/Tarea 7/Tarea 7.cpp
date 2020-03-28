#include<iostream>
#include <string>

using namespace std;

int main()
{

	int number = 0;
	string word = "";

	cout << "Please insert a number\n";
	std::cin >> word;
	for (int x = 0; x < word.length(); x++) {

		number += word[x] - 48;

	}
	cout << "Number of Digits :" << word.length() << "\n";
	cout << "Sum of all digits :D :" << number;
	return 0;
}