#pragma once
#include <SDL/SDL.h>
#include <GL/eglew.h>
#include "Sprite.h"
#include <vector>

enum class GameState {
	PLAY,EXIT
};


class MainGame
{
private:
	int width;
	int height;
	SDL_Window* window;
	vector<Sprite> sprites;
	void init();
	Sprite sprite;
	void processInput();

	float timerSpawn;

public:
	MainGame();
	~MainGame();
	GameState gameState;
	void run();
	void draw();
	void update();
};

