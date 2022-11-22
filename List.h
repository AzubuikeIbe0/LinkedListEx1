#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class List
{
private:
	Node* head;
public:
	List();
	void AddNode(int data);
	void deleteNode(int data);
	void printList();
};