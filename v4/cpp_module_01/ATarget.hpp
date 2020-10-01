#ifndef ATARGET_HPP
# define ATARGET_HPP
# include <iostream>
# include <string>
# include "ASpell.hpp"

class ASpell;
class ATarget
{
private:
	std::string type;
public:
	ATarget();
	ATarget(const std::string &type);
	ATarget(const ATarget &rhs);
	virtual ~ATarget();

	ATarget & operator=(const ATarget &rhs);

	const std::string &getType()const;

	void getHitBySpell(ASpell const &spell) const;

	virtual ATarget *clone(void) const = 0;
};

#endif