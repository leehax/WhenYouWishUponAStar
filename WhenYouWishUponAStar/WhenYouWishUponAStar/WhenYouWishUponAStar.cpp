// WhenYouWishUponAStar.cpp : Defines the entry point for the console application.
// Leevi Hakala 25 / 02 / 2018

#include "stdafx.h"
#include "Engine.h"

int main(int argc, char* argv[]) {
	Engine engine;
	engine.Initialise();
	engine.Run();
	engine.Destroy();
	return 0;
}