#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_keypad.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_log.h>
#include <bn_vector.h>



int main(){

    bn::core::init();
    bn::backdrop::set_color(bn::color(31,0,31));

    //smiley face 
    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(70, 10);
    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(50, 30);
    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(10, 40);
    // bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
    //  bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(-55, 30);
    //   bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(-70, 10);
    //   bn::sprite_ptr myCircle7= bn::sprite_items::dot.create_sprite(-20, -20);
    //    bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(20, -20);

    // line of sprites
//     bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-40, 40);
// bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-30, 40);
// bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-20, 40);
// bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
// bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(0, 40);
// bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(10, 40);
// bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(20, 40);
// bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(30, 40);
// bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(40, 40);

// What happens if you try to add more sprite pointers than there is space in the vector?
// Can you make it so there are 20 sprites in the vector instead of 10? less circles
// Can you make the circles more spaced out? yes by changing += 20 to 10
// Can you have the circles in a vertical line instead of horizontal?
// What about a diagonal line?
// Can you make multiple different lines?
// Can you make them arranged in a circle using a loop (Challenging! You may want to check out the trigonometric functions available in bn::math)


// horizontal
// bn::vector<bn::sprite_ptr, 10> circles;
// for(int x = -40; x <= 40; x += 10)
// {
//     circles.push_back(bn::sprite_items::dot.create_sprite(30,y));
// }


// vertical
bn::vector<bn::sprite_ptr, 10> circles;
for(int y = -40; y <= 40; y += 20)
{
    circles.push_back(bn::sprite_items::dot.create_sprite(30,y));
}

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