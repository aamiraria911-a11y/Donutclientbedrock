#pragma once
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
namespace DonutClient {
struct BlockObservation { int x,y,z; std::string id; };
struct ClusterResult { int x,y,z; int score; int nearbyClues; };
class AmethystAnalyzer {
public:
 int radius=24;
 std::vector<ClusterResult> analyze(const std::vector<BlockObservation>& blocks) const {
  std::vector<ClusterResult> results;
  const int r=std::clamp(radius,4,128);
  for(const auto& a:blocks) {
   if(a.id!="minecraft:amethyst_cluster" && a.id!="minecraft:large_amethyst_bud") continue;
   int score=0, clues=0;
   for(const auto& b:blocks) {
    long long dx=a.x-b.x,dy=a.y-b.y,dz=a.z-b.z;
    if(dx*dx+dy*dy+dz*dz>1LL*r*r) continue;
    int weight=0;
    if(b.id=="minecraft:chest" || b.id=="minecraft:barrel" || b.id=="minecraft:shulker_box") weight=25;
    else if(b.id=="minecraft:crafting_table" || b.id=="minecraft:furnace" || b.id=="minecraft:bed") weight=12;
    else if(b.id=="minecraft:torch" || b.id=="minecraft:ladder" || b.id=="minecraft:oak_door") weight=5;
    if(weight) {score+=weight; ++clues;}
   }
   results.push_back({a.x,a.y,a.z,std::min(score,100),clues});
  }
  return results;
 }
};
} // namespace DonutClient
