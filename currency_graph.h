#include <string>
#include <memory>
#include <vector>
#include <map>
#include "matrix.h"

using namespace std;

class Currency_Graph {
private:
    shared_ptr<map<string, double>> curRates;

    shared_ptr<Matrix> distance;

    // True if distance reflects current state of curRates
    bool distUpToDate;

    shared_ptr<Matrix> Init_Dist();

    shared_ptr<double> Floyd_Warshell(shared_ptr<double> dist);

public:
    Currency_Graph();

    ~Currency_Graph();

    bool Add_Cur(string name, double weight);

    bool Remove_Cur(string name);

    // bool Print_Rates();

    // bool Import_Cur_File(string filePath);

    bool Arbitrage_Exists();

    vector<vector<string>> All_Arbitrages();

    vector<string> Shortest_Arbitrage();
};