#include "Data Structure/List.h"

template <class T>
List<T>::List<T>()
{
	head = nullptr;
	tail = nullptr;
}

template <class T>
void List<T>::push_back(Node<T>* node)
{
	if (head) {
		tail->next = node;
	}
	else {
		head = node;
		tail = node;
	}
}

template <class T>
void List<T>::pop_back()
{
	if (tail) {
		Node<T>* temp = head;

		while (temp->getNext() != tail) {
			temp = temp->getNext();
		}

		free(tail);
		tail = temp;
	}
}

template <class T>
void List<T>::erase(Node<T>* node)
{
	if (head) {
		Node<T>* temp = head;

		while (temp) {
			temp = temp->getNext();
			if (temp->getData() == node->getData()) {

			}
		}
	}
}

template <class T>
Node<T>* List<T>::search(Node<T>* node)
{
	if (head) {
		Node<T>* temp = head;

		while (temp) {
			temp = temp->getNext();
			if (temp->getData() == node->getData()) {
				return temp;
			}
		}
	}

	return nullptr;
}