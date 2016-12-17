#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int t = 100;
	cout<<t<<endl;
	for(int i = 0; i < t; i++)
	{
		int n = rand() % 1000;
		int m = rand() % 1000;
		int pos = rand() % 10;

		while(m == 0)
			m = rand() % 1000;

		cout<<n<<" "<<m<<" "<<pos<<endl;
	}
	return 0;
}