#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	cout << "Enter expression:" << endl;
	string temp = "";
	string read;
	do {
		getline(cin, temp);
		read += "\n\r" + temp;
	} while (temp.size() >= 1);
	read += "\n\r";
	temp = "";
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
		if (read[i] != '+' && read[i] != '-' && read[i] != '*' && read[i] != '/' && read[i] != '^' && read[i] != ' ' && read[i] != '\n' && read[i] != '(' && read[i] != ')' && read[i] != ';' && read[i] != '\r') {
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
	bool key = false;
	for (int i = 0; i <= read.size(); i++) {
		if (i == read.size()) {
			if (temp != "")
				if (table.size() != 0) {
					if (temp == "while" || temp == "do" || temp == "for" || temp == "if" || temp == "else" || temp == "then" || temp == ":=" || temp == "<" || temp == ">" || temp == "<=" || temp == ">=" || temp == "=") {
						id += temp;
						key = true;
						temp = "";
					}
					if (!key)
						for (int j = 0; j < table.size(); j++)
							if (table[j] == temp) {
								char tmp = j + 48;
								id += "id";
								id += tmp;
								temp = "";
							}
					break;
				}
		}
		if (read[i] != '+' && read[i] != '-' && read[i] != '*' && read[i] != '/' && read[i] != '^' && read[i] != ' ' && read[i] != '\n' && read[i] != '(' && read[i] != ')' && read[i] != ';' && read[i] != '\r') {
			temp += read[i];
		}
		else {
			if (temp != "") {
				if (table.size() != 0) {
					if (temp == "while" || temp == "do" || temp == "for" || temp == "if" || temp == "else" || temp == "then" || temp == ":=" || temp == "<" || temp == ">" || temp == "<=" || temp == ">=" || temp == "=") {
						id += temp;
						key = true;
						temp = "";
					}
					if (!key)
						for (int j = 0; j < table.size(); j++)
							if (table[j] == temp) {
								char tmp = j + 48;
								id += "id";
								id += tmp;
								temp = "";
							}
					key = false;
				}
			}
			id += read[i];
		}
	}
	cout << id << endl;
	cout << " ID - LEXEME - TYPE" << endl;
	for (int i = 0; i < table.size(); i++) {
		if (isdigit(table[i][0])) {
			bool fl = false;
			bool var = false;
			bool flc = false;
			for (int j = 1; j < table[i].length(); j++) {
				if (isalpha(table[i][j])) {
					if (table[i][j] >= 97 && table[i][j] <= 102)
						fl = true;
					else if (!fl && !flc)
						var = true;
				}
				if (isgraph(table[i][j])) {
					if (table[i][j] == 44 || table[i][j] == 46)
						flc = true;
				}
			}
			if (fl && !var)
				cout << " " << i << " - " << table[i] << " - " << "Hexadecimal constant\n";
			if (var)
				cout << " " << i << " - " << table[i] << " - " << "Floating point variable\n";
			if (flc && !fl && !var)
				cout << " " << i << " - " << table[i] << " - " << "Floating point constant\n";
			if (!fl && !flc && !var)
				cout << " " << i << " - " << table[i] << " - " << "Integer constant\n";
		}
		else {
			bool op = false;
			if (table[i] == "while" || table[i] == "do" || table[i] == "for") {
				cout << " " << i << " - " << table[i] << " - " << "Loop operator\n";
				op = true;
			}
			if (table[i] == "if" || table[i] == "else" || table[i] == "then") {
				cout << " " << i << " - " << table[i] << " - " << "Conditional operator\n";
				op = true;
			}
			if (table[i] == "<=" || table[i] == ">=" || table[i] == "=" || table[i] == "<" || table[i] == ">") {
				cout << " " << i << " - " << table[i] << " - " << "Comparison operator\n";
				op = true;
			}
			if (table[i] == ":=") {
				cout << " " << i << " - " << table[i] << " - " << "Assignment operator\n";
				op = true;
			}
			else if (!op)
				cout << " " << i << " - " << table[i] << " - " << "Floating point variable\n";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}