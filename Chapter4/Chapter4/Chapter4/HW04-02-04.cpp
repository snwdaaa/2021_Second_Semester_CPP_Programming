// ���� ����(�Ϲ� �¿��� : 'c', ���� : 'b', Ʈ�� : 't')�� �����忡�� ������ �ִ� �ð��� �Է¹޾� ���� ����� ���
// �ð� �� ��� -> �Ϲ� �¿��� : 2�޷�, ���� : 3�޷�, Ʈ�� : 4�޷�

#include <iostream>
using namespace std;

int main()
{
	char vehicleType;
	int parkingTime;
	int finalFee;

	cin >> vehicleType;
	cin >> parkingTime;

	switch (vehicleType)
	{
		case 'c':
			finalFee = 2 * parkingTime;
			break;
		case 'b':
			finalFee = 3 * parkingTime;
			break;
		case 't':
			finalFee = 4 * parkingTime;
			break;
		default:
			cout << "Wrong Vehicle Type" << endl;
			finalFee = 0;
			break;
	}

	cout << finalFee << endl;

	return 0;
}