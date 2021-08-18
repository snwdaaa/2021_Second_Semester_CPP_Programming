#include <iostream>
using namespace std;

int main()
{
	int score1, score2, score3;
	float scoreAvg;
	char result;

	cin >> score1;
	cin >> score2;
	cin >> score3;

	scoreAvg = (score1 + score2 + score3) / 3.0f;

	if (scoreAvg > 90)
	{
		result = 'A';
	}
	else if (80 <= scoreAvg && scoreAvg < 90)
	{
		if (score3 > 90)
		{
			result = 'A';
		}
		else
		{
			result = 'B';
		}
	}
	else if (70 <= scoreAvg && scoreAvg < 80)
	{
		if (score3 > 80)
		{
			result = 'B';
		}
		else
		{
			result = 'C';
		}
	}
	else if (60 <= scoreAvg && scoreAvg < 70)
	{
		if (score3 > 70)
		{
			result = 'C';
		}
		else
		{
			result = 'D';
		}
	}
	else if (scoreAvg < 60)
	{
		if (score3 > 60)
		{
			result = 'D';
		}
		else
		{
			result = 'F';
		}
	}

	cout << result;

	return 0;
}