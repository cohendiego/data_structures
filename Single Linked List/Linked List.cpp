#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>

using namespace std;


struct node {
	int data;
	struct node* next;

};

typedef struct node;
node *start = NULL;

struct node* getnode() {
	
	
	struct node* newnode = NULL;

	newnode= (node*) malloc(sizeof(struct node));

	cout << "Enter your data for the node \n";
	cin >> newnode->data;

	newnode->next = NULL;

	return newnode;
}

void CreateList(int n) {
	int i;
	node *newnode;
	node *temp;
	for (int i = 0; i < n; i++){
		newnode = getnode();
		if (start == NULL)
		{
			start = newnode;
		}
		else {
			temp = start;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newnode;

		}

	}

}

int countnode(struct node* start)
{
	if (start == NULL) {
		return 0;
	}
	else {
		return (1 + countnode(start->next));
	}
}

void delete_mid() {
	int ctr = 1, nodectr;
	int pos;
	node *temp, *prev;

	if (start == NULL) {
		cout << "Your list is currently empty\n\n";
	}
	else {
		cout << "Enter the position of node to delete\n";
		cin >> pos;
		nodectr = countnode(start);
		if (pos > nodectr) {
			cout << "Node does not exist.\n";
		}
		else if (pos > 1 && pos < nodectr) {
			temp = start;
			prev = start;
			while (ctr < pos) {
				prev = temp;
				temp = temp->next;
				ctr++;
			}
			prev->next = temp->next;
			free(temp);
			cout << "Node has been deleted.\n\n";
		}
		else {
			cout << "Invalid Position\n";
		}
	}
	}


void insert_mid() {
	node *newnode, *temp, *prev;
	int pos, nodectr, ctr = 1;
	newnode = getnode();
	cout << "Enter the position to insert your node\n";
	cin >> pos;

	nodectr = countnode(start);
	if (pos > 1 && pos < nodectr)
	{
		temp = start;
		prev = start;
		while (ctr < pos) {
			prev = temp;
			temp = temp->next;
			ctr++;
		}
		cout << "Your data has been inserted into the " << pos << " position\n";
	}
	else
	{
		cout << "The position is not in the middle ";
	}

}

int main() {

	int numnodes;

	cout << "Welcome to Linked lIst Maker, how many nodes would you like in your linked list(s)? \n\n";
	cin >> numnodes;

	CreateList(numnodes);

	char answer;
	cout << "Would you like to (D)elete or (I)nsert from the middle of your list. Enter D or I: \n"; //give user option to delete or inseert from the middle
	cin >> answer;

	if (answer != 'D' && answer != 'I' && answer != 'd' && answer !='i'){
		cout << "Wrong value entered";
	}
	else if (answer == 'D' || answer =='d') {

		delete_mid();
	}
	else if (answer == 'I' || answer=='i') {

		insert_mid();
	}

	



	return 0;
}