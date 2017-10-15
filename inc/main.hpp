//
// main.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Tue Sep 19 16:35:18 2017 Tom Jeammet
// Last update Sun Oct 15 21:00:23 2017 Tom Jeammet
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
void					checks(int, char **);
void					launch(int, char **);
void					print_itab(std::vector<int>);
void					print_stab(std::vector<std::string>);
void					print_vstab(std::vector<std::vector<std::string> >);
void					getSeparation(std::vector<std::vector<std::string> >, std::vector<std::string>, std::string, std::string);
void					searchHisFriend(std::vector<std::vector<std::string> >, std::vector<std::string>, std::vector<int> *, std::vector<int> *, int, std::string, int);
void					getMatrix(std::vector<std::vector<std::string> >, std::vector<std::string>, int);
bool					isNbr(std::string);
bool					countain_nb(std::string);
bool					isChecked(std::vector<int> *, int);
int					getMinSep(std::vector<int>);
int					getNameId(std::vector<std::string>, std::string);

#endif /* ! __MAIN_HPP__ */
