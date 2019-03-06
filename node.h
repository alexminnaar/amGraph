#include <iostream>
#include <vector>

#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node(std::vector<Node> inbound_nodes);

private:
	std::vector<Node> inbound_nodes;
	std::vector<Node> outbound_nodes;
};

#endif