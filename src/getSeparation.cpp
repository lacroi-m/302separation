//
// getSeparation.cpp for  in /home/kopiz/Workplace/MATHS/302separation/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Mon Oct  9 16:12:35 2017 Tom Jeammet
// Last update Thu Oct 12 14:31:52 2017 Tom Jeammet
//

#include "main.hpp"

bool	isChecked(std::vector<int> *checked, int id)
{
  std::vector<int>::iterator	it;
  std::vector<int>		tab;

  tab = *checked;
  for (it = tab.begin(); it != tab.end(); it++)
    {
      if (*it == id)
	return (true);
    }
  return (false);
}

int     getNameId(std::vector<std::string> names, std::string name)
{
  std::vector<std::string>::iterator    it;
  int                                   i;

  i = 0;
  for (it = names.begin(); it != names.end(); it++)
    {
      if (name == *it)
	return (i);
      i = i + 1;
    }
  return (- 1);
}

void     searchHisFriend(std::vector<std::vector<std::string> > links, std::vector<std::string> names, std::vector<int> *checked, std::vector<int> *founded, int id, std::string name, int sep)
{
  std::vector<std::vector<std::string> >::iterator      it;
  std::vector<std::string>::iterator                    jt;
  std::vector<std::string>                              tmp;
  int                                                   i;

  i = 0;
  it = links.begin();
  while (i < id)
    {
      it++;
      i = i + 1;
    }
  tmp = *it;
  for (jt = tmp.begin(); jt != tmp.end(); jt++)
    {
      if (name.compare(*jt) == 0)
	founded->push_back(sep + 1);
    }
  for (jt = tmp.begin(); jt != tmp.end(); jt++)
    {
      id = getNameId(names, *jt);
      if (!isChecked(checked, id))
	{
	  checked->push_back(id);
	  searchHisFriend(links, names, checked, founded, id, name, sep + 1);
	}
    }
}

int	getMinSep(std::vector<int> founded)
{
  std::vector<int>::iterator	it;
  int				min;

  min = founded.at(0);
  for (it = founded.begin(); it != founded.end(); it++)
    {
      if (*it < min)
	min = *it;
    }
  return (min);
}

void    getSeparation(std::vector<std::vector<std::string> > links, std::vector<std::string> names, std::string p1, std::string p2)
{
  std::vector<int>			checked;
  std::vector<int>			founded;
  int                                   sep;
  int                                   id;

  sep = - 1;
  if (p1.compare(p2) != 0)
    {
      id = getNameId(names, p1);
      checked.push_back(id);
      searchHisFriend(links, names, &checked, &founded, id, p2, sep);
      if (founded.size() == 0)
	std::cout << "degree of separation between " << p1 << " and " << p2 << ":\t" << - 1 << std::endl;
      else
	{
	  sep = getMinSep(founded);
	  std::cout << "degree of separation between " << p1 << " and " << p2 << ":\t" << sep << std::endl;
	}
    }
  else
    std::cout << "degree of separation between " << p1 << " and " << p2 << ":\t" << 0 << std::endl;
}
