#pragma once
class Graph
{

public:
	Graph();
	~Graph();
	Agent* agents;
	std::list<Node*> nodes;

	void Graph::showGraph();
	void Graph::debug();

};