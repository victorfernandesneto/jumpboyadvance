#include "bn_core.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_items_player.h"


int main()
{
    bn::core::init();

    bn::sprite_ptr player = bn::sprite_items::player.create_sprite(0, 0);

    while(true)
    {
        bn::core::update();
    }
}
