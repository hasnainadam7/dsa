#include "NODE.h"

class CIRCULAR_QUEUE {

	public:
		NODE *front;
		NODE *current;
		void ENQUEUE(CIRCULAR_QUEUE *c, int num);
		void DEQUEUE(CIRCULAR_QUEUE *c);
		void DISPLAY(CIRCULAR_QUEUE *c);
	
};
