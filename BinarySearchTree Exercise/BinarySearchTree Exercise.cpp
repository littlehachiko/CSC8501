// BinarySearchTree Exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct node {
	int value;
	struct node* left;
	struct node* right;
};

struct node* root = NULL;

// implement the functions described by these headers
void insert_integer(struct node** tree, int value);
void print_tree(struct node* tree);
void terminate_tree(struct node* tree);

void insert_integer(struct node** tree, int value) {
	
	
	if ( *tree != NULL ){
		if (value < (*tree)->value) {			//Compare the value of parent node and the child node
			if ((*tree)->left != NULL) {		//When the parent node has left child,  
				insert_integer(&((*tree)->left), value);
			}
			else {
				(*tree)->left = new node;
				(*tree)->left->value = value;
				(*tree)->left->left = NULL;		//Set the left child of the child node to null
				(*tree)->left->right = NULL;	//Set the right child of the child node to null
			}
		}
		else if (value > (*tree)->value) {
			if ((*tree)->right != NULL) {
			insert_integer(&((*tree)->right), value);
			}
			else {
				(*tree)->right = new node;
				(*tree)->right->value = value;
				(*tree)->right->left = NULL;	//Set the left child of the child node to null
				(*tree)->right->right = NULL;	//Set the right child of the child node to null
			}
		}
	}
	else {									//Set root node
		*tree = new node;
		(*tree)->value = value;
		(*tree)->left = NULL;
		(*tree)->right = NULL;
	}
}

void print_tree(struct node* tree) {
	if (root == NULL) {
		cout << endl << "The tree is empty!" << endl;
	}
	else 
	{	
		if (tree->left != NULL) {
			print_tree(tree->left);
		}

		cout << tree->value << " ";

		if (tree->right != NULL) {
			print_tree(tree->right);
		}
	}

}

void terminate_tree(struct node* tree) {
	if (tree != NULL) {
		terminate_tree(tree->left);
		terminate_tree(tree->right);
		delete tree;
	}
}

/**
*Main function
*/
int main()
{
	insert_integer(&root, 10);
	insert_integer(&root, 6);
	insert_integer(&root, 14);
	insert_integer(&root, 5);
	insert_integer(&root, 11);

	print_tree(root);

	terminate_tree(root);

	root = nullptr;
	print_tree(root);
	system("pause");
    return 0;
}

