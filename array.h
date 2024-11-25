using namespace std;
#include<iostream>
class Array
{
	int *p;
	int size;
	int index;
	public:
		Array(int);
		bool isEmpty();
		bool isFull();
		bool addElement(int);
		bool deleteElement(int);
		void display();
		void searchElement(int);
		~Array();
};
