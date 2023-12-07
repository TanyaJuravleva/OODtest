#pragma once
#include "IShapeDecorator.h"
#include <vector>

class ISaveStrategy
{
public:
	virtual void SaveInFile(std::vector<IShapeDecorator*>& arrayFigures) = 0;
};