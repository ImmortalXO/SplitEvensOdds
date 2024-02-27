#include <iostream>
#include "unorderedLinkedList.h"
using namespace std;

int main() {
	intLinkedList<int> list;
	intLinkedList<int> evensList;
	intLinkedList<int> oddsList;

	int integer;
	cout << "Enter integers ending with -999: " << endl;;
	cin >> integer;
	while (integer != -999) {
		list.insertLast(integer);
		cin >> integer;
	};

	cout << "Original List: ";
	for (auto it = list.begin(); it != list.end(); ++it) {
		cout << *it << " ";
	};
	cout << endl;

	list.splitEvensOddsList(evensList, oddsList);

	cout << "Evens List: ";
	for (auto it = evensList.begin(); it != evensList.end(); ++it) {
		cout << *it << " ";
	};
	cout << endl;

	cout << "Odds List: ";
	for (auto it = oddsList.begin(); it != oddsList.end(); ++it) {
		cout << *it << " ";
	};
	cout << endl;
};