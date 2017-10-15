//
// getMatrix.cpp for  in /home/kopiz/Workplace/MATHS/302separation/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Sun Oct 15 20:09:07 2017 Tom Jeammet
// Last update Sun Oct 15 21:41:19 2017 Tom Jeammet
//

#include "main.hpp"

void    printLinks(std::vector<std::vector<std::string> > links, std::vector<std::string> names)
{
  bool  printed = false;
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
}

void			getMatrix(std::vector<std::vector<std::string> > links, std::vector<std::string> names, int max)
{
  std::vector<std::string>::iterator	it;
  std::vector<std::string>::iterator	jt;
  std::vector<int>			checked;
  std::vector<int>			founded;
  std::string				tmp;
  std::string				tmp2;
  int					sep;
  int					id;
  int					a;

  printLinks(links, names);
  std::cout << std::endl;
  for (it = names.begin(); it != names.end(); it++)
    {
      a = 0;
      tmp = *it;
      id = getNameId(names, tmp);
      checked.push_back(id);
      for (jt = names.begin(); jt != names.end(); jt++)
	{
	  tmp2 = *jt;
	  if (a != 0)
	    std::cout << " ";
	  sep = - 1;
	  //	  std::cout << tmp << " & " << tmp2 << "::" << std::endl;
	  if (tmp2.compare(tmp) != 0)
	    {
	      searchHisFriend(links, names, &checked, &founded, id, tmp2, sep);
	      //	      std::cout << " : ";
	      //	      print_itab(founded);
	      //	      std::cout << std::endl;
	      if (founded.size() == 0)
		std::cout << "0";
	      else
		{
		  sep = getMinSep(founded);
		  if (sep - 1 <= max)
		    {
		      if (sep == 0)
			std::cout << 1;
		      else
			std::cout << sep - 1;
		    }
		  else
		    std::cout << "0";
		}
	      checked.clear();
	      founded.clear();
	    }
	  else
	    std::cout << "0";
	  a = a + 1;
	}
      std::cout << std::endl;
    }
}
