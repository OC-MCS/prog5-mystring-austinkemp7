// MyString implementation file
//=============================================================================
// Austin Kemp
// 1 March 2019
// Description: File containing definitions of the functions in the class
//=============================================================================
#include "MyString.h"
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

// Default Constructor
MyString::MyString()
{
	s = nullptr;
}

// Constructor that takes a char pointer to initialize the MyString
MyString::MyString(const char* str)
{
	s = new char[strlen(str) + 1];
	strcpy_s(s, strlen(str) + 1, str);
}

// Copy Constructor
MyString::MyString(const MyString& obj)
{
	cout << "Copy Constructor being used..." << endl;
	s = new char[strlen(obj.s) + 1];
	strcpy_s(s, strlen(obj.s) + 1, obj.s);
}

// Destructor
MyString::~MyString()
{
	delete[] s;
	cout << "Destructor is running..." << endl; 
}

// Function: operator=, overloads the equals operator to work with MyString
// objects
// Parameters:
// obj: constant MyString object holding value to set to the internal MyString 
// object 
// return: this, const MyString holding value set to internal MyString object
const MyString MyString::operator=(const MyString& obj)
{
	if (this != &obj)
	{
		delete[] s;
		s = new char[strlen(obj.s) + 1];
		strcpy_s(s, strlen(obj.s) + 1, obj.s);
	}
	return *this;
}

// Function: operator==, overloads == operator to work with MyString objects
// Parameters:
// obj: constant MyString object holding value to compare to internal MyString
// object
// return: status, boolean representing if the two MyString objects are equal
bool MyString::operator==(const MyString& obj)
{
	bool status;
	
	if (strcmp(obj.s, s) == 0)
		status = true;
	else
		status = false;
	
	return status;
}

// Function: c_str(), returns a pointer to a const char array for the
// overloaded output operator to use
// Parameters: none
// return: s, pointer to a char of the MyString object
const char* MyString::c_str() const
{
	return s;
}

// Function: operator+, overloads the plus operator to work with MyString
// objects
// Parameters:
// obj: constant MyString object holding value to add (concatenate) to internal 
// MyString object
// return: s, pointer to a char of the concatenated MyString object
MyString MyString::operator+(const MyString& obj)
{
	strcat_s(s, strlen(obj.s) + strlen(s) + 1, obj.s);
	return s;
}

// Function: operator<<, overloads the output operator to work with MyString
// objects
// Parameters:
// obj: constant MyString object to output
// return: strm, reference to an output stream object
ostream& operator <<(ostream &strm, const MyString &obj)
{
	if (obj.c_str() != nullptr)
		strm << obj.c_str();
	return strm;
}




