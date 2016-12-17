#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m, pos;
		cin>>n>>m>>pos;
		double res = (double)n/m;
		cout<<setprecision(pos)<<fixed<<res<<endl;
	}
	return 0;
}