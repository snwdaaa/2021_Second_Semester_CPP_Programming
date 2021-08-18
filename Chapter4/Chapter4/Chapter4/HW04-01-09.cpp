#include <iostream>
using namespace std;

int main()
{
	char ch;
	int countA = 0, countE = 0, countI = 0;

	cin >> ch;

	switch (ch)
	{
		case 'A':
		case 'a':
			countA++;
			break;
		case 'E':
		case 'e':
			countE++;
			break;
		case 'I':
		case 'i':
			countI++;
			break;
		default:
			cout << "Error--Not A, E, or I" << endl;

	}

	cout << countA << endl;
	cout << countE << endl;
	cout << countI << endl;

	return 0;
}