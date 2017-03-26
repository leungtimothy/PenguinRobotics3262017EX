task autonomousLCDSelectionTask
{
	int last_nLCDButtons = 0;
	while(true)
	{
			clearLCDLine(0);
			clearLCDLine(1);

			displayLCDPos(0, 0);
			displayNextLCDString("Select an Auto: ");
			displayLCDPos(1, 0);
			displayNextLCDString(autoNames[autoMode]);

			switch(nLCDButtons)
			{
				case 1: // Left
					if(autoMode > 0 && last_nLCDButtons != nLCDButtons)
					{
						autoMode--;
					}
					break;
				case 2: // Center
					break;
				case 4: // Right
					if(autoMode < NUM_OF_AUTOS-1 && last_nLCDButtons != nLCDButtons)
					{
						autoMode++;

					}
					writeDebugStreamLine("Right LCD Button Pressed");
					break;
				default: // Everything else
					break;
			}

			last_nLCDButtons = nLCDButtons;
			wait1Msec(25);
	}
}

task driverControlLCDTask
{
	clearLCDLine(0);
	clearLCDLine(1);
	while(true)
	{
		switch(driveLCDMode)
		{
			case 0:

				displayLCDPos(0, 0);
				displayNextLCDString("Battery:");
				displayLCDPos(0,9);
				displayNextLCDNumber(nAvgBatteryLevel);
			break;

		}
		wait1Msec(25);
	}
}
