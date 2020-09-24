#include <iostream>
#include <string>
#include <vector>
using namespace std;

//z = (x*y - 1)*(x*y + 1)

int main() {
	cout << endl;
	cout << "Please, enter the expression: ";
	char s;
	vector <char> read;
	while (cin.get(s)) {
		if (s == '\n')
			break;
		else
			read.push_back(s);
	}
	cout << endl;
	vector<char> table;
	bool f = true;
	for (int i = 0; i < read.size(); i++) {
		if (read[i] != '+' && read[i] != '-' && read[i] != '*' && read[i] != '/' && read[i] != '^' && read[i] != '=' && read[i] != ' ' && read[i] != '\n' && read[i] != '(' && read[i] != ')') {
			if (table.size() != 0)
				for (int j = 0; j < table.size(); j++)
					if (read[i] == table[j])
						f = false;
			if (f)
				table.push_back(read[i]);
			f = true;
		}
	}
	f = true;
	int p;
	char c;
	string out;
	for (int i = 0; i < read.size(); i++) {
		for (int j = 0; j < table.size(); j++)
			if (read[i] == table[j]) {
				f = false;
				p = j;
			}
		if (f)
			out += read[i];
		else {
			c = p + 48;
			out += "<id";
			out += c;
			out += ">";
		}
		f = true;
	}
	cout << out << endl;
	cout << endl;
	cout << "-----------------------------------------\n";
	cout << "| ID | LEXEME | TYPE                    |" << endl;
	for (int i = 0; i < table.size(); i++) {
		cout << "-----------------------------------------\n";
		if (table[i] >= 48 && table[i] <= 57)
			cout << "| " << i << "  | " << table[i] << "      | " << "Integer constant        |\n";
		else
			cout << "| " << i << "  | " << table[i] << "      | " << "Floating point variable |\n";
	}
	cout << "-----------------------------------------\n";
	cout << endl;
	system("pause");
	return 0;
}