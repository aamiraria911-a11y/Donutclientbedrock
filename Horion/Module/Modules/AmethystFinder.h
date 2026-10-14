#pragma once
#include "Module.h"
class AmethystFinder : public IModule {
public:
 int scanRadius = 24;
 bool showMarkers = true;
 AmethystFinder() : IModule(0, Category::VISUAL, "Amethyst cluster/base clue analyzer (live scan not connected)") {
  registerIntSetting("Radius", &scanRadius, scanRadius, 4, 128);
  registerBoolSetting("Show Markers", &showMarkers, showMarkers);
 }
 const char* getModuleName() override { return "AmethystFinder"; }
};
