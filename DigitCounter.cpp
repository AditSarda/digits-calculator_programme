#include <iostream>
using namespace std;

int main()
{
	int numb;
	int nrOfDigets = 1;

	cout << "Enter the number:" << endl;
	cin >> numb ;
	cout << endl;

	int tmp = numb;
	while (tmp /= 10)
		nrOfDigets++;
	cout << "The number " << numb << " has " << nrOfDigets << " digits" << endl;
}
