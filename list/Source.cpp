#include "SinglyLinkedList.h"

int main()
{
	SinglyLinkedList sll;
	sll.AddToTail(11);
	sll.AddToTail(54);
	sll.AddToTail(5);

	sll.Print();

	sll.AddToHead(1);
	sll.AddToHead(7);
	sll.AddToHead(29);

	sll.Print();
	
}