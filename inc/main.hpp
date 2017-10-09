//
// main.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Tue Sep 19 16:35:18 2017 Tom Jeammet
// Last update Mon Oct  9 16:38:27 2017 ze
//

#ifndef __MAIN_HPP__
# define __MAIN_HPP__

# include <cstdlib>
# include <iostream>
# include <fstream>
# include <vector>
# include <string>
# include <cstring>
# include <sstream>
# include <algorithm>

# include "exception.hpp"
std::vector<std::vector<std::string> >  linkNames(const char *file, std::vector<std::string> names);
bool	isNbr(std::string s);
void    check_launch(int ac, char **av);
void    launch(std::string file, bool isPathSize, int nbr, std::string p1, std::string p2);
void    check_launch(int ac, char **av);
std::vector<std::string>        parseNames(const char *file);
#endif /* ! __MAIN_HPP__ */
