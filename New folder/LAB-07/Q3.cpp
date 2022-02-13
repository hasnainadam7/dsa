#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool Op(char);
int PreOfOP(char);
string Infix_To_postfix(stack<char> str, string inf);
 
int main() {
	string infix, postfix;
	
	cout << "Input Infix expression --> ";
	getline(cin , infix);
	
	stack<char> stack;
	
	cout << "Your infix expression is --> " << infix << endl;
	
	postfix = Infix_To_postfix (stack , infix);
	
	cout << "Your postfix expression is ->   " << postfix;
	return 0;

}

bool Op(char o) {
	if(o == '+' || o == '-' || o == '*' || o == '/' || o == '^')
		return true;

	else
		return false;

}

int PreOfOP(char o) {

    if(o == '^')
    	return 1;
    	
    else if(o == '*' || o == '/')
    	return 1;
    	
    else if(o == '+' || o == '-')
    	return 1;
    	
    else
    	return -1;
    	
} 
 
string Infix_To_postfix (stack<char> str , string inf) {
	string PF;
	
	for(int i = 0 ; i < inf.length() ; ++i) {
		if((inf[i] >= 'a' && inf[i] <= 'z') || (inf[i] >= 'A' && inf[i] <= 'Z'))
			PF+=inf[i];

		else if(inf[i] == '(')
			str.push(inf[i]);

		else if(inf[i] == ')') {
			
			while((str.top() != '(') && (!str.empty())) {

				char temp = str.top();
				PF += temp;
				str.pop();

			}
			
			if(str.top() == '(')			
				str.pop();

		}
		else if (Op (inf[i])) {
			if(str.empty())
				str.push(inf[i]);

			else {
				if(PreOfOP (inf[i]) > PreOfOP (str.top()))
					str.push (inf[i]);

				else if((PreOfOP (inf[i]) == PreOfOP (str.top())) && (inf[i] == '^'))
					str.push (inf[i]);

				else {
					while ( (!str.empty()) && (PreOfOP (inf[i]) <= PreOfOP (str.top()))) {
						PF += str.top();
						str.pop();
					}
					str.push (inf[i]);
				}
			}
		}
	}
	while (!str.empty()) {
		PF += str.top();
		str.pop();
	}
	return PF;
}
