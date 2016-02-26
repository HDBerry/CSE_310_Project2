//
// Created by Dustin Rosebery on 2/25/16.
//
#include <iostream>

using namespace std;

#define SYMBOL_LENGTH   20      // Maximum length of a variable name (identifier)
#define INT             0       // Integer type
#define CHAR            1       // Character string type
#define BST             2       // Binary search tree type
#define STRTERM         '\0'    // String termination character


class BstNode {

public:         // Public class variables (struct members)

    int key; // A node of a binary search tree ordered on this key value
    int left;  // Left child
    int right; // Right child


    BstNode()   // class constructor
    {

    }
};