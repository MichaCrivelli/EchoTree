// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EchoMode.generated.h"

USTRUCT(BlueprintType)
struct FEchoSnapshot
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Id = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsJumpingFlag = false;
};

UCLASS()

class JAMTESTINGPROJECT_API UEchoMode : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Echo Mode - Record Movement", Keywords = "Echo Mode Record"), Category = "EchoMode")
	static struct FEchoSnapshot EchoMode_Record(
		const AActor* ActorRef, UPARAM(ref) TArray<FEchoSnapshot>& PathRef);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Echo Mode - Set Movement", Keywords = "Echo Mode Set Movement"), Category = "EchoMode")
	static void EchoMode_SetMovement(
		AActor* ActorRef, UPARAM(ref) FEchoSnapshot& SnaptshotRef);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Echo Mode - Clear Path", Keywords = "Echo Mode Clear Path"), Category = "EchoMode")
	static void EchoMode_ClearPath(UPARAM(ref) TArray<FEchoSnapshot>& PathRef);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Echo Mode - Create Struct", Keywords = "Echo Mode Create Struct"), Category = "EchoMode")
	static TArray<FEchoSnapshot> EchoMode_CreateStruct();
};
