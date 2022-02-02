#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource * src = new MateriaSource(); // Création d'une source pour pouvoir créer de nouveaux Materias (Qui utilise l'interface IMateriaSource)

	src->learnMateria(new Ice()); // On learn le Ice materia pour pouvoir ensuite le créer.
	src->learnMateria(new Cure()); // Pareil pour le Cure

	std::cout << std::endl;

	ICharacter * me = new Character("me"); // Création d'un personnage (Qui utilise l'interface ICharacter)
	AMateria * tmp;

	tmp = src->createMateria("ice"); // Ici on utilise le ice learned et on le créer. Si on n'avait pas learn, on ne pourrait pas le créer.
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);


/* 	tmp = src->createMateria("ice");
	me->equip(tmp);	// Si on tente d'équiper plus de Materia que possible (4 max), l'addresse du materia crée ne sera pas stocké dans le Character.
	delete tmp; // Il faut donc la free manuellement.
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp; */

	//me->unequip(1); // Si on unequip un materia, il faut d'abord s'assurer d'avoir bien gardé son addresse, sinon au aura un leak.

	std::cout << std::endl;

	ICharacter * bob = new Character("bob"); // Ici on créer un nouveau Character Bob, qui sera la cible de nos Materia.s
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	return 0;
}
