#pragma once
#include <string>
#include <vector>
#include <unordered_set>
#include <sstream>
#include <iostream>

using namespace std;

class TransportLine {
private:
	string name;
	unordered_set<string>lines;
	char type;
	int initialEdgeId;
	int finalEdgeId;
	bool bidirectional;
public:
	TransportLine(int initialEdgeID,int finalEdgeID, string name, string bidirectional);
	friend class Edge;
	bool operator==(const TransportLine& b) const;
	void addLines(string line);
	void setType(string type);
	string toString() const;
	int getInitialEdgeId() const;
	int getFinalEdgeId() const;
};

