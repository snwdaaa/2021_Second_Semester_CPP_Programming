// 1000보다 작은 숫자들 키보드로 입력 받은 후, 합과 평균 구하기
// 센티넬 -> 1000

#include <iostream>
using namespace std;

int main()
{
	int inputNum;
	int numCount = 0;
	int sum = 0;
	float avg;

	cin >> inputNum;

	while (inputNum != 1000)
	{
		sum += inputNum;
		numCount++;
		cin >> inputNum;
	}

	numCount--;

	avg = (float)(sum / numCount);

	cout << sum << endl;
	cout << avg << endl;

	return 0;
}