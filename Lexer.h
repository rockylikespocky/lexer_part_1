//
//  Lexer.h
//  Header file for the Lexer Class.
//
//  Created by Nhat Nguyen on 9/23/16.
//  Copyright © 2016 Nhat Nguyen. All rights reserved.
//

#ifndef Lexer_h
#define Lexer_h

#include <string>
#include <fstream>

using namespace std;

class Lexer {
public:
    Lexer();
    // empty constructor for standard input
    
    Lexer(string);
    // constructor opens file taking string of file name

	void printOutput();

	void setTokenID();

	void resetFields();

    bool isComment(char c1, char c2);
    // if current character and next character are '/' and '/', return true

    bool isSpace(char);
    // if character is a space, returns true

	bool isUnpairedDelimiters(char c);
	// if character is an unpaired delimter, returns true

    bool isPunctuation(char);
    // if character is a separator, returns true
    
    bool isDelimeter(char);
    // if character is an operator, returns true

	bool isMultiOperator(char c1, char c2);
    
    bool isKeyword(string);
    // if string is a keyword, returns true
    
    bool atEndOfFile();
    // if at end of file, returns true
    
    void closeFile();
    // close file

	void endingProcess();
	// ending print and close file
    
private:
    ifstream inFile; // input stream
    
    int idNumber; // token ID number
    
    int lineCount = 1; // current line count in file
    string line; // string line read from input
    string token; // current string token
	string tempstr;
    string type;
};

#endif /* Lexer_h */