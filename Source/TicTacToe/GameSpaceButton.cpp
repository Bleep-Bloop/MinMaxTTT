// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSpaceButton.h"

#include "Components/Button.h"

void UGameSpaceButton::NativeConstruct()
{
	Super::NativeConstruct();

	MainButton->OnClicked.AddUniqueDynamic(this, &ThisClass::OnButtonClicked);
}

void UGameSpaceButton::OnButtonClicked()
{
	OnClickedDelegate.Broadcast(this);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::MakeRandomColor(), "GameSpaceButton::Clicked");
}

