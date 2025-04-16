#include "BSTNode.hpp"

BSTNode::BSTNode(char const newCharacter, string const newMorseCode)
{
	this->leftPtr = nullptr;
	this->mCharacter = newCharacter;
	this->mMorseCode = newMorseCode;
	this->rightPtr = nullptr;
}

BSTNode::~BSTNode()
{
	//nothing needs to be here
}

void BSTNode::setCharacter(const char newCharacter)
{
	this->mCharacter = newCharacter;
}

void BSTNode::setMorseCode(const string newMorseCode)
{
	this->mMorseCode = newMorseCode;
}

void BSTNode::setLeftPtr(BSTNode* newLeftPtr)
{
	this->leftPtr = newLeftPtr;
}

void BSTNode::setRightPtr(BSTNode* newRightPtr)
{
	this->rightPtr = newRightPtr;
}

char BSTNode::getCharacter() const
{
	return this->mCharacter;
}

string BSTNode::getMorseCode() const
{
	return this->mMorseCode;
}

BSTNode* BSTNode::getLeftPtr() const
{
	return this->leftPtr;
}

BSTNode* BSTNode::getRightPtr() const
{
	return this->rightPtr;
}