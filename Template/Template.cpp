/*
Purpose of the code is learn how to use template in C++

Developer: Barış Someroğlu
Date: 07.07.2024 - 05:30 pm
*/

#include <iostream>

using namespace std;

// Template function definition for Rewrite process
template <typename T>
void Rewrite(T x)
{
	cout << "Entered Value : " << x << endl;
}

// Template function definition for summation process
template <typename U>
U Summation(U a, U b)
{
	return a + b;
}

// Template function definition for total process (with 2 different data type)
template <typename A, typename B>
A Total(A x, B y)
{
	return x + y;
}

int main()
{
	// Change colour of console
	system("color E9");

	// Send different variable type to template
	Rewrite(4);
	Rewrite('B');
	Rewrite("Mizgin");
	Rewrite(4.569);
	Rewrite(4.56f);

	// Send different variable type to template
	cout << "\n" << Summation(10, 7) << endl;
	cout << Summation(10.789, 7.365) << endl;
	cout << Summation(10.7f, 7.4f) << endl;
	cout << Summation('B', '0') << endl;
	
	// Send different variable type to template (with 2 different data type)
	cout << "\n" << Total(10, 7.134) << endl;
	cout << Total(10.789, 7) << endl;
	cout << Total(10.7659, 7.4f) << endl;
	cout << Total(10, '0') << endl; // ASCII code for 0 = 48

	return 0;
}