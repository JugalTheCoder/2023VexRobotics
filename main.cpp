/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// leftFront            motor         1               
// leftBack             motor         2               
// rightFront           motor         3               
// rightBack            motor         4               
// intake               motor         5               
// slapper              motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----

//

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/


void autonomous(void) {


  /*
  leftFront.setVelocity(80, percent);
  leftBack.setVelocity(80, percent);
  rightFront.setVelocity(80, percent);
  rightBack.setVelocity(80, percent);

  leftFront.startRotateFor(vex::directionType::fwd, 100, vex::rotationUnits::deg);
  leftBack.startRotateFor(vex::directionType::fwd, 100, vex::rotationUnits::deg);
  rightFront.startRotateFor(vex::directionType::fwd, 100, vex::rotationUnits::deg);
  rightBack.rotateFor(vex::directionType::fwd, 100, vex::rotationUnits::deg);

  //90 degree left turn (pivot);

  leftFront.startRotateFor(vex::directionType::rev, 90, vex::rotationUnits::deg);
  leftBack.startRotateFor(vex::directionType::rev, 90, vex::rotationUnits::deg);
  rightFront.startRotateFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);
  rightBack.rotateFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);

  //90 degree left turn (swing):

  rightFront.startRotateFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);
  rightBack.rotateFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);

  lifter.spinFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);
  lifter2.spinFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);

  //vex::task::sleep(2000); //2 seconds pause
  */


  //moving to the mobil goal
  

  
  leftFront.setVelocity(100 , percent);
  leftBack.setVelocity(100 , percent);
  rightFront.setVelocity(100 , percent);
  rightBack.setVelocity(100 , percent);

  leftFront.setPosition( 0, degrees);
  leftBack.setPosition(0 , degrees);
  rightFront.setPosition(0 , degrees);
  rightBack.setPosition(0 , degrees);

  leftFront.startRotateFor(vex::directionType::rev , 1080, vex::rotationUnits::deg);
  leftBack.startRotateFor(vex::directionType::rev , 1080, vex::rotationUnits::deg);
  rightFront.startRotateFor(vex::directionType::rev , 1080, vex::rotationUnits::deg);
  rightBack.rotateFor(vex::directionType::rev , 1080, vex::rotationUnits::deg);


  //Turn right
  leftFront.startRotateFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);
  leftBack.rotateFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);

  


  
  //lift moves down
  
  // lifter.setPosition(0, degrees);

  // lifter.spinFor(vex::directionType::fwd ,90 ,vex::rotationUnits::deg);

  
  
  //move into position

  leftFront.startRotateFor(vex::directionType::fwd , 180, vex::rotationUnits::deg);
  leftBack.startRotateFor(vex::directionType::fwd , 180, vex::rotationUnits::deg);
  rightFront.startRotateFor(vex::directionType::fwd , 180, vex::rotationUnits::deg);
  rightBack.rotateFor(vex::directionType::fwd , 180, vex::rotationUnits::deg);

  //lift moves up

  // lifter.spinFor(vex::directionType::rev ,90 ,vex::rotationUnits::deg);

  

  //Goes reverse
  


  


  //turn right pivot 

  //leftFront.startRotateFor(vex::directionType::fwd ,90 ,vex::rotationUnits::deg);
  //leftBack.startRotateFor(vex::directionType::fwd ,90 ,vex::rotationUnits::deg);
  //rightFront.startRotateFor(vex::directionType::rev ,90 ,vex::rotationUnits::deg);
  //rightBack.rotateFor(vex::directionType::rev ,90 ,vex::rotationUnits::deg);

 // move goal into claw 

 

  //leftFront.startRotateFor(vex::directionType::fwd , 360, vex::rotationUnits::deg);
  //leftBack.startRotateFor(vex::directionType::fwd , 360, vex::rotationUnits::deg);
  //rightFront.startRotateFor(vex::directionType::rev , 360, vex::rotationUnits::deg);
  //rightBack.rotateFor(vex::directionType::rev , 360, vex::rotationUnits::deg);

  // lift goal 


  //lifter.spinFor(vex::directionType::fwd ,90 ,vex::rotationUnits::deg);
  //lifter2.spinFor(vex::directionType::fwd, 90, vex::rotationUnits::deg);

  //go back
  

  //vex::task::sleep(2000); //pauses 

  

}




//---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/


void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {

    
    leftFront.spin(vex::directionType::fwd, Controller1.Axis3.position(), vex::velocityUnits::pct);
    leftBack.spin(vex::directionType::fwd, Controller1.Axis3.position(), vex::velocityUnits::pct);
    rightFront.spin(vex::directionType::fwd, Controller1.Axis2.position(), vex::velocityUnits::pct);
    rightBack.spin(vex::directionType::fwd, Controller1.Axis2.position(), vex::velocityUnits::pct);



    if(Controller1.ButtonL1.pressing())
    {
      intake.spin(vex::directionType::fwd, 75, vex::velocityUnits::pct);
      



    }
    else if(Controller1.ButtonL2.pressing())
    {
      intake.spin(vex::directionType::rev, 75, vex::velocityUnits::pct);
    }
    else
    {
      intake.stop(vex::brakeType::hold);
    }
    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}


//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  
  Competition.drivercontrol(usercontrol);


  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}


