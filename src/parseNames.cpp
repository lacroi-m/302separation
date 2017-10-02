//Tom

#include "main.hpp"

std::vector<std::string>	parseNames(std::ifstream &ifs)
{
  //fais la gestion derreur dans le cas ifs est vide je sais pas comment faire
  std::vector<std::string>	trucs;
  (void)ifs; // petit trics pour compiler avec ces flags de merde enleve apres
  trucs.push_back("jeamme_t");
  trucs.push_back("lacroi_m");
  return (trucs);
}
