#include <iostream>

using namespace std;

int main()
{
	int num1;
	int result;

	cin >> num1;
	result = (num1 % 100) / 10;
	cout << result << endl;

	return 0;
}