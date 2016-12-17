#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int len;
		cin>>len;
		string s;
		cin>>s;
		string output = "";
		int count = 0, i, prev;
		for(i = 0; i < len; i++)
		{
			count = 0;
			prev = i;
			cout<<i<<" " <<s[i]<<endl;
			int start = i+1;
			while(s[start] >= '0' && s[start] <= '9' && start < len)
			{
				count = count*10 + s[start] - '0';
				start++;
			}
			//cout<<count<<endl;
			for(int j = 0; j < count; j++)
			{
				output += s[prev];
			}
			i = start;
		}
		for(int j = 0; j < count; j++) output += s[prev];
		cout<<output<<endl;
	}
}