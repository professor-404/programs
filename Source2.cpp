#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;
int main()
 {
	

	//--------------------------------PALINDROME NUMBERS--------------------------

	/*int num, rem, x, rev = 0;
	cout << "Enter any number to check palindrome : ";
	cin >> num;
	x = num;
	while ( x > 0)
	{
		rem = x % 10;
		rev = (rev * 10) + rem;
		x = x/10;
	}
	cout << "Reverse " << rev<<endl;
	if (rev == num)
		cout << "Number is Palindrome";
	else
		cout << "Number is not a Palindrome";*/


	//--------------------------------PALINDROME STRING--------------------------

	/*string str;
	int x, y, z = 0;
	cout << "Enter string to check Palindrome ";
	cin >> str;
	int n = str.size();
	c:for (x = 0, y = n - 1; x < y; x++, y--)
	{
		if (str[x] != str[y])
		{
			z = 0;
			goto c;
		}
		else
			z = 1;
	}
	if (z)
		cout << "String is Palindrome";
	else
		cout << "String is not a Palindrome";*/


	/*char name[100];
	cout << "Enter string ";
	cin >> name;
	int i = 0, j = strlen(name) - 1;
	bool x = true;
	for (i = 0; i < j; i++)
	{
		if (name[i] != name[j])
			x = false;
		j--;
	}

	if (x)
	{
		cout << name<<endl;
		cout << "String is Palindrome";
	}
	else
		cout << "String is not a Palindrome";*/

	//--------------------------------ARMSTRONG--------------------------
	
	int num, n, rem, x = 0;
	cout << "Enter number to check armstrong ";
	cin >> num;
	n = num;
	while (n > 0)
	{
		rem = n % 10;
		x = x+ pow(rem, 3);
		n /= 10;
	}
	cout << "Sum of Cubes " << x << endl;
	if (num == x)
		cout << "Number is Armstrong ";
	else
		cout << "Number is not an Armstrong";


	
	return 0;



}
