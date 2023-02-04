

    // If an object is detected
    if (object_count > 0) {
      vision::object_s_t object = VisionSensor.getObject(0);

      // If the object is on the left side
      if (object.centerX < VisionSensor.maxX / 2) {
        Roller.spin(forward, 50, percent);
        wait(1, seconds);
        Roller.stop();
      }

      // If the object is on the right side
      else {
        Roller.spin(reverse, 50, percent);
        wait(1, seconds);
        Roller.stop();
      }
    }

    // If no objects are detected
    else {
      Roller.stop();
    }
  }

  return 0;
}
