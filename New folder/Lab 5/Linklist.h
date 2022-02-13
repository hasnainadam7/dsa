#include<iostream>
#include "node.h"
class LinkList {
		node *Head;
		node *Current;
	public:
		LinkList();
		void Add_node(int value);
		int Search_node(int value);
		void Delete_node(int pos);
		void Reverse_traversal();
		void Print();
};

