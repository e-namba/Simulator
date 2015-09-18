#pragma once
class Node
{
private:
	int id;
	bool token;

public:
	Node();
	Node(int);
	~Node();

	//function
	void Node::setId(int);
	int Node::getId();
	void Node::setToken();
	bool Node::isToken();
};

