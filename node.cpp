#include "node.h"
#include <iostream>

Node::Node(std::vector<Node> inbound_nodes)
{
	std::cout<<"creating node object"<<std::endl;
	inbound_nodes=inbound_nodes;
}


int main(){

	std::vector<Node> inbound;

	Node n(inbound);

	return 1;
}