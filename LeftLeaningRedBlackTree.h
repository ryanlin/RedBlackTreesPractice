#include<iostream>
#include"RedBlackNode.h"

// '//?' == Is function needed?

template<typename ItemType>
class LeftLeaningRedBlackTree
{
private:
	RedBlackNode<ItemType>* mroot;

protected:
	int getNumberOfNodesHelper(BinaryNode<ItemType>* root) const;
public:
//Constructors and Deconstructors
	LeftLeaningRedBlackTree() : mroot(NULL) { }
	LeftLeaningRedBlackTree(RedBlackNode<ItemType>& root);
	LeftLeaningRedBlackTree(const LeftLeaningRedBlackTree<ItemType>& src_tree);
	~LeftLeaningRedBlackTree();
//Getters abd Element Access
	bool isEmpty() const; 
	int getNumberOfNodes() const;
  RedBlackNode& getRootAddress() const;
  ItemType getRootData() const;
  
  void RotateLeft();
  void RotateRight();
  
//?	RedBlackNode& getEntry(int index);
//?	ItemType getItem{int index;
//Modifiers
	ItemType add(const ItemType& value);
	ItemType remove(const ItemType& target);
	void clear();
	
};

//Constructors and Deconstructors
template<typename ItemType>
LeftLeaningRedBlackTree<ItemType>::LeftLeaningRedBlackTree(RedBlackNode<ItemType>& root)
	: mroot(new RedBlackNode<ItemType>(root) )
{
//blank
}
template<typename ItemType>
LeftLeaningRedBlackTree<ItemType>::LeftLeaningRedBlackTree(const LeftLeaningRedBlackTree<ItemType>& src_tree)
{

}
template<typename ItemType>
LeftLeaningRedBlackTree<ItemType>::~LeftLeaningRedBlackTree()
{
	/*blank for now*/
}

//

template<typename ItemType>
bool LeftLeaningRedBlackTree<ItemType>::isEmpty() const
{
	return mroot == NULL;
}
template<typename ItemType>
int LeftLeaningRedBlackTree<ItemType>::getNumberOfNodes() const
{
	return getNumberOfNodesHelper(mroot);
}


//Protected and Helper Functions
template<typename ItemType>
int LeftLeaningRedBlackTree<ItemType>::getNumberOfNodesHelper(BinaryNode<ItemType>* root) const
{
	if( root == NULL )
	{
		return 0;
	}
	else if( root->isLeaf() )
	{
		return 1;
	}
	else
	{
		getNumberOfNodesHelper(root->getLeftChildPtr()) + getNumberOfNodesHelper(root->getRightChildPtr()) + 1;
	}
}

