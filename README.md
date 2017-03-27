# Uncommented code created during the advanced workshop session at the Penguin Robotics Autonomous Workshop on March 27th, 2017 at Hootsuite.

* Claw Proportional Loop 
  * Utilize a potentiometer to allow set point position control in autonomous and driver control
  * 3 parameters to allow auto claw opening to a certain position based on the current arm position
  * Hybrid manual code turns on setpoint if the last action was opening claw, otherwise applies static -15 power when last action was closing the claw

* Arm Proportional Loop
  * Utilize a potentiometer to allow set point position control in autonomous and driver control

* LCD Code
  * Modified and created our own version of the competition includes in order to start LCD tasks during Disable/Driver/Auto
  * Created LCD selection task that is active when the robot is disabled (This does not require a user to confirm the auto and does not block startup)
    * nLCDButtons changes the autoMode global variable
    * Debouncing on nLCDButtons 
    * Utilized string array to display auto names based on autoMode variable
    * Case statement to run the correct autonomous based on autoMode variable
