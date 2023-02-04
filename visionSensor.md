#include "vex.h"

using namespace vex;

int main() {
   Initialize the Vision Sensor
  vision::signature_s_t SIG_1 = vision::signature_s_t(1, 0, 0, 0, 0, 0, 0, 2.5, 0);
  vision::signature_s_t SIG_2 = vision::signature_s_t(2, 0, 0, 0, 0, 0, 0, 2.5, 0);
  vision::signature SIG_FLOOR = vision::signature(SIG_1, SIG_2);
  vision VisionSensor = vision(PORT10, 50, SIG_FLOOR);

   Initialize the VEX Pro V5 Motor
  motor Roller = motor(PORT1, gearSetting::ratio18_1, false);

   Wait for the Vision Sensor to be ready
  VisionSensor.setLedColor(color::red);
  VisionSensor.setSignature(1);
  wait(2, seconds);

  while (true) {
    int object_count = VisionSensor.countObjects();

    // If an object is detected
    if (object_count > 0) {
      vision::object_s_t object = VisionSensor.getObject(0);

      // If the object is on the left side
      if (object.centerX < VisionSensor.maxX / 2) {
        Roller.spin(forward, 50, percent);
      }

      // If the object is on the right side
      else {
        Roller.spin(reverse, 50, percent);
      }
    }

    // If no objects are detected
    else {
      Roller.stop();
    }
  }

  return 0;
}
