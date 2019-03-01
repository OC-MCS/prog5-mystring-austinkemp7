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
	
	cout << "Assigning " << s3.c_str() << " to empty MyString s1" << endl;
	s1 = s3;
	cout << "s1: " << s1.c_str() << endl;

	cout << "Adding (Concatenating) s2 and s4 to s5" << endl;
	s5 = s2 + s4;
	cout << "s5: " << s5.c_str() << endl; 
	
	cout << "Copying " << s4.c_str() << " to s3 and s1" << endl;
	s1 = s3 = s4;
	cout << "s1: " << s1.c_str() << endl;
	cout <<  "s3: " << s3.c_str() << endl;
	cout << "s4: " << s4.c_str() << endl;

	s7 = testString(s6);
	cout << "Passing " << s6.c_str() << " to a function by value and returning it as s7" << endl;
	cout << "s7: " << s7.c_str() << endl;
	cout << "s6: " << s6.c_str() << endl;
	return 0;
}

MyString testString(MyString passedString)
{
	MyString sf;
	sf = passedString;
	return sf;
}