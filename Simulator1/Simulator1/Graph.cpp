
#include "stdafx.h"



using namespace std;

Graph::Graph()
{
	// make instance Agent, Node
	agents = new Agent[K];

	for (int i = 0; i < N; i++)nodes.push_back(new Node(i));
	//for (int i = 0; i < K; i++) agents[i].setId(i);


	cout << "Graph‚ðì¬‚µ‚Ü‚µ‚½. (n = " << N
		<< ", k = " << K << ")" << endl;
	cout << "-------------------- initial state --------------------" << endl;
	Graph::showGraph();
	cout << "-------------------------------------------------------" << endl;
}



Graph::~Graph()
{

}

void Graph::showGraph()
{
	cout << "   ";
	for (int i = 0; i < N; i++){
		cout << "- o ";

	}
	cout << "- " << endl;


	for (int i = 0; i < K; i++){
		cout << "a" << setw(2) << i << "  ";

		for (int j = 0; j < agents[i].getLocation(); j++){
			cout << "    ";
		}
		cout << agents[i].getState() << endl;
	}

}

// for debug
void Graph::debug(){
	agents[2].setState(2);
	agents[3].setState(3);
	agents[1].setNextlocation(3);
	agents[1].move();
	Graph::showGraph();
	agents[3].setNextlocation(11);
	agents[3].move();
	Graph::showGraph();
	agents[3].setNextlocation(12);
	agents[3].move();
}

