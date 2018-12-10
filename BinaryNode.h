#ifndef BINARY_NODE_
#define BINARY_NODE_

#include<iostream>
//#include<memory>

template<typename ItemType>
class BinaryNode {
public:
	BinaryNode(): leftChildPtr(NULL), rightChildPtr(NULL) { }
	BinaryNode(const ItemType & anItem): item(anItem), leftChildPtr(NULL),
										  rightChildPtr(NULL) { }
	BinaryNode(const ItemType & anItem, 
			   BinaryNode* newLeft, 
			   BinaryNode* newRight): item(anItem), leftChildPtr(newLeft),
										  rightChildPtr(newRight) { }
	~BinaryNode() {/*nothing here*/ }

	bool isLeaf() const;

	ItemType getItem() const;
	BinaryNode* getLeftChildPtr() const;
	BinaryNode* getRightChildPtr() const;

	void setItem(const ItemType& newItem);
	void setLeftChildPtr(BinaryNode* newLeft);
	void setRightChildPtr(BinaryNode* newRight);
private:
	ItemType item;
	BinaryNode* leftChildPtr;
	BinaryNode* rightChildPtr;
};



template<typename ItemType>
bool BinaryNode<ItemType>::isLeaf() const
{
	return !(leftChildPtr || rightChildPtr);
}


template<typename ItemType>
ItemType BinaryNode<ItemType>::getItem() const
{
	return item;
}

template<typename ItemType>
BinaryNode<ItemType>* BinaryNode<ItemType>::getLeftChildPtr() const
{
	return leftChildPtr;
}

template<typename ItemType>
BinaryNode<ItemType>* BinaryNode<ItemType>::getRightChildPtr() const
{
	return rightChildPtr;
}


template<typename ItemType>
void BinaryNode<ItemType>::setItem(const ItemType& newItem)
{
	item = newItem;
}

template<typename ItemType>
void BinaryNode<ItemType>::setLeftChildPtr(BinaryNode* newLeft)
{
	leftChildPtr = newLeft;
}

template<typename ItemType>
void BinaryNode<ItemType>::setRightChildPtr(BinaryNode* newRight)
{
	rightChildPtr = newRight;
}

#endif //