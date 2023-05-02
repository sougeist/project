#include <iostream>
using namespace std;
int main()
{
	int arrSize, wantedNum, wantedPoint, cicleWantedNum, wantedSide, max = -1000;
	cout << "Type size";
	cin >> arrSize;
	int input[arrSize];
	cout << "Type array";
	for (int i = 0; i < arrSize; i++) {
		cin >> input[i];
	}

	cout << "Type wanted point";
	cin >> wantedPoint;
	cout << "Type wanted number";
	cin >> wantedNum;
	cout << "Type wanted side (1/0)";
	cin >> wantedSide;
	if (wantedSide == 0)
	{
		cicleWantedNum = (wantedNum -= 1);
		for (int i = wantedPoint; i != cicleWantedNum; i++)
		{
			cout << input[i];
			if (i == 0)
			{
				i = arrSize;
			}
		}
	}
	else
		arrSize = arrSize -= 1;
	cicleWantedNum = (wantedNum += 1);
	for (int i = wantedPoint; i != cicleWantedNum; i++)
	{
		cout << input[i];
		if (i == arrSize)
		{
			i = 0;
			cout << input[i];
		}
	}
}