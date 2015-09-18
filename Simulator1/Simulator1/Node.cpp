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
	this->id = i;
}

int Node::getId()
{
	return this->id;
}

void Node::setToken(){
	this->token = true;
}

bool Node::isToken(){
	return this->token;
}