//
// parseFile.cpp for  in /home/kopiz/Workplace/MATHS/302separation/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Mon Oct  9 15:13:35 2017 Tom Jeammet
// Last update Mon Oct  9 15:40:39 2017 Tom Jeammet
//

#include "main.hpp"

std::vector<std::string>			parseFile(const char *file)
{
  std::vector<std::string>::iterator		it;
  std::vector<std::string>			lines;
  std::vector<std::string>			final;
  std::ifstream					ifs;
  std::string					tmp;
  std::string					n1;
  std::string					n2;
  std::size_t					found;

  ifs.open(file);
  while (std::getline(ifs, tmp))
    lines.push_back(tmp);
  for (it = lines.begin(); it != lines.end(); it++)
    {
      tmp = *it;
      if ((found = tmp.find(" is friends with ")) != std::string::npos)
	{
	  n1 = tmp.substr(0, found);
	  n2 = tmp.substr(found + 17, tmp.size());
	  if (n1.size() != 0 && n2.size() != 0)
	    final.push_back(tmp);
	}
    }
  return (final);
}
