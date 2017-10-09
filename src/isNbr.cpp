//
// isNbr.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  9 16:12:44 2017 ze
// Last update Mon Oct  9 16:13:34 2017 ze
//

#include "main.hpp"

bool isNbr(std::string s)
{
  std::string::const_iterator it = s.begin();

  while (it != s.end() && std::isdigit(*it))
    ++it;
  if (it == s.end())
    return (true);
  return (false);
}
