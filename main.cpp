#include <iostream>
#include "unorderedLinkedList.h"
using namespace std;

int main() {
	intLinkedList list;
	intLinkedList evensList;
	intLinkedList oddsList;

	int integer;
	cout << "Enter integers ending with -999: " << endl;
	cin >> integer;
	while (integer != -999) {
		list.insertLast(integer);
		cin >> integer;
	};

	cout << "Original List:";
	for (auto it = list.begin(); it != list.end(); ++it) {
		cout << *it << " ";
	};
	cout << endl;
};