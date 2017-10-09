//
// launch.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  9 16:16:46 2017 ze
// Last update Mon Oct  9 16:36:32 2017 ze
//

#include "main.hpp"

void    launch(const char *file, bool isPathSize, int nbr, std::string p1, std::string p2)
{
  std::ifstream					ifs;
  std::string                                   line;
  std::size_t                                   i = -1;
  std::size_t                                   j = -1;
  std::vector<std::string>                      names;
  std::vector<std::vector<std::string> >        links;

  ifs.open(file);
  //  names = parseNames(ifs); //pour toi Tom
  names = parseNames(file); //pour toi Tom
  links = linkNames((const char *)file, names);

  std::cout << "names:\n\t";
  while (++i < names.size())
    std::cout << names[i] << std::endl;
  i = -1;
  std::cout << "links:\n\t";
  while (++i < links.size())
    while (++j < links.size())
      std::cout << links[i][j] << std::endl;
  if (isPathSize == true)
    std::cout << "print matrix shit" << std::endl;
  else
    std::cout << "degree of separation between " << p1 << " and " << p2 << ": " << nbr << std::endl;
}

void    check_launch(int ac, char **av)
{
  std::ifstream                         ifs;
  std::string                           line;

  ifs.open(av[1]);
  if ((ac < 3 && ac > 4) || !ifs)
    throw(Err("Usage:\n./302separation [file] p1 p22\n./302separation [file] n"));
  if (ac == 3)
    {
      if ((isNbr(av[2])) == true)
	launch(av[1], true, (int)std::atoi(av[2]), "", "");
      else
	throw(Err("Envoie moi un numero !\nUsage: ./302separation [file] n"));
    }
  else
    launch(av[1], false, 0, (std::string)av[2], (std::string)av[3]);
  ifs.close();
}
