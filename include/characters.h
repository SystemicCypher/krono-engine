#include <string>
#include "statid.h"

#ifndef CHARACTERS_H
#define CHARACTERS_H


/*
This is the PC and NPC general class.
It defines how characters work in the game.
*/
class Character{
public:
    Character();
    Character(char* name);

    const int getStats(StatID stat);
    void setStats(StatID stat, int value);

    void levelup();


protected:
    struct Stats{

        /*
        The main stats
        */

        // Health
            int hp;
        // Magic points
            int mp;
        // Attack power
            int atk;
        // Defense power
            int def;
        // Magic resistance (magic defense)
            int mdef;
        // Accuracy
            int acc;
        // Evasion skill
            int evas;
        // Magic power/skill
            int mag;
        // Speed
            int spd;

        /*
        Additional stats and char info
        */
        // The character's level
        // It should go from 1 to 99 (99+ to 110 - star | 110 to 125 - double star)
            int level;
        // The character's experience 
            long exp;

        //  The rate at which the character levels up
        //  This is affected by different formulae
        //  This is not really needed for NPCs 
        //  that aren't in the party
        //  but impacts PC and party members
        //  PC should be able to choose which they want 

        //  1 - fast lvlup - scaling exp for level ups
        //      but doesn't get too difficult
        //  2 - medium lvlup - the standard level up speed
        //      you get strong, but not OP. Bosses should 
        //      still be a challenge.
        //  3 - slow lvlup - this one should take a long time
        //      but get larger boosts to stats. DIVINITY can be
        //      achieved with this. Nothing in the game should 
        //      be hard once levelled up to star (lvl 110)
            int levellingRate;
    };

private:
        char* name;
        
        Stats charData;        

};

#endif