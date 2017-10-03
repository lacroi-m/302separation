//
// parseNames.cpp for  in /home/kopiz/Workplace/MATHS/302separation/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Tue Oct  3 09:32:28 2017 Tom Jeammet
// Last update Tue Oct  3 12:35:16 2017 Tom Jeammet
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

/*

void					print_stab(std::vector<std::string> tab)
{
  std::vector<std::string>::iterator	it;

  for (it = tab.begin(); it != tab.end(); it++)
    std::cout << *it << std::endl;
  std::cout << std::endl;
}

*/

std::vector<std::string>		parseNames(std::ifstream &ifs)
{
  std::vector<std::string>::iterator	it;
  std::vector<std::string>		names;
  std::vector<std::string>		lines;
  std::string				tmp;
  std::string				n1;
  std::string				n2;
  std::size_t				found;

  std::cout << "MY FONCTION" << std::endl;
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
	    {
	      names.push_back(n1);
	      names.push_back(n2);
	    }
	}
    }
  names = delete_doubles(names);
  std::sort(names.begin(), names.end());
  //print_stab(names);
  return (names);
}
