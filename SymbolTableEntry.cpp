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


class SymbolTableEntry{

public:             // public class variables (struct members)

    char symbol[ SYMBOL_LENGTH ]; // Variable identifier
    int type;       // The type of the variable: one of INT, CHAR, or BST
    int offset;     // Start address of variable in physical memory given as offset
    int noBytes;    // Size in bytes used to store variable in physical memory


    SymbolTableEntry()  // class constructor
    {

    }
};