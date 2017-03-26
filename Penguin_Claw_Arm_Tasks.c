task clawTask()
{
	while(true)
	{
		if(clawTaskEnable)
		{
			// 127 is Claw Close
			// -127 is Claw Open
			// Closed position is pot value 0
		  // Open position is pot value 4095
			if(clawAutoOpen)
			{
				if(SensorValue[arm_pot] > clawAutoOpenArmTriggerPos)
				{
					clawPosition = clawAutoOpenPosition;
					clawAutoOpen = false;
				}
			}

			int error = SensorValue[claw_pot_1] - clawPosition;


			setClaw(error*0.2);
			//writeDebugStreamLine("Claw Output Value: %d",error*0.2);
		}
	}
}

task armTask()
{
	while(true)
	{
		if(armTaskEnable)
		{
			int error = armPosition - SensorValue[arm_pot];

			setArm(error*0.5);
		}
	}
}
