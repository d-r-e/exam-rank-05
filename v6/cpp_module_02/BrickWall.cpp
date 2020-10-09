#include "BrickWall.hpp"

BrickWall::BrickWall():ATarget("Brickwall Practice") {}

BrickWall::~BrickWall(){}

ATarget *BrickWall::clone()const{
	return (new BrickWall(*this));
}
