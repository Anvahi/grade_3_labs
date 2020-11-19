#include "Auto_.h"

int main() {
	cout << "Enter your expression:\n";
	string read = input();
	vector <string> table = table_id(read);
	//error_(read, table);
	//errorw(read);
	errorf(read);
	string hash_table[HashTableNumber] = { "" };
	HashTable(hash_table, table);
	string id = _id(read, table);
	cout << id << endl;
	output_id_table(table);
	OutputHashTable(hash_table);
	//Search(hash_table, "i");
	system("pause");
	return 0;
}