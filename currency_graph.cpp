#include "currency_graph.h"

using namespace std;

Currency_Graph::Currency_Graph(){
    curRates = shared_ptr<map<string, double>>(NULL);
    distance = shared_ptr<Matrix>(NULL);
    distUpToDate = 0;
}

Currency_Graph::~Currency_Graph(){

}

shared_ptr<Matrix> Currency_Graph::Init_Dist(){
    map<string, double>::iterator iter = curRates->begin();
    while (iter != curRates->end()){
        // Build matrix here //

        iter++;
    }
}

bool Currency_Graph::Add_Cur(string name, double weight){
    if(curRates->find(name) == curRates->end()){
        curRates->insert({name, weight});
        return 1;
    }

    return 0;
}

bool Currency_Graph::Remove_Cur(string name){
    return curRates->erase(name);
}