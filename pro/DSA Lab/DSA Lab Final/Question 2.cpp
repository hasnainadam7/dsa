// MUHAMMAD UMAIR
// CS-191050
// 3-B
// QUESTION - 02

#include<iostream>

struct Node {
	
	std::string text = " ";
	Node* upcoming = nullptr;
};

class Student {
	
	private:
		Node temp;
	public:
		Student(std::string text);
		void PrintList();
		void InsertNode(std::string text);
};

Student::stud(std::string text)
{
	this->temp.text = text;
}

void stud::PrintList()
{
	std::cout << this->temp.text << std::endl;
	Node* temp = &this->temp;

	while (temp->upcoming != nullptr)
	{
		temp = temp->upcoming;
		std::cout << temp->text << std::endl;
	}
}

void stud::InsertNode(std::string text)
{
	Node* temp = &this->temp;

		while (temp->upcoming != nullptr)
		{
			temp = temp->upcoming;
		}
		temp->upcoming = new Node;
		temp->upcoming->text = text;
}

int main() {
	
	stud Raheel("Raheel");
	Raheel.InsertNode("Ali");
	Raheel.InsertNode("Osama");
	Raheel.InsertNode("Hashir");
	Raheel.InsertNode("Tajamul");
	Raheel.PrintList();
}
