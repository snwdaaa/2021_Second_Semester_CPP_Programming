#include <iostream>

using namespace std;

int main()
{
	int x = 2;

	switch (x)
	{
		case 2:
			x++;
			break;
		case 3:
			x--;
			break;
		default:
			cout << "End!";
	}

	cout << x;

	return 0;
}