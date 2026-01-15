#include <bn_keypad.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>



int main(){

    bn::core::init();
    bn::backdrop::set_color(bn::color(31,0,31));

    while(true){ 
        if (bn::keypad::a_pressed()) {
        bn::backdrop::set_color(bn::color(31,21,22));
        }

        if (bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(10,31,10));
        }
    
    bn::core::update();
    }   

}