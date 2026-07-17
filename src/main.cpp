#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_items_player_sprite.h"


int main()
{
    bn::core::init();

    bn::sprite_ptr player_sprite = bn::sprite_items::player_sprite.create_sprite(0, 0);

    while(true)
    {
        /*
        The centerline of the player sprite is 8 to the left and 4 to the left,
        since the right side has 4px of transparency in it.
        */
        if(bn::keypad::left_held() && player_sprite.x() > -112){
            player_sprite.set_x(player_sprite.x() - 1);
        }
        else if(bn::keypad::right_held() && player_sprite.x() < 116){
            player_sprite.set_x(player_sprite.x() + 1);
        }
        bn::core::update();
    }
}
