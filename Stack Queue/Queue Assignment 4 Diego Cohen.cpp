#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#define MAX 5

int stack[MAX];
int top = 0;

using namespace std;

int menu() {
	int choice;
	cout << "Welcome to Queue maker \n";
	cout << "The menu items for your Queue are as follows, enter the number of the what you wish to perform in your Stack and Queue.:\n";
	cout << " 1. Push\n 2. Pop\n 3. Display\n 4. Quit\n\n";
	cin >> choice;
	return choice;
}

void Display(){
	int i;
	if(top == 0){
		cout << "The Queue is empty, nothing may be printed.\n";
		return;
	}
	else {
		cout << "The elements in the Queue are as follows:\n";
			for (i = 0; i < top; i++) {
				cout << stack[i]<<"\n";
		}
		
	}

}

void pop() {
	if (top == 0) {
		cout << "The stack is empty, nothing may be removed.\n";
		return;
	}
	else {
		cout << stack[top--]<< "The top element in your Queue has been deleted.\n";
		top--;
	}
}

void push() {
	int data;
	if (top == MAX) {
		cout << "There is a Queue overflow, no more data may fit in your Queue.\n";
		return;
	} 
	else {
		cout << "Please enter the data you wish to add to your Queue:\n";
		cin >> data;
		stack[top] = data;
		top++;
		cout << "The data has been pushed into your Queue\n";
	}
	
}

int main() {


	int choice;

	do {
		choice = menu();
		switch (choice)
		{
		case 1: push();
			break;
		case 2: pop();
			break;
		case 3: Display();
			break;
		case 4: exit(0);
		}

	} while (1);

}