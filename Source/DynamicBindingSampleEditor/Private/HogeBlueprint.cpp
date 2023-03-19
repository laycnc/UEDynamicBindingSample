#include "HogeBlueprint.h"

UHogeBlueprint::UHogeBlueprint(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


/** @return true if the blueprint supports event binding for multicast delegates */
bool UHogeBlueprint::AllowsDynamicBinding() const
{
	return true;
}
