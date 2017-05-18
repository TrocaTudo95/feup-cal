#pragma once

#include "graph.hpp"

typedef pair<int, Street*> APR;

struct APR_Greater_Than {
	bool operator()(APR a, APR b) const {
		return a.first > b.first;
	}
};
vector<Street *> aproximado(const StreetCleaned &streets, const string &nameStreet);
int editDistance(string pattern, string text);