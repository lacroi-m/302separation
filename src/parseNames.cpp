//
// parseNames.cpp for  in /home/kopiz/Workplace/MATHS/302separation/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Tue Oct  3 09:32:28 2017 Tom Jeammet
// Last update Mon Oct  9 15:35:21 2017 Tom Jeammet
//

#include "main.hpp"

bool					is_a_double(std::vector<std::string> tab, std::string str, int i)
{
  i = i + 1;
  while (i < (int)tab.size())
    {
      if (str.compare(tab.at(i)) == 0)
	return (true);
      i = i + 1;
    }
  return (false);
}

std::vector<std::string>		delete_doubles(std::vector<std::string> tab)
{
  std::vector<std::string>		final;
  int					i;

  i = 0;
  while (i < (int)tab.size())
    {
      if (!is_a_double(tab, tab.at(i), i))
	final.push_back(tab.at(i));
      i = i + 1;
    }
  return (final);
}

std::vector<std::string>		parseNames(std::vector<std::string> file)
{
  std::vector<std::string>::iterator	it;
  std::vector<std::string>		names;
  std::string				tmp;
  std::string				n1;
  std::string				n2;
  std::size_t				found;

  for (it = file.begin(); it != file.end(); it++)
    {
      tmp = *it;
      found = tmp.find("is friend with ");
      n1 = tmp.substr(0, found);
      n2 = tmp.substr(found + 17, tmp.size());
      if (n1.size() != 0 && n2.size() != 0)
	{
	  names.push_back(n1);
	  names.push_back(n2);
	}
    }
  names = delete_doubles(names);
  std::sort(names.begin(), names.end());
  return (names);
}
