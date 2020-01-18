#include "sfml_override_metodsl.h"
player_sfml::player_sfml()
{
	player_texture.loadFromFile("C:\\Users\\admin\\Documents\\GitHub\\MadCrody\\textures\\MadCordy\\Animation\\Left\\madcordy_stay_left.png");
	player_sprite.setTexture(player_texture);
}

void player_sfml::show_map()
{
}

void player_sfml::map_generation()
{
}
