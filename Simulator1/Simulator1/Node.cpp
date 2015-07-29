#include "stdafx.h"
#include "Node.h"

Node::Node()
{
	token = false;
}

Node::Node(int i)
{
	token = false;
	id = i;
}


Node::~Node()
{
}

void Node::setId(int i)
{
	id = i;
}

int Node::getId()
{
	return this->id;
}