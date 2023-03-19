// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "HogeBlueprintCompiler.h"

#define LOCTEXT_NAMESPACE "FDynamicBindingSampleEditor"

class FDynamicBindingSampleEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;
private:
	FHogeBlueprintCompiler HogeBlueprintCompiler;
};

void FDynamicBindingSampleEditorModule::StartupModule()
{
	IKismetCompilerInterface& KismetCompilerModule = FModuleManager::LoadModuleChecked<IKismetCompilerInterface>("KismetCompiler");
	KismetCompilerModule.GetCompilers().Add(&HogeBlueprintCompiler);
}

void FDynamicBindingSampleEditorModule::ShutdownModule()
{
	if (IKismetCompilerInterface* KismetCompilerModule = FModuleManager::GetModulePtr<IKismetCompilerInterface>("KismetCompiler"))
	{
		KismetCompilerModule->GetCompilers().Remove(&HogeBlueprintCompiler);
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDynamicBindingSampleEditorModule, DynamicBindingSampleEditor);