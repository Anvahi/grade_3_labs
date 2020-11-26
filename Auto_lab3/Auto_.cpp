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

vector <string> table_error(string reread) {
	string temp = "";
	vector <string> table;
	bool f = true;
	for (int i = 0; i <= reread.size(); i++) {
		if (i == reread.size()) {
			if (temp != "") {
				table.push_back(temp);
				temp = "";
			}
			break;
		}
		if (reread[i] != '+' && reread[i] != '-' && reread[i] != '*' && reread[i] != '/' && reread[i] != '^' && reread[i] != ' ' && reread[i] != '\n' && reread[i] != '(' && reread[i] != ')' && reread[i] != ';' && reread[i] != '\r')
			temp += reread[i];
		else {
			if (temp != "") {
				table.push_back(temp);
				temp = "";
			}
			if (reread[i] == '(' || reread[i] == ')' || reread[i] == ';') {
				temp = reread[i];
				table.push_back(temp);
				temp = "";
			}
		}
	}
	return table;
}

vector <string> table_tree(string reread) {
	string temp = "";
	vector <string> table;
	bool f = true;
	for (int i = 0; i <= reread.size(); i++) {
		if (i == reread.size()) {
			if (temp != "") {
				table.push_back(temp);
				temp = "";
			}
			break;
		}
		if (reread[i] != ' ' && reread[i] != '\n' && reread[i] != '(' && reread[i] != ')' && reread[i] != ';' && reread[i] != '\r')
			temp += reread[i];
		else {
			if (temp != "") {
				table.push_back(temp);
				temp = "";
			}
		}
	}
	return table;
}

void errorw(string read) {
	bool f = false;
	vector <string> table = table_error(read);
	for (int i = 0; i < table.size(); i++) {
		if (table[i] == "do") {
			for (int j = i; j < table.size(); j++) {
				if (table[j] == "while") {
					f = true;
					table[j] = "";
					break;
				}
			}
			if (!f) {
				cout << endl << "SYNTAX MISTAKE WHILE!" << endl;
				break;
			}
			f = false;
		}
	}
	table = table_error(read);
	bool esemicolon = false;
	for (int i = 0; i < table.size(); i++) {
		if (table[i] == "do") {
			for (int j = i; j < table.size(); j++) {
				if (table[j] == ";")
					esemicolon = true;
				if (table[j] == "while" && !esemicolon)
					cout << endl << "SYNTAX MISTAKE SEMICOLON!" << endl;
			}
		}
	}
	for (int i = 0; i < table.size(); i++) {
		if (table[i] == "while") {
			for (int j = i; j < table.size(); j++) {
				if (table[j] == "(") {
					f = true;
					table[j] = "";
					break;
				}
			}
			if (!f) {
				cout << endl << "SYNTAX MISTAKE LEFT BRACKET!" << endl;
				break;
			}
			f = false;
		}
	}
	table = table_error(read);
	for (int i = 0; i < table.size(); i++) {
		if (table[i] == "(") {
			for (int j = i; j < table.size(); j++) {
				if (table[j] == ")") {
					f = true;
					table[j] = "";
					break;
				}
			}
			if (!f) {
				cout << endl << "SYNTAX MISTAKE RIGHT BRACKET!" << endl;
				break;
			}
			f = false;
		}
	}
}

void errorf(string read) {
	bool f = false;
	vector <string> table = table_error(read);
	for (int i = 0; i < table.size(); i++) {
		if (table[i] == "for") {
			for (int j = i; j < table.size(); j++) {
				if (table[j] == "do") {
					f = true;
					table[j] = "";
					break;
				}
			}
			if (!f) {
				cout << "Error. Expected do!" << endl;
				break;
			}
			f = false;
		}
	}
	table = table_error(read);
	for (int i = 0; i < table.size(); i++) {
		if (table[i] == "for") {
			for (int j = i; j < table.size(); j++) {
				if (table[j] == "(") {
					f = true;
					table[j] = "";
					break;
				}
			}
			if (!f) {
				cout << endl << "Error. Expected left bracket!" << endl;
				break;
			}
			f = false;
		}
	}
	table = table_error(read);
	int count_semicolon = 0;
	f = false;
	for (int i = 0; i < table.size(); i++) {
		if (table[i] == "(") {
			f = true;
			if (table[i] == ")")
				break;
		}
		if (table[i] == ";" && f)
			count_semicolon++;
	}
	if (count_semicolon != 2) {
		cout << endl << "Error. Expected semicolon!" << endl;
	}
	table = table_error(read);
	f = false;
	for (int i = 0; i < table.size(); i++) {
		if (table[i] == "(") {
			for (int j = i; j < table.size(); j++) {
				if (table[j] == ")") {
					f = true;
					table[j] = "";
					break;
				}
			}
			if (!f) {
				cout << endl << "Error. Expected right bracket!" << endl;
				break;
			}
			f = false;
		}
	}
}

int HashFunction(string a) {
	int temp = 0;
	for (int i = 0; i < a.length(); i++)
		temp += a[i] * (i + 1);
	return temp%256;
}

int HashTable(string *hash_table, vector <string> table) {
	bool overtable = false;
	for (int i = 0; i < table.size(); i++) {
		int temp = HashFunction(table[i]);
		if (hash_table[temp] == "")
			hash_table[temp] = table[i];
		else {
			while (hash_table[temp] != "") {
				if (temp == HashTableNumber && overtable) {
					cout << endl << "Error! Hash table is over!" << endl;
					break;
				}
				if (temp == HashTableNumber) {
					overtable = true;
					temp = 0;
					continue;
				}
				temp++;
			}
			hash_table[temp] = table[i];
		}
	}
	return 1;
}

void Search(string *hash_table, string s) {
	bool overtable = false;
	int temp = HashFunction(s);	
	if (hash_table[temp] == s)
		cout << endl << " " << temp << " - " << s << endl;
	else
		while(hash_table[temp] != s || hash_table[temp] != "") {
			if (temp != HashTableNumber)
				temp++;
			else if (!overtable) {
				overtable = true;
				temp = 0;
			}
			else if (overtable) {
				cout << endl << "Element is not find!" << endl;
				break;
			}		
			if (hash_table[temp] == s)
				cout << endl << " " << temp << " - " << s << endl;
		}
}

void OutputHashTable(string *hash_table) {
	for (int i = 0; i < HashTableNumber; i++) {
		if (hash_table[i] == "")
			continue;
		cout << " " << i << " - " << hash_table[i] << endl;
	}
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