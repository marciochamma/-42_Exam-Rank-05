

#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "TargetGenerator.hpp"

// int main()
// {
//   Warlock const richard("Richard", "Mistress of Magma");
//   richard.introduce();
//   std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

//   Warlock* jack = new Warlock("Jack", "the Long");
//   jack->introduce();
//   jack->setTitle("the Mighty");
//   jack->introduce();

//   delete jack;

//   return (0);
// }

// int main()
// {
//   Warlock richard("Richard", "the Titled");

//   Dummy bob;
//   BrickWall tom;
//   Fwoosh* fwoosh = new Fwoosh();
//   Fireball* fireball = new Fireball();
//   Polymorph* polymorph = new Polymorph();

//   richard.learnSpell(fwoosh);
//   richard.learnSpell(fireball);
//   richard.learnSpell(polymorph);

//   richard.launchSpell("Fwoosh", bob);
//   richard.launchSpell("Fireball", bob);
//   richard.launchSpell("Polymorph", bob);

//   richard.launchSpell("Fwoosh", tom);
//   richard.launchSpell("Fireball", tom);
//   richard.launchSpell("Polymorph", tom);

//   // richard.forgetSpell("Fwoosh");
//   richard.forgetSpell("Fireball");
//   richard.forgetSpell("Polymorph");

//   richard.launchSpell("Fwoosh", bob);
//   richard.launchSpell("Fireball", bob);
//   richard.launchSpell("Polymorph", bob);

//   richard.launchSpell("Fwoosh", tom);
//   richard.launchSpell("Fireball", tom);
//   richard.launchSpell("Polymorph", tom);

//   delete  fwoosh;
//   delete  fireball;
//   delete  polymorph;
// }

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
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);

  delete polymorph;
  delete fireball;
}