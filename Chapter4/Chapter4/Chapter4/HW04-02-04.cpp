// 차량 종류(일반 승용차 : 'c', 버스 : 'b', 트럭 : 't')와 주차장에서 차량이 있던 시간을 입력받아 주차 요금을 계산
// 시간 당 요금 -> 일반 승용차 : 2달러, 버스 : 3달러, 트럭 : 4달러

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