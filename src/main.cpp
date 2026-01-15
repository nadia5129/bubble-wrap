#include <bn_keypad.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>



int main(){

    bn::core::init();
    bn::backdrop::set_color(bn::color(31,0,31));

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