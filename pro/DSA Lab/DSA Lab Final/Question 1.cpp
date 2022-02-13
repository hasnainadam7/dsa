// MUHAMMAD UMAIR
// CS-191050
// 3-B
// QUESTION - 01



#include<iostream>
using namespace std;

struct adjacent {
	
    int info;
    adjacent* upcoming;
    adjacent(int info);
    ~adjacent();
};

adjacent::adjacent(int info) : info(info), upcoming(NULL) { }
adjacent::~adjacent( ) { }

struct Node {
	
    int info;
    Node* upcoming;
    adjacent* n;

    Node(int info);
    ~Node( );
};

Node::Node(int info) : info(info),
upcoming(NULL), n(NULL) { }
Node::~Node( ) { };

class GRAPH {
	
private:
    Node* head;

public:
    GRAPH( );
    void insertNodes(int vertices);
    void ADDING_EDGE(int u, int v);
    void printGRAPH( );
    void lowestOutdegree( );
};

GRAPH::GRAPH() : head(NULL) { }

void GRAPH::insertNodes(int vertices) {
	
    Node* present = NULL;
    for (int i = 0; i < vertices; ++i) {
    	
        Node* temp = new Node(i);
        if (head == NULL) {
        	
            head = temp;
            present = head;
        }

        else {
        	
            present->upcoming = temp;
            present = temp;
        }
    }
}

void GRAPH::lowestOutdegree( ) {
	
    Node* present = head;
    adjacent* c = NULL;
    int min = LONG_MAX;
    int counter = 0;
    while (present != NULL) {
    	 
        c = present->n;
        while (c != NULL) {
        	
            counter++;
            c = c->upcoming;
        }
        if (counter < min)
            min = counter;
        counter = 0;
        present = present->upcoming;
    }
    cout << min << endl;
}
void GRAPH::ADDING_EDGE(int u, int v) {
	
    Node* present = head;
    adjacent* c = NULL;

    while (present != NULL) {
    	
        if (present->info == u)
            break;
        present = present->upcoming;
    }
    if (present->n == NULL)
        present->n = new adjacent(v);
    else {
    	
        c = present->n;
        while (c->upcoming != NULL)
            c = c->upcoming;

        c->upcoming = new adjacent(v);
    }
}

void GRAPH::printGRAPH() {

    Node* present = head;
    adjacent* c = NULL;

    while (present != NULL) {
    	
        c = present->n;
        cout << present->info << " -> ";

        while (c != NULL) {
        	
            cout << c->info;
            c = c->upcoming;

            if (c != NULL)
                cout << " - ";
        }
        present = present->upcoming;
        cout << endl;
    }
}

int main() {
	
    GRAPH g;
    g.insertNodes(5);
    g.ADDING_EDGE(3, 4);
    g.ADDING_EDGE(2, 4);
    g.ADDING_EDGE(2, 3);
    g.ADDING_EDGE(2, 1);
    g.ADDING_EDGE(0, 1);
    g.ADDING_EDGE(0, 2);
    g.printGRAPH();
    g.lowestOutdegree();
    return 0;
}
