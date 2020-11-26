#ifndef AUTO_.H

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <fstream>
using namespace std;

#define HashTableNumber 256

string input();
string spacing(string read);
vector <string> table_id(string reread);
void errorw(string read);
void errorf(string read);
int HashFunction(string a);
int HashTable(string* hash_table, vector <string> table);
void Search(string* hash_table, string s);
void OutputHashTable(string* hash_table);
string _id(string reread, vector <string> table);
void output_id_table(vector <string> table);

//tree

struct node {
	string data;
	node* left = nullptr;
	node* right = nullptr;
};

struct tree {
	node* root = nullptr;
	int count = 0;
	int number_of_elem = 0;
};

vector <string> table_tree(string reread);
void symmetric(node* go_tr, string find);
void read_tree(tree* tr, vector <string> table);
void tree_create(tree* tr, string n);
node* search(node* tr, int count, int lvl);
void add(node* tr, string n);
void print_tree(node* tr, int count);

#endif // !AUTO_.H