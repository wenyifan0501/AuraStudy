// Copyright Van'Gel Soc

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include "OverlayWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedSignature, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealthChangedSignature, float, NewMaxHealth);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class AURASTUDY_API UOverlayWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()

public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbackToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attribute")
	FOnHealthChangedSignature OnHealthChanged;
	UPROPERTY(BlueprintAssignable, Category = "GAS|Attribute")
	FOnMaxHealthChangedSignature OnMaxHealthChanged;

protected:
	void HealthCHanged(const FOnAttributeChangeData& Data) const;
	void MaxHealthCHanged(const FOnAttributeChangeData& Data) const;
};
