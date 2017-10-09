//
// main.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  2 07:57:51 2017 ze
// Last update Mon Oct  9 14:29:46 2017 Tom Jeammet
//

#include "main.hpp" 

int	main(int ac, char **av)
{
  try
    {
      checks(ac, av);
    }
  catch (Err &err)
    {
      err.print_msg();
      return (84);
    }
  return (0);
}
