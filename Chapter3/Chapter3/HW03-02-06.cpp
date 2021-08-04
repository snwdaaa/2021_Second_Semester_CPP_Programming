#include <iostream>
using namespace std;

int main()
{
	int num;
	int result_3;
	int result_2;
	int result_1;

	cin >> num;

	result_3 = (num % 1000) / 100;
	result_2 = (num % 100) / 10;
	result_1 = (num % 10);

	cout << result_1 << result_2 << result_3 << endl;

	return 0;
}