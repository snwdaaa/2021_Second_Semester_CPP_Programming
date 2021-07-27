// 시간, 분, 초 단위로 시간을 입력받아서 초 단위로 환산해 출력하는 프로그램
#include <iostream>
using namespace std;

int main()
{
	int hour, min, sec;
	int result = 0;

	cout << "시간, 분, 초를 입력하세요 : " << endl;
	cin >> hour;
	cin >> min;
	cin >> sec;

	result += sec; // 초
	result += min * 60; // 분 -> 초
	result += hour * 3600; // 시 -> 초

	cout << "초 단위로 환산 : " << result << endl;

	return 0;
}