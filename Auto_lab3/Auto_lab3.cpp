#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

//z = (xy - 1)*(x*y + 1.35)
//z = (3xy - 1)*(x*y + 1.35)-4as + 45df

int main() {
	cout << "Enter expression:" << endl;
	char s;
	vector <char> read;
	while (cin.get(s)) {
		if (s == '\n')
			break;
		else
			read.push_back(s);
	}
	string temp = "";
	vector <string> table;
	bool f = true;
	for (int i = 0; i <= read.size(); i++) {
		if (i == read.size()) {
			if (temp != "") {
				for (int j = 0; j < table.size(); j++) {
					if (table[j] == temp) {
						f = false;
						temp = "";
					}
				}
				if (f) {
					table.push_back(temp);
					temp = "";
				}
			}
			break;
		}
		if (read[i] != '+' && read[i] != '-' && read[i] != '*' && read[i] != '/' && read[i] != '^' && read[i] != '=' && read[i] != ' ' && read[i] != '\n' && read[i] != '(' && read[i] != ')') {
			temp += read[i];
		}
		else {
			if (temp != "") {
				if (table.size() != 0)
					for (int j = 0; j < table.size(); j++) {
						if (table[j] == temp) {
							f = false;
							temp = "";
							break;
						}
					}
				if (f) {
					table.push_back(temp);
					temp = "";
				}
				f = true;
			}
		}
	}
	string id = "";
	for (int i = 0; i <= read.size(); i++) {
		if (i == read.size()) {
			if (temp != "")
				if (table.size() != 0)
					for (int j = 0; j < table.size(); j++)
						if (table[j] == temp) {
							char tmp = j + 48;
							id += "id";
							id += tmp;
							temp = "";
						}
			break;
		}
		if (read[i] != '+' && read[i] != '-' && read[i] != '*' && read[i] != '/' && read[i] != '^' && read[i] != '=' && read[i] != ' ' && read[i] != '\n' && read[i] != '(' && read[i] != ')') {
			temp += read[i];
		}
		else {
			if (temp != "")
				if (table.size() != 0)
					for (int j = 0; j < table.size(); j++)
						if (table[j] == temp) {
							char tmp = j + 48;
							id += "id";
							id += tmp;
							temp = "";
						}
			id += read[i];
		}
	}
	cout << endl;
	cout << id << endl;
	cout << endl;
	cout << " ID - LEXEME - TYPE" << endl;
	for (int i = 0; i < table.size(); i++) {
		if (isdigit(table[i][0])) {
			bool fl = false;
			bool var = false;
			for (int j = 1; j < table[i].length(); j++)
				if (isalpha(table[i][j])) {
					if (table[i][j] >= 97 && table[i][j] <= 102)
						fl = true;
					else
						var = true;
				}
			if (fl && !var)
				cout << " " << i << " - " << table[i] << " - " << "Hexadecimal constant\n";
			if (var)
				cout << " " << i << " - " << table[i] << " - " << "Floating point variable\n";
			else if (!fl)
				cout << " " << i << " - " << table[i] << " - " << "Numeric constant\n";
		}
		else
			cout << " " << i << " - " << table[i] << " - " << "Floating point variable\n";
	}
	cout << endl;
	system("pause");
	return 0;
}