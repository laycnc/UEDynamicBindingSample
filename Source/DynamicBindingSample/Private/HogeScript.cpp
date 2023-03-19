// Fill out your copyright notice in the Description page of Project Settings.


#include "HogeScript.h"


void UHogeScript::Initialize()
{
	// イベントグラフで登録されているイベントとUObjectの紐づけを行う	
	UBlueprintGeneratedClass::BindDynamicDelegates(GetClass(), this); // We have a BP stack, we must have a UBlueprintGeneratedClass...
}

void UHogeScript::Finalize()
{
	// 終了時にMarkAsGarbageを呼ぶ必要があります。
    // 呼ばないと、GCで消えるまで、Broadcastで登録したイベントが呼ばれてしまいます。
	MarkAsGarbage();
}

UWorld* UHogeScript::GetWorld() const
{
	if (GetOuter() == nullptr)
	{
		return nullptr;
	}

	if (Cast<UPackage>(GetOuter()) != nullptr)
	{
		// パッケージでは無い場合にはOuterのWorldを扱う
		return Cast<UWorld>(GetOuter()->GetOuter());
	}

	// In all other cases...
	return GetOuter()->GetWorld();
}