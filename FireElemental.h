#ifndef __FIREELEMENTAL_H__
#define __FIREELEMENTAL_H__
#include <iostream>
#include <string>
#include <memory>
#include "Minion.h"

class FireElemental: public Minion {
	std::unique_ptr<Ability> abl;

public:
    FireElemental();
    virtual ~FireElemental();
    std::string get_ability_description() override;
    bool play(unique_ptr<Player> &this_player, unique_ptr<Player> &other, int i, istream &in, int current_player) override;
    bool use(unique_ptr<Player> &this_player, unique_ptr<Player> &other, int i, istream &in, int current_player) override;
	string get_ability_type() override;
	virtual bool execute_trigger(unique_ptr<Player> &triggered_player, int triggered_minion, unique_ptr<Player> &target_player,
                                    int target_minion, unique_ptr<Player> &player_1, unique_ptr<Player> &player_2) override;
};

#endif

