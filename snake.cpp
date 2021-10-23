#include<iostream>
using namespace std;
int main()
{
	int length;
	cout << "what is size of your snake???" << endl;
	cin >> length;
	for (int i = 1; i <= length; i++)
	{
		cout << "*#";
	}

}