#include <string>
#include <memory>
#include <vector>
#include <map>

using namespace std;

struct node {
    string name;

    double rate;

    shared_ptr<edge_lst> edges;
};

struct edge {
    shared_ptr<node> from;

    shared_ptr<node> to;

    double weight;
};

typedef vector<shared_ptr<edge>> edge_lst;



class Currency_Graph {
private:
    shared_ptr<map<string, double>> curRates;
    
    shared_ptr<double> Rate_Matrix();

    shared_ptr<double> Floyd_Warshell(shared_ptr<double> rateMtx);

public:
    Currency_Graph();

    ~Currency_Graph();

    bool Add_Currency(string name, double weight);

    bool Remove_Currency(string name);

    bool Arbitrage_Exists();

    vector<vector<string>> All_Arbitrages();

    vector<string> Shortest_Arbitrage();
};