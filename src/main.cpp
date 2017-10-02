//
// main.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  2 07:57:51 2017 ze
// Last update Mon Oct  2 19:05:59 2017 ze
//

#include "main.hpp"

void	launch(std::ifstream &ifs)
{
  std::string			line;
  std::size_t			i = -1;
  std::vector<std::string>	names;
 

  names = parseNames(ifs); //pour toi Tom
  std::cout << "ceuci-est un test en attendant" << std::endl;
  while (++i < names.size())
    std::cout << "Line: " << i << std::endl << names[i] << std::endl;
}

void	check_launch(int ac, char **av)
{
  std::ifstream                         ifs;
  std::string				line;

  ifs.open(av[1]);
  if (ac < 3 || !ifs)
    throw(Err("Usage:\n./302separation [file] p1 p2"));
  launch(ifs);
  ifs.close();
}

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
