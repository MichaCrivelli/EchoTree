// Fill out your copyright notice in the Description page of Project Settings.


#include "EchoMode.h"

namespace Utility
{}


struct FEchoSnapshot UEchoMode::EchoMode_Record(const AActor* Actor, UPARAM(ref) TArray<FEchoSnapshot>& Path)
{
	FEchoSnapshot Snapshot;
	FVector Location = FVector::ZeroVector;
	FRotator Rotation = FRotator::ZeroRotator;

	Location = Actor->GetTransform().GetLocation();
	Rotation = Actor->GetActorRotation();

	Snapshot.Location = Location;
	Snapshot.Rotation = Rotation;
	Snapshot.Id = Path.Num() + 1;
	
	Path.Add(Snapshot);
	
	return Snapshot;
}

void UEchoMode::EchoMode_SetMovement(AActor* ActorRef, FEchoSnapshot& SnaptshotRef)
{
	ActorRef->SetActorLocation(SnaptshotRef.Location);
	ActorRef->SetActorRotation(SnaptshotRef.Rotation);
}

void UEchoMode::EchoMode_ClearPath(UPARAM(ref) TArray<FEchoSnapshot>& Path)
{
	Path.Empty();
}

TArray<FEchoSnapshot> UEchoMode::EchoMode_CreateStruct()
{
	TArray<FEchoSnapshot> Path;
	return Path;
}
