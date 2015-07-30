// AgentSimulator.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//cout << "Input network size (n) :";
	//cin >> N;
	//cout << endl;
	//cout << "Input the number of agents (k) :";
	//cin >> K;
	//cout << endl;

	Algo* alg = new Algo();

	/*alg->agents[0].forDebug();*/

	alg->debug();
	alg->showGraph();

	//for each(Node* n in alg->nodes)
	//{
	//	cout << "node1 -> " << n->getId() << endl;
	//}

	return 0;
}