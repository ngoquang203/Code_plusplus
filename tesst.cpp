#include<iostream>
#include<cstring>
using namespace std;

void process(char str[], char outstr[])
{ 
	int j = 0;
	for (int i = strlen(str)-1;i>=0; i <  i--)
	{
		outstr[j++] = str[i];
	}
	outstr[j] = '\0';
}

int main()
{
	string a;
	cout<<a;
	return 0;
}