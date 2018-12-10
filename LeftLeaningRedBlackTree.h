#include<iostream>
#include"RedBlackNode.h"

// '//?' == Is function needed?

template<typename ItemType>
class LeftLeaningRedBlackTree
{
private:
	RedBlackNode<ItemType>* mroot;

protected:

public:
//Constructors and Deconstructors
	LeftLeaningRedBlackTree() : mroot(NULL) { }
	LeftLeaningRedBlackTree(RedBlackNode<ItemType>& root);
	LeftLeaningRedBlackTree(const LeftLeaningRedBlackTree<ItemType>& src_tree);
	~LeftLeaningRedBlackTree() {/*blank for now*/}
//Getters abd Element Access
	bool isEmpty() const { return mroot == NULL; }
	int getHeight() const;
//?	RedBlackNode& getEntry(int index);
//?	ItemType getItem{int index;
//Modifiers
	ItemType add(const ItemType& value);
	ItemType remove(const ItemType& target);
	void clear();
	
};
