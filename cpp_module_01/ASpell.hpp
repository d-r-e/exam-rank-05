#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <iostream>
# include <string>
# include "ATarget.hpp"
class ATarget;
class ASpell
{
private:
	std::string name;
	std::string effects;
public:
	ASpell();
	ASpell(const std::string &name, const std::string &eff);
	ASpell(const ASpell &rhs);
	virtual ~ASpell();

	ASpell &operator=(const ASpell &rhs);

	const std::string &getName() const;
	const std::string &getEffects()const;

	void launch(ATarget const &target) const;

	virtual ASpell *clone(void) const = 0;

};

# endif