#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int t = 25;
	cout<<t<<endl;
	for(int i = 0; i < t; i++)
	{
		cout<<(rand() % 1001)<<endl;
	}
}