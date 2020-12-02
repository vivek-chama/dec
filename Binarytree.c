// Used the following data 
char *inputData[12] = {
        { "ugqwx"},
        { "exjgc"},
        { "nbjtm"},
        { "qumtg"},
        { "itwba"},
        { "yawdf"},
        { "klook"},
        { "tpjce"},
        { "xgioh"},
        { "cnubn"},
        { "yfdha"},
        { "dhumi"}
};

// The correct sorted order using a binary tree is:
//      cnubn
//      dhumi
//      exjgc
//      itwba
//      klook
//      nbjtm
//      qumtg
//      tpjce
//      ugqwx
//      xgioh
//      yawdf
//      yfdha



// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

// PROG8130 assignment #2 skeleton
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

// structure defining a binary tree node.  Lower sorted values will go the the left, higher to the right.
struct nodeData {
	char name[30];				// character string of the data being stored in the node
	struct nodeData *left;		// pointer to the next node in the tree that is less than current node OR NULL if empty
	struct nodeData *right;		// pointer to the next node in the tree that is greater than current node OR NULL if empty
};


// data to be stored in tree.  In this case there is just a character string but this could have contained more

// replace inputData used for test put it in here and is created from Prog8130AssignDataCreator.exe 
char *inputData[12];

// FUNCTION      : addToBinaryTree
//
// DESCRIPTION   :
//   This function will store the data in newNode into a binary tree according to alphabetical order
//
// PARAMETERS    :
//   newString - the string that is to be stored in the binary tree in alphabetica order
//
// RETURNS       :
//   Nothing
void addToBinaryTree(char *newString) {
	// add code to put items into binary tree in alphabetical order here
	// consider using strcmp library function to decide if a name is greater or less than

}

// FUNCTION      : printBinaryTree
//
// DESCRIPTION   :
//   This function will print the entire binary tree out.  You can choose to print
//   it using recursion but more marks will be awarded if you do it non recursively.
//
// PARAMETERS    :
//   None
//
// RETURNS       :
//   Nothing
void printBinaryTree(void) {
	// add code to print data in order starting at the "head" pointer

}

struct nodeData *head = NULL;	// head of the binary tree

void main() {
	int i;

	// put all the data into the binary tree
	for (i = 0; i < 12; i++)
		addToBinaryTree(inputData[i]);

	// print the entire tree.  It should come out in alphabetical order because of the way it was stored in the tree
	printBinaryTree();
}
