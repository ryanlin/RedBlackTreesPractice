//HW8 -Ruilin Lin

#include<iostream>
//#include:"RedBlackTree.h"
#include"RedBlackNode.h"

int main() {

	std::cout << "Hello World" << std::endl;

	RedBlackNode<int> jim(RED,BLACK);
	std::cout << jim.getLeftColor() << std::endl;	

	RedBlackNode<int> jose(jim);
	std::cout << jose.getRightColor() << std::endl;
	jose.setItem(12);
	std::cout << jose.getItem() << std::endl;

	return 0;
}
