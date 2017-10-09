//
// linkNames.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  2 19:48:08 2017 ze
// Last update Mon Oct  9 22:52:01 2017 ze
//
#include "main.hpp"

std::vector<std::string>                getNames(std::string &line)
{
  std::string                           linecpy(line);
  std::vector<std::string>              Names;

  Names.push_back(linecpy.substr(0, linecpy.find(" is friends with ")));
  Names.push_back(linecpy.substr(linecpy.find("with ") + 5));
  return (Names);
}

std::vector<std::vector<std::string> >  linkNames(std::vector<std::string> lines,
						  std::vector<std::string> names)
{
  std::vector<std::vector<std::string> >links;
  std::vector<std::string>              doubleName;
  std::vector<std::string>              list;
  
  for (std::vector<std::string>::iterator it = names.begin(); it != names.end(); it++)
    {
      for (std::vector<std::string>::iterator itt = lines.begin(); itt != lines.end(); itt++)
	{
	  doubleName = getNames(*itt);
	  if (*it == doubleName[0])
	    list.push_back(doubleName[1]);
	  else if (*it == doubleName[1])
	    list.push_back(doubleName[0]);
	}
      links.push_back(list);
      list.clear();
    }
  return (links);
}


/*std::vector<std::vector<std::string> >	linkNames(std::vector<std::string> lines,
						  std::vector<std::string> names)
{
  std::vector<std::vector<std::string> >links;
  std::vector<std::string>              doubleName;
  std::vector<std::string>              OGdoubleName;
  std::vector<std::string>              list;


  for (std::vector<std::string>::iterator it = names.begin(); it != names.end(); it++)
    {
      for (std::vector<std::string>::iterator itt = lines.begin(); itt != lines.end(); itt++)
	{
	  doubleName = getNames(*itt);
	  if (*it == *doubleName.begin())
	    list.push_back(*doubleName.end());
	  else if (*itt == *doubleName.end())
	    list.push_back(*doubleName.begin());
	}
    }
  return (links);
  }*/
