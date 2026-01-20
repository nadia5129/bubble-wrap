#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_keypad.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>



int main(){

    bn::core::init();
    bn::backdrop::set_color(bn::color(31,0,31));

    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(70, 10);
    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(50, 30);
    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(10, 40);
    // bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
    //  bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(-55, 30);
    //   bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-70, 10);
    //   bn::sprite_ptr myCircle7= bn::sprite_items::dot.create_sprite(-20, -20);
    //    bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(20, -20);
    bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-40, 40);
bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-30, 40);
bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-20, 40);
bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(0, 40);
bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(10, 40);
bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(20, 40);
bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(30, 40);
bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(40, 40);
      

    while(true){ 
        if (bn::keypad::a_held()) {
        bn::backdrop::set_color(bn::color(28,12,18));
        }

        else if (bn::keypad::b_held()) {
            bn::backdrop::set_color(bn::color(18,28,18));
        }
         else{
        bn::backdrop::set_color(bn::color(31, 18, 20)); 
         }
    
    bn::core::update();
    }   

}