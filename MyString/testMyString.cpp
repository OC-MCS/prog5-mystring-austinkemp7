// test driver code goes here
//=============================================================================
// Austin Kemp
// 1 March 2019
// Description: Class that implements some of the functionality of the
// higher-level string class
//=============================================================================
#include "MyString.h"
#include <iostream>
using namespace std;

MyString testString(MyString passedString);

int main()
{
	MyString s1;
	MyString s2("fred");
	MyString s3(s2);
	MyString s4("jeff");
	MyString s5;
	MyString s6("roberto");
	MyString s7;
	
	cout << "Assigning " << s3 << " to empty MyString s1" << endl;
	s1 = s3;
	cout << "s1: " << s1 << endl;
	cout << endl;

	cout << "Adding (Concatenating) s2 and s4 to s5" << endl;
	s5 = s2 + s4;
	cout << "s5: " << s5 << endl; 
	cout << endl;
	
	cout << "Copying " << s4 << " to s3 and s1" << endl;
	s1 = s3 = s4;
	cout << "s1: " << s1 << endl;
	cout <<  "s3: " << s3 << endl;
	cout << "s4: " << s4 << endl;
	cout << endl;

	s7 = testString(s6);
	cout << "Passing " << s6 << " to a function by value and returning it as s7" << endl;
	cout << "s7: " << s7 << endl;
	cout << "s6: " << s6 << endl;
	cout << endl;

	cout << "Comparing " << s7 << " and " << s6 << endl;
	if (s7 == s6)
	{
		cout << "Strings are equal." << endl;
	}
	else
	{
		cout << "Strings are not equal." << endl;
	}
	cout << endl;

	cout << "Comparing " << s1 << " and " << s7 << endl;
	if (s1 == s7)
	{
		cout << "Strings are equal." << endl;
	}
	else
	{
		cout << "Strings are not equal." << endl;
	}
	cout << endl;
	return 0;
}

MyString testString(MyString passedString)
{
	MyString sf;
	sf = passedString;
	return sf;
}