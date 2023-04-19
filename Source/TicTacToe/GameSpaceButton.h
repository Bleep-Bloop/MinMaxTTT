// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUGameSpaceButtonOnClickedSignature, class UGameSpaceButton*, Button);

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameSpaceButton.generated.h"

/**
 * 
 */
UCLASS()
class TICTACTOE_API UGameSpaceButton : public UUserWidget
{
	GENERATED_BODY()

public:
	
	FUGameSpaceButtonOnClickedSignature OnClickedDelegate;

protected:
	virtual void NativeConstruct() override;

	// In the Blueprint subclass, make sure you create aButton called "MainButton"
	UPROPERTY(meta=(BindWidget))
	class UButton* MainButton;

	UFUNCTION()
	void OnButtonClicked();
	
};
