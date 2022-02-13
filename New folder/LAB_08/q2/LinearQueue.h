#include "NODE.h"
#include<iostream>

class LINEARQUEUE {

	public:
		NODE *front;
		NODE  *current;
		LINEARQUEUE();
		bool check_Full();
		bool check_Empty();
		void ENQUEUE(int num);
		void DEQUEUE();
		void Display();

};
