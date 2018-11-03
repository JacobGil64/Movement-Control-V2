#include "NetworkTablesInterface.h"
#include "NetworkTables/NetworkTableInstance.h"

double NetworkTablesInterface::getNumberCV()
{
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetDouble(-1);
}

int NetworkTablesInterface::getExampleOne()
{
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetDouble(-1);
}

bool NetworkTablesInterface::getExampleTwo()
{
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetDouble(false);
}
