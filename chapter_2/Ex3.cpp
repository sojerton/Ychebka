#include <iostream>
using namespace std;
void procedure1();
void procedure2();
int main()
{
	for (int x = 0; x < 2; x++)
	{
		procedure1();
	}
	for (int x = 0; x < 2; x++)
	{
		procedure2();
	}
	system("pause");
	return 0;
}
void procedure1()
{
	cout << "Three blind mice \n";
}
void procedure2()
{
	cout << "See how they run \n";
}