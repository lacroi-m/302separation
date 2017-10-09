//
// linkNames.cpp for  in /home/ze/302separation
// 
// Made by ze
// Login   <maxime.lacroix@epitech.eu>
// 
// Started on  Mon Oct  2 19:48:08 2017 ze
// Last update Mon Oct  9 16:44:51 2017 ze
//

#include "main.hpp"
/*
std::vector<std::string>		getNames(std::string &line)
{
  std::string				linecpy(line);
  std::vector<std::string>		format;
  std::vector<std::string>		Names;
  
  format.push_back("friends with");
  format.push_back("is friends with");
  format.push_back("est ami avec");

  for (size_t t = 0; t < format.size(); t++)
    {
      if (linecpy.find(format[t]) != std::string::npos)
	{
	  Names.push_back(linecpy.substr(0, linecpy.find(format[t])));
	  //	  linecpy = linecpy.substr(linecpy.find(format));
	  if (linecpy.find("with") != std::string::npos)
	    linecpy = linecpy.substr(linecpy.find("with") + 5);
	  else if (linecpy.find("avec") != std::string::npos)
	    linecpy = linecpy.substr(linecpy.find("avec") + 5);
	  Names.push_back(linecpy);
	  break;
	}
    }
  return (Names);
  }*/

std::vector<std::vector<std::string> >	linkNames(const char *file, std::vector<std::string> names)
{
  //  std::ifstream				ifscpy;
  //  ifscpy << ifs;
  (void)file;
  (void)names;
  std::vector<std::vector<std::string> >links;
  /*  std::string				line;

  std::vector<std::string>		doubleName;
  std::vector<std::string>		list;

  for (std::vector<std::string>::iterator it = names.begin(); it != names.end(); it++)
    {
      while (ifscpy >> line)
	{
	  doubleName = getNames(line);
	  if (it == doubleName.begin())
	    list.push_back(*it);
	  else if (it == doubleName.end())
	    list.push_back(*it);
	}
      links.push_back(list);
      //  ifscpy << ifs;
      //      ifscpy = ifs;
      }*/
  return (links);
}
