#pragma once
// MyString class declaration goes here
//=============================================================================
// Austin Kemp
// 1 March 2019
// Description: Header file containing the function declarations, constructors
// and destructors
//=============================================================================
class MyString
{
private:
	char* s;
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString &obj);
	~MyString();
	const MyString operator=(const MyString &obj);
	bool operator==(const MyString &obj);
	const char* c_str() const;
	MyString operator+(const MyString &obj);
};
