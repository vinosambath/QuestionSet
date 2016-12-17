#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		string output = "";
		char previousChar = str[0];
		int continousCount = 1;
		output += previousChar;
		for(int i = 1; i < str.length(); i++)
		{
			if(str[i] == previousChar)
			{
				continousCount += 1;
			}
			else
			{
				stringstream ss;
				ss<<continousCount;
				output += ss.str();
				previousChar = str[i];
				output += previousChar;
				continousCount = 1;
			}
		}
		stringstream ss;
		ss<<continousCount;
		output += ss.str();
		cout<<output<<endl;
	}
	return 0;
}