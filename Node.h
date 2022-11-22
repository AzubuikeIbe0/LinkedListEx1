#pragma once
#include <iostream>
using namespace std;

class Node
{
	friend class List;
private:
	int data;
	Node* next;
	
public:
	Node();
};