// Polynom.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "PolyParser.h"
using namespace std;
int main()
{
   string expr;
   cin>> expr;
   PolyParser parse(expr);
   try
   {
	   parse.polynom();
	   cout << "True!";
	   system("pause");
	   return 0;
   }
   catch (PolyParser::SyntaxException e)
   {
	   cout << e.what() << endl;
	   system("pause");
   }
}

