#include "node.h"
#include <iostream>


Node::Node(){
	std::cout<<"empty constructor"<<std::endl;
};

Node::Node(std::vector<Node> inbound_nodes)
{
	std::cout<<"constructor with one input"<<std::endl;
	this->inbound_nodes=inbound_nodes;

	for(std::vector<Node>::iterator it = this->inbound_nodes.begin(); it !=this->inbound_nodes.end();++it)
	{
		it->addOutboundNode(*this);
	}

};


void Node::addOutboundNode(Node n){
	 this -> outbound_nodes.push_back(n);
};


int main(){

	std::vector<Node> inbound;

	Node n(inbound);

	return 1;
}