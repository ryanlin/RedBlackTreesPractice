//HW8 -Ruilin Lin

#include<iostream>
#include"LeftLeaningRedBlackTree.h"
//#include"RedBlackNode.h"

int main() {


	RedBlackNode<int> josh;
	josh.setItem(20);

	LeftLeaningRedBlackTree<int> toe;
	LeftLeaningRedBlackTree<int> tim(josh);

	std::cout << "tim: " << tim.getNumberOfNodes() << std::endl
		  << "toe: " << toe.getNumberOfNodes() << std::endl;

/*
	std::cout << "Hello World" << std::endl;

	RedBlackNode<int> jim(RED,BLACK);
	std::cout << jim.getLeftColor() << std::endl;	

	RedBlackNode<int> jose(jim);
	std::cout << jose.getRightColor() << std::endl;
	jose.setItem(12);
	std::cout << jose.getItem() << std::endl;


	RedBlackNode<int> john;
	john.setItem(15);
	john.setLeftChildPtr(&jose);
	std::cout << john.getItem() << " \t John's Child: " << jose.getItem() << std::endl;
*/


	return 0;
}
