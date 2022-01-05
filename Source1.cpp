#include<iostream>
using namespace std;
int main()
{
	//------------------------------------sum of ages using an array------------------------------------
	/*int a[3];
	int sum = 0, avg = 0, i = 0;
	cout << "the ages of three people=";
	while (i < 3)
	{
		cin >> a[i];
		i++;
	}
	int j = 0;
	while (j < 3)
	{
		sum = sum + a[j];
		j++;
	}
	cout << "the sum is=" << sum << endl;
	avg = sum / 3;
	cout << "the avg is =" << avg << endl;*/

	//-----------------------------------check prime number---------------------------------

	/*int n,b;
	cout << "Enter number to check prime number ";
	cin >> n;
	if (n == 2 || n == 3)
		cout << "Prime";
	for (b = 2; b < n; b++)
	{
		if (n % b == 0)
		{
			cout << "not prime ";
			break;
		}
	}
	if (n == b)
		cout << "Prime ";*/


	/*int sn, b, en;
	cin >> sn;
	cin >> en;
	for (sn; sn <= en; sn++)
	{
		if (sn == 2 || sn == 3)
		{
			cout << sn << endl;
			sn++;
		}
		for (b = 2; b < sn; b++)
		{
			if (sn % b == 0)
				break;
		}
		if (sn == b)
			cout << sn << endl;
	}*/


	int sn, en;
	cin >> sn >> en;
	for (sn; sn <= en; sn++)
	{
		if (sn % 2 == 1)
			cout << sn << endl;
	}


	return 0;
}