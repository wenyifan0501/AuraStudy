// Copyright Van'Gel Soc

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "AuraAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class AURASTUDY_API UAuraAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:

	static UAuraAssetManager& Get();

protected:

	virtual void StartInitialLoading() override;
};
