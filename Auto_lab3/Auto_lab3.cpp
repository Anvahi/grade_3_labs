#include "Auto_.h"

int main() {
	cout << "Enter your expression:\n";
	string read = input();
	vector <string> table = table_id(read);
	errorw(read);
	//errorf(read);
	vector <string> test_tree = table_tree(read);
	tree* tr = new tree;
	read_tree(tr, test_tree);
	//symmetric(tr->root, "do");
	print_tree(tr->root, 0);
	string hash_table[HashTableNumber] = { "" };
	HashTable(hash_table, table);
	string id = _id(read, table);
	cout << id << endl;
	output_id_table(table);
	OutputHashTable(hash_table);
	system("pause");
	return 0;
}