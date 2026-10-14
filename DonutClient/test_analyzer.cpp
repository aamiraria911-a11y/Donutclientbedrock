#include "AmethystAnalyzer.h"
#include <cassert>
int main(){ DonutClient::AmethystAnalyzer a; auto x=a.analyze({{0,0,0,"minecraft:amethyst_cluster"},{2,0,0,"minecraft:chest"},{100,0,0,"minecraft:torch"}}); assert(x.size()==1 && x[0].score==25 && x[0].nearbyClues==1); }
