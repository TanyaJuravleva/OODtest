#pragma once
#include "ISaveStrategy.h"
#include <fstream>

class CSaveInBinaryFile : public ISaveStrategy
{
public:
	void SaveInFile(std::vector<IShapeDecorator*>& arrayFigures) override
	{
		std::ofstream fileOut("figureBIN.txt", std::ios::binary);
		for (int i = 0; i < arrayFigures.size(); i++)
		{
			auto m = arrayFigures[i]->Clone();
			fileOut.write((char*)&m, sizeof(IShapeDecorator));
		}
		fileOut.close();
	}
private:

};