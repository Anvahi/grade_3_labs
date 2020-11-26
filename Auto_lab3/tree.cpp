#include "Auto_.h"

void symmetric(node* go_tr, string find) {
	if (go_tr) {
		symmetric(go_tr->left, find);
		if (go_tr->data == find)
			cout << "\n|||" << go_tr->data << "|||";
		else
			cout << "\n|" << go_tr->data << "|";
		symmetric(go_tr->right, find);
		cout << endl;
	}
}

void add(node* tr, string n) {
	if (tr != nullptr) {

		if (tr->left == nullptr) {
			tr->left = new node;
			tr->left->data = n;
			tr->left->left = nullptr;
			tr->left->right = nullptr;
		}
		else if (tr->right == nullptr) {
			tr->right = new node;
			tr->right->data = n;
			tr->right->left = nullptr;
			tr->right->right = nullptr;
		}
	}
}

node* search(node* tr, int count, int lvl) {
	node* temp;
	if (lvl == count - 1) {
		if (tr->left == nullptr || tr->right == nullptr)
			return tr;
		else
			return nullptr;
	}
	temp = search(tr->left, count, lvl + 1);
	if (temp != nullptr)
		return temp;
	else
		tr = search(tr->right, count, lvl + 1);
	return tr;
}

void tree_create(tree* tr, string n) {
	node* tmp = new node;
	tr->root = tmp;
	tr->root->data = n;
	tr->count = 1;
	tr->number_of_elem = 1;
}

void read_tree(tree* tr, vector <string> table) {
	tree_create(tr, table[0]);
	for (int i = 1; i < table.size(); i++) {
		add(search(tr->root, tr->count, 0), table[i]);
		++tr->number_of_elem;
		for (unsigned int i = UINT32_MAX; i > 0; i >>= 1) {
			if (!(tr->number_of_elem ^ i)) {
				++tr->count;
				break;
			}
		}
	}
}

void print_tree(node* tr, int count) {
	if (tr) {
		cout << "| " << tr->data << "(" << count << ")";
		print_tree(tr->left, count + 1);
		print_tree(tr->right, count + 1);
	}
}