#pragma once
#include "IRecoverTemplate.h"
#include "IShapeDecorator.h"
#include <fstream>

class CRecoverFromBin : public IRecoverTemplate
{
	void ReadFile() override
	{
		std::ifstream inp("figureBIN.txt", std::ios::binary);
		IShapeDecorator* shape;
		while (inp.read((char*)&shape, sizeof(IShapeDecorator)))
		{
			arr.push_back(shape);
		}
		inp.close();
	}
};