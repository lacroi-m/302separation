//
// main.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Tue Sep 19 16:35:18 2017 Tom Jeammet
// Last update Mon Oct  9 19:52:42 2017 ze
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

std::vector<std::vector<std::string> >  linkNames(const std::vector<std::string>, std::vector<std::string>);
std::vector<std::string>		parseNames(std::vector<std::string>);
std::vector<std::string>		parseFile(const char *);
bool					isNbr(std::string);
void					checks(int, char **);
void					launch(int, char **);
void					print_stab(std::vector<std::string>);
#endif /* ! __MAIN_HPP__ */
