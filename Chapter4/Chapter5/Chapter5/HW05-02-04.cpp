// 양의 정수, 음의 정수 몇 개 입력되었는지 출력
// 센티넬 0

#include <iostream>
using namespace std;

int main()
{
	int posCount = 0, negCount = 0;
	int inputNum;

	cin >> inputNum;

	while (inputNum != 0)
	{
		if (inputNum > 0)
		{
			posCount++;
		}
		else if (inputNum < 0)
		{
			negCount++;
		}
		else
		{
			break;
		}

		cin >> inputNum;
	}

	cout << posCount << endl;
	cout << negCount << endl;

	return 0;
}