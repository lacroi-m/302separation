//
// launch.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  9 16:16:46 2017 ze
// Last update Thu Oct 12 20:27:01 2017 Tom Jeammet
//

#include "main.hpp"

//void	printNbr(size_t x, size_t y, size_t k, std::vector<std::string> names,		 std::vector<std::vector<std::string> > links, int sep)

void	getMatrix(std::vector<std::string> names, std::vector<std::vector<std::string> > links, int sep)
{
  (void)sep;
  bool	printed = false;
  for (size_t x = 0; x < names.size(); x++)
    std::cout << names[x] << std::endl;
  std::cout << std::endl;

  for (size_t x = 0; x < links.size(); x++)
    {
      for (size_t k = 0; k < names.size(); k++)
	  {
	    for (size_t y = 0; y < links[x].size(); y++)
	      {
		if (links[x][y] == names[k])
		  {
		    std::cout << "1";
		    if (k != names.size() - 1)
		      std::cout << " ";
		    printed = true;
		    break;
		  }
	      }
	    if (printed == false)
	      {
		std::cout << "0";
		if (k != names.size() - 1)
		  std::cout << " ";
	      }
	    printed = false;
	  }
      std::cout << std::endl;
    }
  //  std::cout << std::endl;

  /*  for (size_t x = 0; x < links.size(); x++)
    {
      for (size_t k = 0; k < names.size(); k++)
	{
	  for (size_t y = 0; y < links[x].size(); y++)
	    {
	      if (links[x][y] == names[k])
		{
		  std::cout << "1";
		  printed = true;
		  break;
		}
	    }
	  if (printed == false)
	    printNbr(x, y, k, names, links, sep);
	  printed = false;
	}
      std::cout << std::endl;
      }*/
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
      links = linkNames(file, names);
      /*      for (size_t x = 0; x < links.size(); x++)
	{
	  std::cerr << "name -> " << names[x] << std::endl;
	  for (size_t y = 0; y < links[x].size(); y++)
	    std::cerr << links[x][y] << std::endl;
	  std::cerr << std::endl;
	  }*/
      if (ac == 3)
	{
	  if ((isNbr(av[2])) == true)
	    getMatrix(names, links, (int)std::atoi(av[2]));
	  else
	    throw (Err("Usage:\n./302separation [file] p1 p2\n./302separation [file] n"));
	}
      else
	{
	  if ((countain_nb((std::string)av[2]) == false) && (countain_nb((std::string)av[3]) == false))
	    getSeparation(links, names, (std::string)av[2], (std::string)av[3]);
	  else
	    throw (Err("Usage:\n./302separation [file] p1 p2\n./302separation [file] n"));
	}
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
