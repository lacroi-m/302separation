//
// main.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  2 07:57:51 2017 ze
// Last update Mon Oct  2 12:07:23 2017 ze
//

#include "main.hpp"

void	check(int ac, char **av)
{
  (void)ac;
  (void)av;
  throw (Err("Dont send me caca"));
}

int main(int ac, char **av)
{
  (void)ac;
  (void)av;
  try{
    check(ac, av);
  }
  catch (Err &err){
    err.print_msg();
    return (84);
  }
  return (0);
}
