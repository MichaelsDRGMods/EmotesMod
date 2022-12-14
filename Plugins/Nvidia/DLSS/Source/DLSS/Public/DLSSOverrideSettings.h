#pragma once
#include "CoreMinimal.h"
#include "EDLSSSettingOverride.h"
#include "UObject/Object.h"
#include "DLSSOverrideSettings.generated.h"

UCLASS(Blueprintable, ProjectUserConfig, config = Engine)
class DLSS_API UDLSSOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;
    
    UDLSSOverrideSettings();
};

