#ifndef __NOVICEPYROMANCER_H__
#define __NOVICEPYROMANCER_H__
#include <iostream>
#include <string>
#include "Minion.h"
#include "Ability.h"
#include "Player.h"
#include "Card.h"

class NovicePyromancer: public Minion {
	std::unique_ptr<Ability> abl;

public:
    NovicePyromancer();
    ~NovicePyromancer();
    std::string get_ability_description() override;
    int get_activation_cost() override;
    bool use(unique_ptr<Player> &this_player, unique_ptr<Player> &other, int i, istream &in, int current_player) override;
	string get_ability_type() override;
};

#endif
