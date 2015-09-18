
#include "stdafx.h"
#include "time.h"
#include "vector"
#include "algorithm"


using namespace std;

Graph::Graph()
{
	// make instance Agent, Node
	nodes = new Node[N];
	agents = new Agent[K];
	//for (int i = 0; i < K; i++)agents.push_back(new Agent(i));
	//for (int i = 0; i < N; i++)nodes.push_back(new Node(i));

	vector<int> v;
	time_t  nowtime;
	time(&nowtime);
	srand((int)nowtime);
	
	for (int i = 0; i < N; i++){
		nodes[i].setId(i);
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());
	for (int i = 0; i < K; i++){
		agents[i].setId(i);
		agents[i].setLocation(v[i]);
		nodes[v[i]].setToken();
	}



	
	cout << "Graph が作成されました. (n = " << N
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


		//for (int j = 0; j < getAgent(i)->getLocation(); j++) cout << "    ";
	}

}

// for debug
void Graph::debug(){
	/*agents[2].setState(2);
	agents[3].setState(3);
	agents[1].setNextlocation(3);
	agents[1].move();
	Graph::showGraph();
	agents[3].setNextlocation(11);
	agents[3].move();
	Graph::showGraph();
	agents[3].setNextlocation(12);
	agents[3].move();*/
}

void Graph::showPattern(){
	int ans=-1;
	int loc = 0;
	int ctr = 0;
	vector<int> pat;
	while (ans < 0){
		if (nodes[loc].isToken()) ans = loc;
		loc++;
	}
	
	for (int i = 0; i < N; i++){
		if (loc + i >= N){
			loc = loc + i - N;
		}
		else{
			loc = loc + i;
		}

		if (!nodes[loc].isToken()){
			ctr++;
		}
		else{
			pat.push_back(ctr);
			ctr = 0;
		}
	}
	
	for (int i = 0; i < pat.size();i++) {
		cout << pat[i] << ", ";
	}
	cout << endl;

}



//std::list<Agent*>::iterator Graph::getAgent(int id){
//	std::list<Agent*>::iterator itr = agents.begin();
//	int i = 0;
//	while (i != id){
//		itr++;
//		i++;
//	}
//	return itr;
//}
//
//std::list<Node*>::iterator Graph::getNode(int id){
//	std::list<Node*>::iterator itr = nodes.begin();
//	int i = 0;
//	while (i != id){
//		itr++;
//		i++;
//	}
//	return itr;
//}