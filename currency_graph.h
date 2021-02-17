#include <string>
#include <memory>
#include <vector>
#include <map>

using namespace std;

typedef vector<vector<double>> matrix;

class Currency_Graph {
private:
    shared_ptr<map<string, double>> curRates;

    shared_ptr<matrix> Init_Dist();

    shared_ptr<double> Floyd_Warshell(shared_ptr<double> dist);

public:
    Currency_Graph();

    ~Currency_Graph();

    bool Add_Cur(string name, double weight);

    bool Remove_Cur(string name);

    bool Import_Cur_File(string filePath);

    bool Arbitrage_Exists();

    vector<vector<string>> All_Arbitrages();

    vector<string> Shortest_Arbitrage();
};