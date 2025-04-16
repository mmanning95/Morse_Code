#pragma once
#include "BSTNode.hpp"

using std::fstream;


class BST
{
public:
	//constructor
	//reads from file(by line) and creates BST tree
	BST(BSTNode* newmpRoot = nullptr);

	//destructor
	~BST();

	//setter (no setter needed for fstream...constructor does it)
	void setRoot(BSTNode* const newRoot);
	
	//getter
	BSTNode* getRoot() const;

	//insert() - returns true if insertion is done
	//public
	bool insert(const char newChar, char* newString);									
	void print();
	string search(char searchChar);

	void destroyTree();
	
private:
	void destroyTree(BSTNode* pTree);

	//insert()
	//private
	//goes through tree using recursion
	bool insert(BSTNode* pTree, const char newC, char* const newStr);					//*& is referance for pointer (no need to use maybe)
	void print(BSTNode* pTree);
	string search(BSTNode* pTree, char searchChar);

	fstream morseTable;
	BSTNode* mpRoot;
};
