//
// main.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  2 07:57:51 2017 ze
// Last update Mon Oct  9 16:17:41 2017 ze
//

#include "main.hpp" 

int main(int ac, char **av)
{
  try{
    check_launch(ac, av);
  }
  catch (Err &err){
    err.print_msg();
    return (84);
  }
  return (0);
}
