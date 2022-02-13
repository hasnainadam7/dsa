#ifndef LINKLIST_H
#define LINKLIST_H
#include <iostream>
#include "node.h"

class LinkList
{
	private:
		Node* head;
		Node* current;
		
	public:
		LinkList();
		void insertData(int data);
		void updateData(int enterValue, char playerTurn);
		void printBoard();
		bool checkWinner(std::string player1 , std::string player2);
		void rematchAndNewgame();
};
#endif
