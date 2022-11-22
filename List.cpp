#include "List.h"

List::List()
{
	Node* head = nullptr;
	Node* temp = nullptr;
	Node* curr = nullptr;
}


void List::AddNode(int addData)
{
	Node* curr = head;
	Node* newNode = new Node();
	newNode->next = nullptr;
	newNode->data = addData;

	if (head != nullptr)
	{
		while (curr->next != nullptr)
		{
			curr = curr->next;
		}

		curr->next = newNode;
	}
	else
	{
		head = newNode;
	}
}


void List::deleteNode(int delData)
{
	//Node *leadPtr = head;
	//Node *trailPtr = nullptr;

	//if (head->data == delData) // if delData matches the head
	//{
	//	head = head->next;
	//	delete leadPtr;
	//}
	//else
	//{ // Continue until you find the node with delData using 2 pointers
	//	while (leadPtr != nullptr && leadPtr->data != delData)
	//	{
	//		trailPtr = leadPtr;
	//		leadPtr = leadPtr->next;
	//	}
	//}

	//if (leadPtr == nullptr) // Means delData was not found
	//{
	//	cout << delData << "was not found in this list!" << endl;
	//	return;
	//}
	//else
	//{ // delData was found

	//	trailPtr->next = leadPtr->next;
	//	delete leadPtr;
	//	cout << delData << " was succesfully deleted!" << endl;
	//}


	Node *delPtr = nullptr;
	Node *curr = head;
	Node *temp = head;

	while (curr != nullptr && curr->data != delData)
	{
		temp = curr;
		curr = curr->next;
	}
	if (curr == nullptr) {
		cout << delData << " is not in this list!" <<endl;
		delete delPtr;
	}
	else
	{
		delPtr = curr;
		curr = curr->next;

		if (delPtr == head)
		{
			head = head->next;
			temp = nullptr;
		}

		delete delPtr;
		cout << "the value " << delData << " was deleted!" << endl;
	}
}


void List::printList()
{
	Node *temp = head;

	while (temp != nullptr)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}