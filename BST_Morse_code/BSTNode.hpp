#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <fstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;


class BSTNode
{
public:
	//constructor
	BSTNode(const char newCharacter = '\0', const string newMorseCode = "");

	//destructor
	~BSTNode();

	//setters
	void setCharacter(const char newCharacter);
	void setMorseCode(const string newMorseCode);
	void setLeftPtr(BSTNode* newLeftPtr);
	void setRightPtr(BSTNode* newRightPtr);

	//getters
	char getCharacter() const;
	string getMorseCode() const;
	BSTNode* getLeftPtr() const;
	BSTNode* getRightPtr() const;

private:

	char mCharacter;
	string mMorseCode;
	BSTNode* leftPtr;
	BSTNode* rightPtr;
};