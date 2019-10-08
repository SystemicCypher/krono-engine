enum CharacterClass{
    PHYSICAL,
    MAGICAL,
    COMBO
};


/*
Each enemy type will be associated
with an integer value so that rng
can determine what enemies randomly
show up. This is specific to any 
given area.
*/
enum EnemyType{
    SLIME = 0,
    DIRE_SLIME = 1,
    WOLF = 2
};