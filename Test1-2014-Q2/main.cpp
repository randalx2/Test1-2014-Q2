#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

template <class T>  //Creating a user defined GENERIC DATATYPE T
                    //In argument decide which parameter would be generic
                    //MUST DEFINE THE TEMPLATE BEFORE A FUNCTION THAT USES IT. Repeat this
void print(T arr1[], const int length)
{
	for (int i = 0; i < length; i++)
	{
	 cout << arr1[i] << "\t";
	}
	 cout << endl;	
}

int main()
{
	int a1[5] = { 1, 2, 3, 4, 5 };
	char a2[5] = { 'a', 'b', 'c', 'd', 'e' };

	//printing first integer array using template function overloading
	print(a1, 5);  //Demo of overloading
	print(a2, 5);

	system("PAUSE");
	return 0;
}

