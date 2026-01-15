#include <bn_keypad.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>



int main(){

    bn::core::init();
    bn::backdrop::set_color(bn::color(31,0,31));

    if(bn::keypad::a_pressed()) {
        bn::backdrop::set_color(bn::color(31,21,22));
    }

    
    while(true) {
    bn::core::update();
}
}