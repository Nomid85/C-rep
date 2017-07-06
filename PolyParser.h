#pragma once
#include <iostream>
#include <string>
using namespace std;
class PolyParser {
	string expr;
	char ch;
	int pos;
  public: 
	PolyParser(string s);
	void NextCh();
	void polynom();
	void addend();
	void power();
	void number();
    struct SyntaxException : public exception {
		const char * what() const throw ()
		{
			return "Syntax Error!";
		}

	};
};