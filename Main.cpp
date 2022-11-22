#include "List.h"

int main()
{
	List L;

	L.AddNode(2);
	L.AddNode(4);
	L.AddNode(6);
	L.AddNode(8);
	L.AddNode(10);
	L.printList();

	L.deleteNode(2);
	L.printList();

	L.deleteNode(8);
	L.printList();

	return 0;
}