#pragma once
#include <SFML/Graphics.hpp>
#define borderLeft 140
#define borderRight 660
#define high 2
#define low 525

using namespace sf;

class obS{
   private:
   Vector2f obs_posn;
   Sprite obsprt;
   Texture obtxt;
  static float obs_speed;

   public:
    
   obS();
   Sprite getSprite();
    int update();
    void resetX();
     void obspd();
};