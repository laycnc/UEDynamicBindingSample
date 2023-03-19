#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HogeBlueprint.generated.h"


UCLASS(BlueprintType)
class UHogeBlueprint : public UBlueprint
{
	GENERATED_UCLASS_BODY()

public:

	/** @return true if the blueprint supports event binding for multicast delegates */
	virtual bool AllowsDynamicBinding() const;


};