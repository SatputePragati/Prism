#pragma once
#include<iostream>

namespace Prism {
	class STLReader
	{
	private:
		char* m_fileName;
		char* m_fileData;
	public:
		STLReader();
		STLReader(char* fileName);
		void ReadFile(char* fileName);
	};
}
