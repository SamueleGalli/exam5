#include "Warlock.hpp"
#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "ATarget.hpp"
#include "Fireball.hpp"
#include "SpellBook.hpp"
#include "BrickWall.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  std::cout << "testing\n\n\n";
  richard.launchSpell("Polymorph", *wall);
  std::cout << "testing\n\n\n";
  richard.launchSpell("Fireball", *wall);
}