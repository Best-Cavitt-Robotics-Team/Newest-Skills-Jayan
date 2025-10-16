#include "main.h"
#include "globals.h"
#include "helperfunctions.h"
void autonomous() {
    switch (selected_auton){
        case 0:
            translate(32,0,2000);
            setHeading(0, 90, 750);
            scraper1.set_value(true);
            scraper2.set_value(true);
            pros::delay(500);
            intake_bottom.move_velocity(-600);
            intake_middle.move_velocity(600);
            intake_top.move_velocity(-200);
            translate(18,90,3000);
            translate(-12,90,1200);
            scraper1.set_value(false);
            scraper2.set_value(false);
            setHeading(0,-87,1200);
            translate(20,-90,1500);
            intake_bottom.move_velocity(600);
            intake_middle.move_velocity(-600);
            intake_top.move_velocity(-200);
            pros::delay(100);
            intake_bottom.move_velocity(-600);
            intake_middle.move_velocity(600);
            intake_top.move_velocity(-200);
            intake_top.move_velocity(200);
            pros::delay(2500);
            intake_top.move_velocity(0);
            intake_middle.move_velocity(0);
            intake_bottom.move_velocity(0);
            translate(-10,-90,1500);
            setHeading(0,-7,750);
            translate(-100,-7,6000);
            translate(-30,-7,3000);
            translate(18,0,1000);
            setHeading(0, 90, 750);
            scraper1.set_value(true);
            scraper2.set_value(true);
            pros::delay(500);
            intake_bottom.move_velocity(-600);
            intake_middle.move_velocity(600);
            intake_top.move_velocity(-200);
            translate(22,90,3000);
            translate(-12,90,1200);
            scraper1.set_value(false);
            scraper2.set_value(false);
            setHeading(0,-93,1200);
            translate(20,-90,1500);
            intake_bottom.move_velocity(600);
            intake_middle.move_velocity(-600);
            intake_top.move_velocity(-200);
            pros::delay(100);
            intake_bottom.move_velocity(-600);
            intake_middle.move_velocity(600);
            intake_top.move_velocity(200);
            pros::delay(2500);
            intake_top.move_velocity(0);
            intake_middle.move_velocity(0);
            intake_bottom.move_velocity(0);
            translate(-10,-90,2007);
            setHeading(0,45,750);
            translate(29,45,2000);

            setHeading(-1,10,898);
            pros::delay(2000);
            translate(40,0,2777);
            scraper1.set_value(true);
            scraper2.set_value(true);
            translate(35,0,2000);
            



            

            break;
}
}

