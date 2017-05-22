// Postfix.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"Parser.h"

int main()
{
	try {
		parser parse;
		parse.expr();
		cout << endl;
		system("pause");
		return 0;
	}
	catch (parser::SyntaxException e) {
		cout << e.what()<<endl;
		system("pause");

	}
}

