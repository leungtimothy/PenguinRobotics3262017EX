int motorCap(int value)
{
	if(value > 127)
		return 127;
	else if(value <-127)
		return -127;
	else
		return value;
}

void setClaw(int value)
{
	motor[claw_1] = motor[claw_2] = motorCap(value);
}

void setArm(int value)
{
	motor[right_arm_1] = motor[right_arm_2] = motor[right_arm_3] = motor[left_arm_1] = motor[left_arm_2] = motorCap(value);
}
