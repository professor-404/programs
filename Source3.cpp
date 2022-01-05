#include<iostream>
#include <string>
using namespace std;
int main()
{
	//age of three students



	//int age[5] = { 18,21,22,23,25 };
	//for (int j = 0; j < 5; j++)
	//{
	//	cout << age[j];
	//	cout << endl;
	//}



	//Write a code which declares array of three students:
	//1.	Get age of each student from user
	//2.	Calculate average age of student
	//3.	Display Average age


		/*int S_A[3], j, sum = 0, n = 0;
	float avg;
	for (j = 0; j < 3; j++)
	{
		cout << "enter age :";
		cin >> S_A[j];
		n++;
	}
	avg = (float)(S_A[0]+ S_A[1]+ S_A[2]) / n;
	cout << "average age of students :" << avg << endl;*/

	//-------------------into binary---------------------
	int decimal, 
i;

	cout << "enter no in decimal" << endl;
	cin >> decimal;
	int n = to_string(decimal).length();
	int rem[5];
	for (i = 0; decimal > 0; i++) 
	{
		rem[i] = decimal % 2;
		decimal = decimal / 2;
	}
	cout << "binary is :";
	for (i = i - 1; i >= 0; i--) 
	{
		cout << rem[i] << " ";
	}

	
	//-------------largest number in array------------


	/*int a[5];
	cout << "Enter 5 numbers " << endl;
	for (int i = 0; i < 5; i++)
	{		
		cin >> a[i];
	
		if (a[0] < a[i])
			a[0] = a[i];
	}
	cout <<"Largest Element is "<< a[0];*/

	//--------------smallest in an array----------------

	/*int a[5];
	cout << "Enter 5 numbers " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];

		if (a[0] < a[i])
			a[0] = a[i];
	}
	cout << "Largest Element is " << a[0];*/

	//------------------------table--------------------------


	/*int n, i,x;
	cout << "Enter number for Table ";
	cin >> n;
	for (i = 1; i <= 10; i++)
	{
		x = i * n;
		cout << n << "*" << i << "=" << x << endl;
	}*/

	//------------------------------max value-------------------


	/*int n, max = 0;
	cin >> n;
	while (n != 0)
	{
		if (max < n)
			max = n;
			cin >> n;
	}
	cout << "Max Value " << max;*/





	return 0;
}
