#pragma once

#include <vector>
#include "Order.h"
#include "Map.h"
#include "Cards.h"
#include <vector>
using std::vector;

class Player
{
private:
    OrdersList *orderList;
    Hand *hand;
    vector<Territory> *territories;

public:
    Player();

    Player(Player const &player);


    Player(OrdersList *orderList, Hand *hand, vector<Territory *> territories);

    Player(string name);

    virtual ~Player();

    vector<Territory *> toDefend();

    vector<Territory *> toAttack(const vector<Territory *> ALLTERRITORIES);

    void issueOrder(issue_order_types order_type, Deck *a_deck, int i, vector<Territory *> all_territories, int ID, string name, string source, string target, int num_of_units);

    OrdersList *getOrders() const;

    Hand *getHand() const;

    vector<Territory *> getTerritories() const;

    void setOrders(OrdersList *orders);

    void setHand(Hand *hand);

    void setTerritories(vector<Territory *> territories);

    void addTerritory(Territory *t);

    Player &operator=(const Player &);
    friend ostream &operator<<(ostream &out, const Player &player);

    string name;

    int *reinforcement_pool;

    void setName(string name);

    bool ownsTerritory(Territory *t);
};