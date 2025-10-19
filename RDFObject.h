#include <string>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

class RDFObject
{
    public:
    RDFObject();
    RDFObject(string fileName);

    private:
    string fileName;
    pair<string, vector<string>> rdf;
    string identifier, predicate, object;
    vector<vector<string, double>> vecotrInVector;
 
};