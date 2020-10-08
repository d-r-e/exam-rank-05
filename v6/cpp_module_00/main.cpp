#include "Warlock.hpp"

int main()
{
	Warlock *p = new Warlock("pointer", "The pointer");
	p->introduce();

	Warlock const c("Britney", "bitch");
	Warlock constancio("Constance", "the mistress");
	c.introduce();
	constancio.introduce();
	constancio.setTitle("the baddest bitch");
	constancio.introduce();
	delete p;
}
