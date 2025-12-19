// Copyright Van'Gel Soc


#include "AbilitySystem/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAtrributeInfoForTag(const FGameplayTag& AttributeTag, bool bLogNotFound) const
{
	for (const FAuraAttributeInfo& Info : AttributeInformation)
	{
		if (Info.AttributeTag.MatchesTagExact(AttributeTag))
		{
			return Info;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find attribute info for tag [%s] on AttributeInfo[%s]"), *AttributeTag.ToString(), *GetNameSafe(this));
	}
	
	return FAuraAttributeInfo();
}
