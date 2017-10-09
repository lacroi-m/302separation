//
// isNbr.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  9 16:12:44 2017 ze
// Last update Mon Oct  9 16:43:37 2017 Tom Jeammet
//

#include "main.hpp"

bool	isNbr(std::string s)
{
  std::string::const_iterator it = s.begin();

  while (it != s.end() && std::isdigit(*it))
    ++it;
  if (it == s.end())
    return (true);
  return (false);
}

bool	countain_nb(std::string s)
{
  char	*str;
  int	i;

  i = 0;
  str = (char *)s.c_str();
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	return (true);
      i = i + 1;
    }
  return (false);
}
