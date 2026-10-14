# Donut Client v0.5 source edition

Forked from the user-provided Horion starter. Right Shift ClickGUI is retained. The module registry now includes AmethystFinder with configurable scan radius and marker toggle. The standalone `DonutClient/AmethystAnalyzer.h` scores observed clusters using nearby blocks. It is **not connected to live game chunk data**. Theme defaults are in `DonutClient/donut_theme.json` (not yet consumed by the legacy UI). The ClickGUI purple accent was updated and the CMake project was renamed.

## Build
Use Windows Visual Studio with the Windows SDK and compatible dependencies. This repository is legacy Bedrock code; it has **not** been adapted or verified against Bedrock 26.50+. Do not inject unverified builds into your primary game installation.

## Test analyzer
`g++ -std=c++17 -IDonutClient DonutClient/test_analyzer.cpp -o analyzer_test && ./analyzer_test`

## Status
No anti-cheat bypass, live ESP, new in-game startup splash, or Bedrock 26.50-compatible hooks are implemented. This package contains modified source, not a validated injectable DLL.
