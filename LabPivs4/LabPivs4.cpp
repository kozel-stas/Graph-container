// LabPivs4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Graph.h"
#include "iostream"
#include "string"
#include <vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Graph<int> a;
	a.addNode(1);
	a.addNode(2);
	a.addNode(3);
	a.addNode(4);
	a.addArc(1, 3);
	a.addArc(1,2);
	a.getArc();
	Graph<int> b = a;
	//a.dellArc(1, 2);
	//a.dellNode(1);
	a.addArc(1, 4);
	a.addArc(1, 1);
	a.addArc(2, 3);
	//cout<<a.powerNode(1);
	//a.dellNode(1);
	Graph<int>::arc_iterator iter(a);
	//iter.next();
	//if (a<=b) cout << "njhgfdsa";
	a = b;
	//a.view();
	Graph<int>::arc_iterator_incident_vertex iter1(a, 1);
	//iter1.next();
	//iter1.next();
	cout<<iter1.get();
	system("pause");
    return 0;
}

