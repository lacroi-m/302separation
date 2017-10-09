//
// launch.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  9 16:16:46 2017 ze
// Last update Mon Oct  9 15:41:28 2017 Tom Jeammet
//

#include "main.hpp"

void	getSeparation(std::vector<std::string> file, std::string p1, std::string p2)
{
  int	nbr;

  nbr = 1;
  std::cout << "degree of separation between " << p1 << " and " << p2 << ": " << nbr << std::endl;
}

void	getMatrix(std::vector<std::string> file, int sep)
{

  std::cout << "print matrix shit" << std::endl;
}

void	launch(int ac, char **av)
{
  std::vector<std::vector<std::string> >	links;
  std::vector<std::string>                      names;
  std::vector<std::string>			file;

  file = parseFile(av[1]);
  if (file.size() == 0)
    throw (Err("Lines in file must be at format : name1 is friends with name2\n"));
  else
    {
      names = parseNames(file);
      links = linkNames(av[1], names);
      if (ac == 3)
	{
	  if ((isNbr(av[2])) == true)
	    getMatrix(file, (int)std::atoi(av[2]));
	  else
	    throw (Err("Usage:\n./302separation [file] p1 p2\n./302separation [file] n"));
	}
      else
	getSeparation(file, (std::string)av[2], (std::string)av[3]);
    }
}

void    checks(int ac, char **av)
{
  std::ifstream                         ifs;
  std::string                           line;

  if (ac < 3 || ac > 4)
    throw (Err("Usage:\n./302separation [file] p1 p2\n./302separation [file] n"));
  else
    {
      ifs.open(av[1]);
      if (!ifs)
	throw (Err("Usage:\n./302separation [file] p1 p2\n./302separation [file] n"));
      else
	launch(ac, av);
      ifs.close();
    }
}
