// �ð�, ��, �� ������ �ð��� �Է¹޾Ƽ� �� ������ ȯ���� ����ϴ� ���α׷�
#include <iostream>
using namespace std;

int main()
{
	int hour, min, sec;
	int result = 0;

	cout << "�ð�, ��, �ʸ� �Է��ϼ��� : " << endl;
	cin >> hour;
	cin >> min;
	cin >> sec;

	result += sec; // ��
	result += min * 60; // �� -> ��
	result += hour * 3600; // �� -> ��

	cout << "�� ������ ȯ�� : " << result << endl;

	return 0;
}