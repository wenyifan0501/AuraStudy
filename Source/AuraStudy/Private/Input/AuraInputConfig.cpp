// Copyright Van'Gel Soc


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FAuraInputAction& Action: AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Could not find InputAction for InputTag %s"), *InputTag.ToString());
	}
	return nullptr;
}
