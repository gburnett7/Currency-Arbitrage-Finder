#include "currency_graph.h"

using namespace std;

Currency_Graph::Currency_Graph(){

}

Currency_Graph::~Currency_Graph(){

}

shared_ptr<matrix> Currency_Graph::Init_Dist(){
    map<string, double>::iterator iter = curRates->begin();
    while (iter != curRates->end()){
        // Build matrix here //

        iter++;
    }
}