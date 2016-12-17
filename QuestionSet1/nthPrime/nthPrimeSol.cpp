#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; // The nth prime number input
		cin>>n;
		int tillNow = 0;
		for(int i = 2; ; i++)
		{
			int flag = 1, divisor = 0;
			for(int j = 1; j <= i; j++)
			{
				if(i % j == 0) divisor++;
			}

			if(divisor == 2) {tillNow++;}

			if(tillNow == n) {cout<<i<<endl;break;}
		}
	}
}