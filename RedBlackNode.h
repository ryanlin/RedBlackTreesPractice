#include<iostream>
#include"BinaryNode.h"

enum Color {RED, BLACK};

template<typename ItemType>
class RedBlackNode : public BinaryNode<ItemType>
{
private:
	Color leftColor;
	Color rightColor;
public:
//Constructors
	RedBlackNode() : leftColor(BLACK), rightColor(BLACK) { }
	RedBlackNode(const Color leftValue = BLACK, const Color rightValue = BLACK) : leftColor(leftValue), rightColor(rightValue)  { }
	RedBlackNode(RedBlackNode& original) : leftColor(original.getLeftColor()), rightColor(original.getRightColor()) { }
//Getters
	Color getLeftColor() { return leftColor; }
	Color getRightColor() { return rightColor; }
//Setters
	Color setLeftColor(Color value) { leftColor = value; }
	Color setRightColor(Color value) { rightColor = value; }
};
