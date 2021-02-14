#include "IniFile.h"
#include "IniParser.h"
#include <iostream>

namespace HawtLib {
	namespace HawtParsing {
		// ctor and dtor
		IniFile::IniFile(const std::string& file) {
			IniParser::Get().Read(this, file);
		}

		IniFile::~IniFile() {
			_CleanUp();
		}
		
		void IniFile::_CleanUp() {
			for (size_t i = 0; i < m_Sections.size(); ++i) {
				for (size_t j = 0; j < m_Sections[i]->keyValues.size(); ++j) {
					delete m_Sections[i]->keyValues[j];
				}
				delete m_Sections[i];
			}
		}

		
		std::vector<IniFile::Section*>& IniFile::GetSections() {
			return m_Sections;
		}
	}
}