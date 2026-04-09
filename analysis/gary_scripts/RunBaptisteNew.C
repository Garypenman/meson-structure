#include "ePICFileStreamer.h"
void RunBaptisteNew(){

  //infiles = rad::files::GetXRootDFiles("dtn-eic.jlab.org/","/volatile/eic/romanov/meson-structure-2025-08/reco/18x275/","edm4eic.root",-1);
  std::vector<string> infiles = rad::files::GetXRootDFiles("dtn-eic.jlab.org/","/w/work/eic/users/fraisse/meson-structure/data/",".root",-1);
  for(auto file : infiles)
    std::cout << file << std::endl;
  


}
