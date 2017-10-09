//
// print.cpp for  in /home/kopiz/Workplace/MATHS/302separation/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Mon Oct  9 14:17:28 2017 Tom Jeammet
// Last update Mon Oct  9 16:01:51 2017 Tom Jeammet
//

#include "main.hpp"

void	print_stab(std::vector<std::string> tab)
{
  std::vector<std::string>::iterator	it;

  for (it = tab.begin(); it != tab.end(); it++)
    std::cout << *it << std::endl;
  std::cout << std::endl;
}

void	print_vstab(std::vector<std::vector<std::string> > tab)
{
  std::vector<std::vector<std::string> >::iterator	it;
  std::vector<std::string>				tmp;

  for (it = tab.begin(); it != tab.end(); it++)
    {
      tmp = *it;
      print_stab(tmp);
    }
}
