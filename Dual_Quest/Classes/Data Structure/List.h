#pragma once
#include <vector>

template <class T>
class Node
{
public:
	Node(T* data) : data(data), next(nullptr) {}

	Node*	getNext() { return next; }
	T*		getData() { return data; }
private :
	Node*	next;
	T*		data;
	std::vector<int> a;
};

template <class T>
class List
{
public :
	List();

	void push_back(Node<T>* node);
	void pop_back();
	void erase(Node<T>* node);
	Node<T>* search(Node<T>* node);
private :
	Node* head;
	Node* tail;
};