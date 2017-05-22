#pragma once
#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
	class parser {
		string buff;
		int lookahead;
		int i = 0;
	public: 
		parser();
		void expr();
		void term(int t);
		void match(int t);
		struct SyntaxException : public exception {
			const char * what() const throw ()
			{
				return "Syntax Error!";
			}
		};
	};

