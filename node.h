#include <iostream>
#include <vector>

#ifndef NODE_H
#define NODE_H

//abstract Node class, forward function is pure virtual 
class Node
{

private:
	std::vector<Node> inbound_nodes;
	std::vector<Node> outbound_nodes;
	int value;

public:
	Node();
	Node(std::vector<Node> inbound_nodes);
	void addOutboundNode(Node n);
	//virtual void forward();

};

#endif