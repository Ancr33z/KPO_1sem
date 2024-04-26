#include <iostream>
#include <string>

using namespace std;

auto longerString = [](const string& str1, const string& str2) {return (str1.length() > str2.length()) ? str1 : str2; };//доп4

auto foo = [](string str3, string str4) {string str5 = str3 + str4; return str5; };//доп3

auto isPos = [](int number1) { return number1 > 0 ? "true" : "false"; };//доп3

int main() {
	setlocale(LC_ALL, "rus");

	//// доп 4

	string str1 = "Hhhhhh", str2 = "ww";

	cout << "Более длинная строка: " << longerString(str1, str2) << endl;



	//доп3
	string str3 = "grey";
	string str4 = "kitty";

	cout << foo(str3, str4) << endl;

	//доп1
	int num = 5;
	cout << isPos(num) << endl;


	return 0;
}