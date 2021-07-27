// 사용자로부터 4개의 숫자를 입력받고, 그 합을 출력하는 프로그램
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4;
	int result = 0;

	cout << "숫자 네 개를 입력하세요" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;

	result += num1 + num2 + num3 + num4;

	cout << "네 수의 합 : " << result;

	return 0;
}