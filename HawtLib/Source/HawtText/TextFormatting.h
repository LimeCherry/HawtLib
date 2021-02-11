#pragma once

namespace std { 
	template <class _Ty, class _Alloc = allocator<_Ty>> class vector;
	using string = basic_string<char, char_traits<char>, allocator<char>>;
}

std::string CenterText(const std::string& inStr, size_t space = 120);
std::string ToLower(const std::string& inStr);
char ToLower(char inC);
std::string ToUpper(const std::string& inStr);
char ToUpper(char inC);
std::string Title(const std::string& inStr);
std::vector<std::string> SplitString(const std::string& inStr, char delim = ' ');