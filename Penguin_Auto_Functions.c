void setAutoOpen(int clawPosition, int triggerPosition)
{
	clawAutoOpen = true;
	clawPosition = clawPosition;
	triggerPosition = triggerPosition;
}

void dumpRoutine()
{
	setAutoOpen(CLAW_POS_WIDE_OPEN, ARM_POS_START_OPENING_CLAW_FOR_DUMP);
}
