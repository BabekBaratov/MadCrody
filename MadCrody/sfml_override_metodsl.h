#pragma once
#include <SFML/Graphics.hpp>
#include "map.h"
using namespace sf;
class player_sfml : public map_game
{
	Texture player_texture;
	Sprite player_sprite;
public:
	player_sfml();
	void show_map() override;
	void map_generation() override;
};
