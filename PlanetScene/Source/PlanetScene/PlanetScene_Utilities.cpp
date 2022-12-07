// Copyright 2022 Stefan-Ionut Barbu. All Rights Reserved.


#include "PlanetScene_Utilities.h"
#include "Windows/WindowsSystemIncludes.h"
#include <dxgi1_4.h>


int64 UPlanetScene_Utilities::getVRAMUsage()
{
	// Adapted from StackOverflow: https://stackoverflow.com/questions/35527315/directx-get-vram-used-by-game

	IDXGIFactory4* pFactory;
	CreateDXGIFactory1(__uuidof(IDXGIFactory4), (void**)&pFactory);

	IDXGIAdapter3* adapter;
	pFactory->EnumAdapters(0, reinterpret_cast<IDXGIAdapter**>(&adapter));

	DXGI_QUERY_VIDEO_MEMORY_INFO videoMemoryInfo;
	adapter->QueryVideoMemoryInfo(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, &videoMemoryInfo);

	return (int64)videoMemoryInfo.CurrentUsage / 1024 / 1024;
}