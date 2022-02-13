// MUHAMMAD UMAIR
// CS-191050
// 3-B
// QUESTION - 03

#include <iostream>
#include <string>
using namespace std;
class Product_Records {
	
public:

    std::string Product_ID;
    
    std::string NAME;
    
	std::string CATEGORY;
    
	float PRICE;
    
	Product_Records* next;
    
	Product_Records();
    
	Product_Records(std::string, std::string, std::string, float);
    
	void display();
};
Product_Records::Product_Records(): Product_ID(0), NAME("\0"), CATEGORY("\0"), PRICE(0.0f), next(NULL)  {}

Product_Records::Product_Records(std::string Product_ID, std::string NAME, std::string CATEGORY, float PRICE) {
	
    this->Product_ID = Product_ID;
    
	this->NAME = NAME;
    
	this->CATEGORY = CATEGORY;
    
	this->PRICE = PRICE;
   
}

void append(Product_Records** head_ref, std::string Product_ID, std::string NAME, std::string CATEGORY, float PRICE) {
	
    Product_Records* new_node = new Product_Records(Product_ID, NAME, CATEGORY, PRICE);

    Product_Records* last = *head_ref;

    new_node->next = NULL;

    if (*head_ref == NULL) {
    	
        *head_ref = new_node;
        
		return;
    }

    while (last->next != NULL)
        
		last = last->next;

    last->next = new_node;

}

void printList(Product_Records *node) {
  
    while (node != NULL) {
	  
        std::cout << "\n" << node->Product_ID << "\t" << node->NAME << "\t" << node->CATEGORY << "\t" << node->PRICE;
      
        node = node->next;  
    }  
}  


int main() {
	
    Product_Records* root = NULL;
    
	append(&root, BT045, "Baby Winter Suit", "Babies and toys", 850);
    
	append(&root, HB082, "Bio Aqua gel", "Health And Beauty", 522);
    
	append(&root, CS121, "Kit Kat Crunchy", "Choco and snacks", 500);
	
	append(&root, HL500, "Spiral Potato Slicer", "Home and lifestyle", 488);
	
	append(&root, HL071, "Cushion Cover", "Home and lifestyle", 299);
	
	append(&root, ST785, "Adjustable Dumbells", "Sports and travel", 852);
	
	append(&root, HB082, "Bio Aqua gel", "Health And Beauty", 522);
	
	append(&root, ST785, "Adjustable Dumbells", "Sports and travel", 852);
	
	append(&root, FP588, "Basil Leaves", "Fresh Produse", 255);
	
	append(&root, CS121, "Kit Kat Crunchy", "Choco and snacks", 500);
	
	append(&root, CS121, "Kit Kat Crunchy", "Choco and snacks", 500);
	
	append(&root, HL500, "Spiral Potato Slicer", "Home and lifestyle", 488);

    printList(root);
    
	std::cout << std::endl;
    printList(root);
}
