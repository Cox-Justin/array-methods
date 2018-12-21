#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string bros[] = { "Mario", "Luigi", "Wario", "Waluigi" };
	int size = sizeof(bros) / sizeof(bros[0]);

	for (int i = 0; i < size; i++)
	{
		if (i == (size - 1)) {
			cout << bros[i] << endl;
		}
		else
		{
			cout << bros[i] + ", ";
		}
	}
	
	string reversedArray[size];
	int j = 0;
	for (int i = (size - 1); i >= 0; i--)
	{
		reversedArray[j] = bros[i];
		j++;
	}

	for (int i = 0; i < size; i++)
	{
		if (i == (size - 1)) {
			cout << reversedArray[i] << endl;
		}
		else
		{
			cout << reversedArray[i] + ", ";
		}
	}

	return 0;
}