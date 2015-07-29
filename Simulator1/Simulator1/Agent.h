#pragma once
class Agent
{
private:
	int location;
	int id;
	int nextloc;
	int ndash;
	int state;
	int goal;
	bool token;
	std::list<int> pattern;

public:


	//function
	void Agent::run();
	void Agent::move();
	void Agent::checkPat(std::list<int>);
	void Agent::halfPat();
	void Agent::lexSort();
	void Agent::shareTheOthers();
	void Agent::setId(int);
	int Agent::getLocation();
	int Agent::getState();
	void setNextlocation(int);
	void setState(int);


	//for debug
	void Agent::forDebug();
	void Agent::testLexsort(std::list<int>);
	void Agent::showList(std::list<int> &ls);


	//cons decs
	Agent();
	~Agent();
};

