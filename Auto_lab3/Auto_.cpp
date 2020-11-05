#include "Auto_.h"

string input() {
	string temp = "";
	string read;
	do {
		getline(cin, temp);
		read += "\n\r" + temp;
	} while (temp.size() >= 1);
	read += "\n\r";
	read = spacing(read);
	return read;
}

string spacing(string read) {
	string reread = "";
	bool rer = false;
	for (int i = 0; i <= read.size(); i++) {
		if (i == read.size())
			break;
		if (read[i] == '=' && read[i - 1] != ':' && read[i - 1] != '>' && read[i - 1] != '<') {
			if (read[i - 1] != ' ')
				reread += " ";
			reread += read[i];
			if (read[i + 1] != ' ')
				reread += " ";
			rer = true;
		}
		if ((read[i] == ':' || read[i] == '>' || read[i] == '<') && read[i + 1] != '=') {
			if (read[i - 1] != ' ')
				reread += " ";
			reread += read[i];
			if (read[i + 1] != ' ')
				reread += " ";
			rer = true;
		}
		if ((read[i] == ':' || read[i] == '>' || read[i] == '<') && read[i + 1] == '=') {
			if (read[i - 1] != ' ')
				reread += " ";
			reread += read[i];
			rer = true;
		}
		if (i > 0)
			if ((read[i - 1] == ':' || read[i - 1] == '>' || read[i - 1] == '<') && read[i] == '=') {
				reread += read[i];
				if (read[i + 1] != ' ')
					reread += " ";
				rer = true;
			}
		if (!rer)
			reread += read[i];
		rer = false;
	}
	return reread;
}

vector <string> table_id(string reread) {
	string temp = "";
	vector <string> table;
	bool f = true;
	for (int i = 0; i <= reread.size(); i++) {
		if (i == reread.size()) {
			if (temp != "") {
				for (int j = 0; j < table.size(); j++)
					if (table[j] == temp) {
						f = false;
						temp = "";
					}
				if (f) {
					table.push_back(temp);
					temp = "";
				}
			}
			break;
		}
		if (reread[i] != '+' && reread[i] != '-' && reread[i] != '*' && reread[i] != '/' && reread[i] != '^' && reread[i] != ' ' && reread[i] != '\n' && reread[i] != '(' && reread[i] != ')' && reread[i] != ';' && reread[i] != '\r') {
			temp += reread[i];
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
	return table;
}

string _id(string reread, vector <string> table) {
	string id = "";
	bool key = false;
	string temp = "";
	for (int i = 0; i <= reread.size(); i++) {
		if (i == reread.size()) {
			if (temp != "")
				if (table.size() != 0) {
					if (temp == "while" || temp == "do" || temp == "to" || temp == "for" || temp == "if" || temp == "else" || temp == "then" || temp == ":=" || temp == "<" || temp == ">" || temp == "<=" || temp == ">=" || temp == "=") {
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
		if (reread[i] != '+' && reread[i] != '-' && reread[i] != '*' && reread[i] != '/' && reread[i] != '^' && reread[i] != ' ' && reread[i] != '\n' && reread[i] != '(' && reread[i] != ')' && reread[i] != ';' && reread[i] != '\r') {
			temp += reread[i];
		}
		else {
			if (temp != "") {
				if (table.size() != 0) {
					if (temp == "while" || temp == "do" || temp == "for" || temp == "to" || temp == "if" || temp == "else" || temp == "then" || temp == ":=" || temp == "<" || temp == ">" || temp == "<=" || temp == ">=" || temp == "=") {
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
			id += reread[i];
		}
	}
	return id;
}

void output_id_table(vector <string> table) {
	cout << "-------------------" << endl;
	cout << " ID - LEXEME - TYPE" << endl;
	cout << "-------------------" << endl;
	for (int i = 0; i < table.size(); i++) {
		if (isdigit(table[i][0])) {
			bool fl = false;
			bool var = false;
			bool flc = false;
			for (int j = 1; j < table[i].length(); j++) {
				if (isalpha(table[i][j])) {
					if (table[i][j] >= 97 && table[i][j] <= 102)
						fl = true;
					else if (!flc)
						var = true;
				}
				if (isgraph(table[i][j]))
					if (table[i][j] == 44 || table[i][j] == 46)
						flc = true;
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
			if (table[i] == "while" || table[i] == "do" || table[i] == "for" || table[i] == "to") {
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
}