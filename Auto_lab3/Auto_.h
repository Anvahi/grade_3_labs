#ifndef AUTO_.H

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

#define HashTableNumber 256

string input();
string spacing(string read);
vector <string> table_id(string reread);
int HashFunction(string a);
int HashTable(string* hash_table, vector <string> table);
void Search(string* hash_table, string s);
void OutputHashTable(string* hash_table);
string _id(string reread, vector <string> table);
void output_id_table(vector <string> table);

#endif // !AUTO_.H
