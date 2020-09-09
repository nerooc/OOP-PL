#include "PLinkedList.h"

PLinkedList PLinkedList::addFront(Node* x) {
	if(firstNode == nullptr){
		firstNode = x;
	} 
	else {
		Node* temp = firstNode;

		while (temp->next) {
			temp = temp->next;
		}

		temp->next = x->clone();
		x->next = nullptr;
	}
	
	return (*this);
}

std::ostream& operator<<(std::ostream& o, const PLinkedList& List) {
	Node* temp = List.firstNode;

	while (temp) {
		temp->print();
		std::cout << " -> ";
		temp = temp->next;
	}
	
    std::cout << "\n";
    
}

Node* PLinkedList::head() {
	return firstNode;
}