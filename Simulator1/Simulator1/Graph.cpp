
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

// TODO Fix this function.
void Graph::showPattern(){

	int c = 0;
	while (1){
		if (nodes[c].isToken()) break;
		c++;
	}
	int tmp = c;
	c++;
	int dis = 1;
	while (c <= N + tmp){
		if (c >= N){
			if (nodes[c - N].isToken()){
				pat.push_back((dis));
				dis = 1;
			}else dis++;
		}else{
			if (nodes[c].isToken()){
				pat.push_back(dis);
				dis = 1;
			}
			else dis++;
		}

		c++;

	}
	for (int i = 0; i < pat.size();i++) {
		cout << pat[i] << ", ";
	}
	cout << endl;


}


// TODO fix this function 
// now only checking "two-cyclic" is available 
bool Graph::isCyclic(){
	vector<int>	pat = { 1, 2, 3, 4, 1, 2, 3, 4 };
	for (int i = 0; i < pat.size(); i++){
		cout << pat[i] << " ";
	}
	vector<int> tmp;
	int mid = pat.size() / 2;
	
	// copy tmp <- pat(the last half)
	for (int i = mid; i < pat.size(); i++){
		tmp.push_back(pat[i]);
	}
	//erace the last half of pat
	for (int i = 0; i < mid; i++){
		pat.pop_back();
	}

	//tmp:the last half  pat:the first half
	
	if (pat == tmp) return true;
	return false;
}


//for debug
void Graph::setTestpattern(){
	
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