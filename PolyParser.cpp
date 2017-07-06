#include "PolyParser.h"
PolyParser::PolyParser(string s) {
	expr = s;
	pos = 0;
	ch = expr[0];
}
void PolyParser::NextCh() {
	do
	{
		pos++;
		ch = expr[pos];
	} while (ch == ' ');
}
void PolyParser::polynom() {
	if (ch == '+'||ch == '-')
	{
		NextCh();
			}
	addend();
	while (ch == '+' || ch == '-')
	{
		NextCh();
		addend();
	}
}
void PolyParser::addend() {
	if (ch == 'x')
	{
		NextCh();
		power();
	}
	else
	{
		number();
		if (ch == 'x')
		{
			NextCh();
			power();
		}
	}
}
void PolyParser::power() {
	if (ch == '^')
	{
		NextCh();
		number();
	}
}
void PolyParser::number() {
	if ((int)ch >= 48 && (int)ch <= 57)
	{
		NextCh();
	}
	else
	{
		throw SyntaxException();
	}
	while ((int)ch >= 48 && (int)ch <= 57)
	{
		NextCh();
	}
}