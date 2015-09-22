#pragma once
class Graph
{


public:
	Graph();
	~Graph();
	Agent* agents;
	Node* nodes;
	//static vector<int> pat;
	//std::list<Agent*> agents;
	//std::list<Node*> nodes;

	void Graph::showPattern();
	void Graph::checkPattern();

	bool Graph::isCyclic();
	void Graph::setTestpattern();

	void Graph::showGraph();
	void Graph::debug();
	std::list<Agent*>::iterator Graph::getAgent(int);
	std::list<Node*>::iterator Graph::getNode(int);
	
};