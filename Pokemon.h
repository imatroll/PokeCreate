#ifndef POKEMON_H_
#define POKEMON_H_

//define the types

enum Types {
  fire,
  water,
  grass,
  normal,
  dragon,
  fairy,
  psychic,
  steel,
  poison,
  ice,
  elec,
  bug,
  fight,
  dark,
  rock,
  ground,
  flying,
  ghost
};

//for status conditions

enum Status {
  POISON,BAD_POISON,PARALYZED,SLEEP,CONFUSED,NONE
};

//define the catagories for moves

enum Move_Catags{
  SPECIAL,PHYSICAL,STATUS
}

//make a structure to define a move

struct Move{
  enum Types t1;
  //because of moves like Flying Press
  enum Types t2;
  //char array for the description
  char[] desc;
  enum Status s;
  int power;
  int acc;
  enum Move_Catags mc;
};
//create a structure for the Pokemon
struct Pokemon {
  //type(s) of the Pokemon
  enum Types t1;
  enum Types t2;
  //integers for stats
  int attk;
  int def;
  int spattk;
  int spdef;
  int speed;
  //shorts for IVs
  short attkiv;
  short defiv;
  short spattkiv;
  short spdefiv;
  short speediv;
  //not sure how to define level-up moves.
};

#endif /*POKEMON_H_*/
