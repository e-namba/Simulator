#pragma once
class Graph
{

public:
	Graph();
	~Graph();
	Agent* agents;
	Node* nodes;
	//std::list<Agent*> agents;
	//std::list<Node*> nodes;



	void Graph::showGraph();
	void Graph::debug();
	std::list<Agent*>::iterator Graph::getAgent(int);
	std::list<Node*>::iterator Graph::getNode(int);

};