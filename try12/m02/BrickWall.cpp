#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{
	//std::cout << "Hola" << std::endl;
}

BrickWall::~BrickWall()
{

}

ATarget *BrickWall::clone()const
{
	return (new BrickWall());
}
