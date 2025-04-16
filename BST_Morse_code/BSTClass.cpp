#include "BSTClass.hpp"

BST::BST(BSTNode* newmpRoot)
{
	this->morseTable.open("MorseCodeAlpha.txt");
	this->mpRoot = newmpRoot;
	char alpha = '\0', Code[100] = "";				//Code is my string(can't use string for getline)
	 
	if (morseTable.is_open())
	{
		while (!morseTable.eof())					//goes on untill file ends
		{
			morseTable >> alpha;					//first char is a character(pass into alpha)
			morseTable.getline(Code, 100);			//next is string // a single line has been read
			insert(alpha, Code);
		}
	}
	else{
		cout << "File not found!" << endl;			//if file not found
	}
	morseTable.close();
}

BST::~BST()
{
	destroyTree();
}

void BST::setRoot(BSTNode* const newRoot)
{
	this->mpRoot = newRoot;
}

BSTNode* BST::getRoot() const
{
	return this->mpRoot;
}

//public version
bool BST::insert(const char newChar, char* newString)					//not a string for now
{
	return insert(this->mpRoot, newChar, newString);					//go into private version
}

//public version
void BST::print()
{
	print(this->mpRoot);
}

//public version
string BST::search(char searchChar)
{
	return search(this->mpRoot, searchChar);
}

//public version
void BST::destroyTree()
{
	destroyTree(this->mpRoot);
}

//private version
void BST::destroyTree(BSTNode* pTree)
{
	if (pTree != nullptr)							//left,right, delete
	{
		destroyTree(pTree->getLeftPtr());
		destroyTree(pTree->getRightPtr());
		delete pTree;
	}
}


 
//private version
bool BST::insert(BSTNode* pTree, const char newChar, char* newString)
{
	bool success = false;
	if (pTree == nullptr)													//empty
	{
		this->mpRoot = new BSTNode(newChar, newString);
		success = true;
	}
	else if (pTree->getCharacter() > newChar)								//smaller
	{
		if(pTree->getLeftPtr() != nullptr)
		{
			insert(pTree->getLeftPtr(), newChar, newString);
		}
		else
		{
			pTree->setLeftPtr(new BSTNode(newChar, newString));
		}
		success = true;
	}
	else if (pTree->getCharacter() < newChar)								//bigger
	{
		if (pTree->getRightPtr() != nullptr)
		{
			insert(pTree->getRightPtr(), newChar, newString);
		}
		else
		{
			pTree->setRightPtr(new BSTNode(newChar, newString));
		}
		success = true;
	}
	else															//if this happens there's an error (no reason to see a dub)
	{
		cout << "A duplicate was found" <<  endl;
		cout << "Character: " << newChar << "\tCode: " << newString << endl;
	}
	return success;
}

void BST::print(BSTNode* pTree)
{
	if (this->mpRoot == nullptr)						
	{
		cout << "Empty tree" << endl;			//only if tree is empty
	}											//should never happen
	else if (pTree != nullptr)
	{
		print(pTree->getLeftPtr());
		cout << "Character: " << pTree->getCharacter() << "\tCode: " << pTree->getMorseCode() << endl;
		print(pTree->getRightPtr());
	}
}

string BST::search(BSTNode* pTree, char searchChar)
{
	string target;
	if (pTree == nullptr)									//end or beginning
	{
		cout << "Target not found!" << endl;
	}
	else
	{
		if (searchChar == '\n') //\n...whitespace...\t					
		{
			target = "\n";												
		}
		else if (searchChar == ' ')						//three spaces for new word
		{
			target = "   ";
		}
		else if (pTree->getCharacter() < searchChar)
		{
			if (pTree->getRightPtr()->getCharacter() == searchChar)
			{
				target = pTree->getRightPtr()->getMorseCode();
			}
			else
			{
				target = search(pTree->getRightPtr(), searchChar);
			}
		}
		else if (pTree->getCharacter() > searchChar)
		{
			if (pTree->getLeftPtr()->getCharacter() == searchChar)
			{
				target = pTree->getLeftPtr()->getMorseCode();
			}
			else
			{
				target = search(pTree->getLeftPtr(), searchChar);
			}
		}
		else
		{
			target = pTree->getMorseCode();
		}
		

	}
	return target;
}