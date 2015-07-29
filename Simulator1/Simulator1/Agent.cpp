#include "stdafx.h"
#include "Agent.h"

using namespace std;


//constructor
Agent::Agent()
{
	location = 0;
	state = 0;
	goal = -1;
	ndash = 0;
	token = true;
}



Agent::~Agent()
{

}



void Agent::run()
{

}
void Agent::move()
{
	location = nextloc;
}
void Agent::checkPat(list<int> sub)
{
}
void Agent::halfPat()
{
}
void Agent::lexSort()
{
}
void Agent::shareTheOthers()
{
}

void Agent::setNextlocation(int loc){
	if (loc == N){
		nextloc = 0;
	}
	else{
		nextloc = loc;
	}
}

void Agent::setId(int i)
{
	id = i;
}

int Agent::getLocation(){
	return location;
}

int Agent::getState(){
	return state;
}

void Agent::setState(int st){
	state = st;
}


void Agent::forDebug(){

	//list initialize
	pattern = { 1, 1, 3, 4, 5, 6, 1, 1 };

	//out all
	list<int>::iterator it = pattern.begin();
	while (it != pattern.end()){
		cout << *it << ", ";
		it++;
	}
	cout << endl;
	cout << "start lexicographical sorting" << endl;

	testLexsort(pattern);

}

void Agent::testLexsort(list<int> pat){
	int temp;
	int ans;
	int n = pat.size();
	list<int>::iterator itr = pat.begin();

	list<list<int>> tmp; //ï€ë∂óp

	list<int> storePara; //store parameter 
	list<int> nakami; //íÜêg
	while (itr != pat.end()){
		storePara.push_back(*itr);
		nakami.push_back(*itr);
		++itr;
	}





	//tmp.add(nakami);
	//for (int i = 1; i<n; i++){

	//	ArrayList<Integer> kouho = new ArrayList<Integer>(tmp.get(i - 1));
	//	temp = kouho.get(0);
	//	kouho.remove(0);
	//	kouho.add(temp);
	//	tmp.add(kouho);


	//}


	//int k = n;
	//int j = 0;
	//int maxint = SumofList(list);

	//while (k != 1){
	//	temp = maxint;
	//	for (int i = 0; i<tmp.size(); i++){ //compute min
	//		if (temp >= tmp.get(i).get(j))
	//			temp = tmp.get(i).get(j);
	//	}

	//	for (int i = 0; i<tmp.size(); i++){ //remove without min
	//		if (tmp.get(i).get(j) != temp){
	//			tmp.remove(i);
	//			i--;
	//			k--;
	//		}
	//	}
	//	j++;
	//	if (j == n)break;
	//	//System.out.println("b");
	//}
	////  System.out.println("a");
	//ans = 0;
	//for (int i = 0; i<n; i++){

	//	if (compList(storePara, tmp.get(0))){
	//		for (j = 0; j<i; j++){
	//			ans += list.get(j);
	//		}
	//		return ans;
	//	}
	//	else{
	//		temp = storePara.get(0);
	//		storePara.remove(0);
	//		storePara.add(temp);
	//	}
	//}

	//return -1;

}



void Agent::showList(list<int> &show){
	list<int>::iterator itr = show.begin();
	while (itr != show.end()){
		cout << *itr << ", ";
		++itr;
	}
	cout << endl;
}