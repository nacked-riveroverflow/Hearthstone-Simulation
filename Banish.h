#ifndef __BANISH_H__
#define __BANISH_H__

#include "Card.h"
#include "Ability.h"
#include "Spell.h"

class Banish: public Spell {
public:
    Banish();
    ~Banish();
    bool play(unique_ptr<Player> &this_player, unique_ptr<Player> &other, int i, istream &in, int current_player) override;
    string get_ability_type() override;
    bool execute_trigger(unique_ptr<Player> &triggered_player, int triggered_minion, unique_ptr<Player> &target_player,
                         int target_minion, unique_ptr<Player> &player_1, unique_ptr<Player> &player_2) override;
};

#endif
