#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}
TargetGenerator::~TargetGenerator()
{
	_map.clear();
}
void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		std::map<std::string, ATarget *>::iterator it = _map.find(target->getType());
		if (it == _map.end())
			_map[target->getType()] = target->clone();
	}
}
void TargetGenerator::forgetTargetType(std::string const &targetType)
{
	std::map<std::string, ATarget *>::iterator it = _map.find(targetType);
	if (it != _map.end())
	{
		delete it->second;
		_map.erase(targetType);
	}
}
ATarget* TargetGenerator::createTarget(std::string const &targetType)
{
	std::map<std::string, ATarget *>::iterator it = _map.find(targetType);
	if (it != _map.end())
		return (_map[targetType]->clone());
	return (NULL);
}