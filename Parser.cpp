#include"Parser.h"
parser::parser() {
	cin >> buff;
	lookahead = buff[0];
}
void parser::expr() {
	term(lookahead);
	int i = 0;
	while (lookahead!= '\0')
	{
		if (lookahead == '+') {
			match('+');
			term(lookahead);
			cout << "+";
		}
		if (lookahead == '-') {
			match('-');
			term(lookahead);
			cout << "-";
		}	
	}
}
void parser::term(int t) {
	if (t >= '0' && t <= '9') {
		cout << (char)t;
		match(t);
	}
	else
	{
		throw  SyntaxException();
	}
}
void parser::match(int t) {
	if (lookahead == t) {
		i++;
		lookahead = buff[i];
	}
	else
	{
		throw  SyntaxException();
	}
}
