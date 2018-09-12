#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct node {
	struct node *left;
	int data;
	struct node *right;

};
typedef struct node;
node *start = NULL;

struct node* getnode() {

	node *newnode;
	newnode = (node*)malloc(sizeof(node));
	cout << "Enter Data for your current node\n\n";
	cin >> newnode->data;

	newnode->left = NULL;
	newnode->right = NULL;
	cout << "Your data has been added\n";
	return newnode;
}


void CreateDlist(int n) {
	int i;
	node *newnode;
	node *temp;
	for (i = 0; i < n; i++) 
	{
		newnode = getnode();
		if (start == NULL) {
			start = newnode;
		}
		else {
			temp = start;
			while (temp->right != NULL) {
				temp = temp->right;
				
			}
			temp->right = newnode;
			newnode->left = temp;
		}
	}
}



void insert_beg() {
	node *newnode;
	newnode = getnode();
	if (start == NULL) {
		start = newnode;
	}
	else {
		newnode->right = start;
		start->left = newnode;
		start = newnode;
	}
}

void delete_end() {
	node *temp;
	if (start == NULL) {
		cout << "Your current list is empty\n\n";
	}
	else {
		temp = start;
		while (temp->right)
		{
			temp = temp->right;
		}
		temp->left->right = NULL; // double check if doesnt work
		free(temp);
		cout << "The node at the end has been deleted\n";
	}


}

int main() {

	int numnodes;
	

	cout << "Welcome to Double Linked List Maker, how many nodes would you like in your linked list?\n";
	cin >> numnodes;

	CreateDlist(numnodes);

	char answer;
	cout << "Would you like to (D)elete a node from the end or (I)nsert a node at the beginning of your list?\n Please enter either 'D' or 'I' \n";
	cin >> answer;

	if (answer != 'D' && answer != 'I' && answer!='d' && answer!='i') {
		cout << "Wrong value entered";
	}
	else if (answer == 'D' || answer == 'd') {
		delete_end();
}
	else if(answer == 'I' || answer =='i'){

		insert_beg();
	}




	return 0;
}