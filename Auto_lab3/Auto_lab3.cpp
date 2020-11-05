#include "Auto_.h"

int main() {
	cout << "Enter your expression:\n";
	string read = input();
	vector <string> table = table_id(read);
	string id = _id(read, table);
	cout << id << endl;
	output_id_table(table);
	system("pause");
	return 0;
}