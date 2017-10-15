//
// getSeparation.cpp for  in /home/kopiz/Workplace/MATHS/302separation/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Mon Oct  9 16:12:35 2017 Tom Jeammet
// Last update Sun Oct 15 20:32:06 2017 Tom Jeammet
//

#include "main.hpp"

void    getSeparation(std::vector<std::vector<std::string> > links, std::vector<std::string> names, std::string p1, std::string p2)
{
  std::vector<int>			checked;
  std::vector<int>			founded;
  int                                   sep;
  int                                   id;

  sep = - 1;
  if (p1.compare(p2) != 0)
    {
      id = getNameId(names, p1);
      checked.push_back(id);
      searchHisFriend(links, names, &checked, &founded, id, p2, sep);
      if (founded.size() == 0)
	std::cout << "degree of separation between " << p1 << " and " << p2 << ":\t" << - 1 << std::endl;
      else
	{
	  sep = getMinSep(founded);
	  std::cout << "degree of separation between " << p1 << " and " << p2 << ":\t" << sep << std::endl;
	}
    }
  else
    std::cout << "degree of separation between " << p1 << " and " << p2 << ":\t" << 0 << std::endl;
}
