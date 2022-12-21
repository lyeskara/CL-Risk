#pragma once
#include <iostream>
using std::cout;
using std::ostream;
using std::string;
#include <vector>
using std::vector;

class Player;

class Territory
{
private:
    Player *owner;
    string *name;
    string *continent;
    int *army_units;
    vector<Territory *> neighbours;

public:
    Territory();
    Territory(string name, string continent);
    Territory(const Territory &obj);
    Territory& operator=(const Territory &t);
    friend ostream& operator<<(ostream &output, const Territory& territory);
    ~Territory();
    string getName();
    void setName(string name);
    string getContinent();
    void setContinent(string continent);
    vector<Territory *> getNeighbours();
    bool visited;
};
