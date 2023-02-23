#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGhostCarOptionsChanged__DelegateSignature
{
public:
	FGhostCarOptionsChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGhostCarOptions Getoptions() {
		return memory.read<struct FGhostCarOptions>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDoorOpen
{
public:
	FIsDoorOpen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisLeft() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPlaying
{
public:
	FIsPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsFlashingLightsBlinkOn
{
public:
	FIsFlashingLightsBlinkOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCarAnimationEvent__DelegateSignature
{
public:
	FOnCarAnimationEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarAnimation GetEventType() {
		return memory.read<enum class ECarAnimation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FButtonReleaseEvent__DelegateSignature
{
public:
	FButtonReleaseEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType Getaction_type() {
		return memory.read<enum class EControllerActionType>(m_addr + 0);
	}
	float Gettime_pressed() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FdeleteChampionshipResults
{
public:
	FdeleteChampionshipResults(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAutoBlipData
{
public:
	FAutoBlipData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveFloat GetBlipProfile() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCurveFloat(ptr_addr);
	}
	bool GetIsElectronic() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateLapInfo
{
public:
	FUpdateLapInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesHotlapUpdate GetrankUpdate() {
		return memory.read<struct FOnlineServicesHotlapUpdate>(m_addr + 0);
	}
	struct TArray<struct FOnlineServicesHotlapEntry> Getentries() {
		return memory.read<struct TArray<struct FOnlineServicesHotlapEntry>>(m_addr + 64);
	}
	bool GetisDriverCarClass() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FButtonPressEvent__DelegateSignature
{
public:
	FButtonPressEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType Getaction_type() {
		return memory.read<enum class EControllerActionType>(m_addr + 0);
	}
	bool Getis_repeat() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHUDTick__DelegateSignature
{
public:
	FOnHUDTick__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRaceHUDState GetState() {
		return memory.read<struct FRaceHUDState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEventSelected
{
public:
	FOnEventSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSpecialEventPreset GetPreset() {
		return memory.read<struct FSpecialEventPreset>(m_addr + 0);
	}
	struct FModelInfo Getmodel_info() {
		return memory.read<struct FModelInfo>(m_addr + 576);
	}
	struct FCarInfo Getcar_info() {
		return memory.read<struct FCarInfo>(m_addr + 1000);
	}
	struct FTeamInfo Getteam_info() {
		return memory.read<struct FTeamInfo>(m_addr + 1224);
	}
	struct FCircuitInfo Getcircuit_info() {
		return memory.read<struct FCircuitInfo>(m_addr + 1280);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceGameModeLeaderboardEntries__DelegateSignature
{
public:
	FRaceGameModeLeaderboardEntries__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLeaderboardResponse Getresponse() {
		return memory.read<struct FLeaderboardResponse>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllCarGroups
{
public:
	FGetAllCarGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class ECarGroup> GetReturnValue() {
		return memory.read<struct TArray<enum class ECarGroup>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisTeleportToPitAllowed
{
public:
	FisTeleportToPitAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCameraChange__DelegateSignature
{
public:
	FOnCameraChange__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCameraType Getcamera_type() {
		return memory.read<struct FCameraType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCamera
{
public:
	FSetCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMainCameraMode GetmainMode() {
		return memory.read<enum class EMainCameraMode>(m_addr + 0);
	}
	int32_t GetsubMode() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_DOF0
{
public:
	Facc_DOF0(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFOV() {
		return memory.read<float>(m_addr + 0);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetWiperLevel
{
public:
	FsetWiperLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetLevel() {
		return memory.read<char>(m_addr + 0);
	}
	bool GetanimEnable() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKSONRatingReport
{
public:
	FOnKSONRatingReport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRatingReport GetratingCurrent() {
		return memory.read<struct FRatingReport>(m_addr + 0);
	}
	struct FRatingReport GetdeltaRating() {
		return memory.read<struct FRatingReport>(m_addr + 160);
	}
	bool GetisSessionReference() {
		return memory.read<bool>(m_addr + 320);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeviceObjectStateChanged__DelegateSignature
{
public:
	FDeviceObjectStateChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputDeviceObject Getdevice_object() {
		return memory.read<struct FInputDeviceObject>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimeOfDayAsSeconds
{
public:
	FGetTimeOfDayAsSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetArrowVisibility
{
public:
	FSetArrowVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getarrow_visibility() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDynamicControllerData
{
public:
	FDynamicControllerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FDynamicControllerStage> GetStages() {
		return memory.read<struct TArray<struct FDynamicControllerStage>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGamePlatformUserAccountData
{
public:
	FGamePlatformUserAccountData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetExponent() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMaxDop() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetFillFactor() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetMirrorLifetime() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FString GetGamePlatformUserId() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetLocalMachineId() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetFirstName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetLastName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetNickname() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetEMail() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetCountry() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetDiscordUserName() {
		return memory.read<struct FString>(m_addr + 128);
	}
	int32_t GetHelmetTemplateKey() {
		return memory.read<int32_t>(m_addr + 144);
	}
	int32_t GetHelmetBaseColor() {
		return memory.read<int32_t>(m_addr + 148);
	}
	int32_t GetHelmetDetailColor() {
		return memory.read<int32_t>(m_addr + 152);
	}
	char GetHelmetMaterialType() {
		return memory.read<char>(m_addr + 156);
	}
	int32_t GetHelmetGlassColor() {
		return memory.read<int32_t>(m_addr + 160);
	}
	struct FName GetHelmetGlassMaterialType() {
		return memory.read<struct FName>(m_addr + 164);
	}
	int32_t GetGlovesTemplateKey() {
		return memory.read<int32_t>(m_addr + 172);
	}
	int32_t GetSuitTemplateKey() {
		return memory.read<int32_t>(m_addr + 176);
	}
	int32_t GetSuitDetailColor1() {
		return memory.read<int32_t>(m_addr + 180);
	}
	int32_t GetSuitDetailColor2() {
		return memory.read<int32_t>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTextCommitedInternal
{
public:
	FOnTextCommitedInternal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetcommitType() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FABSSettings
{
public:
	FABSSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinSlipRatio() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxSlipRatio() {
		return memory.read<float>(m_addr + 4);
	}
	float GetReferenceSlipAngleDEG() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCutLevel() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaxTorqueVariation() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDrawTrackSplines
{
public:
	FSetDrawTrackSplines(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSecondaryColor
{
public:
	FSetSecondaryColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FKsonMatchmakingParameters
{
public:
	FKsonMatchmakingParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetIsSafetyRatingEnabled() {
		return memory.read<char>(m_addr + 0);
	}
	char GetIsRacecraftRatingEnabled() {
		return memory.read<char>(m_addr + 1);
	}
	char GetIsRatingMPOnly() {
		return memory.read<char>(m_addr + 2);
	}
	char GetIsStatisticsMPOnly() {
		return memory.read<char>(m_addr + 3);
	}
	float GetWeightCleanServers() {
		return memory.read<float>(m_addr + 4);
	}
	float GetWeightCompetition() {
		return memory.read<float>(m_addr + 8);
	}
	float GetWeightActivity() {
		return memory.read<float>(m_addr + 12);
	}
	float GetWeightFriends() {
		return memory.read<float>(m_addr + 16);
	}
	float GetWeightPing() {
		return memory.read<float>(m_addr + 20);
	}
	float GetWeightNightDriving() {
		return memory.read<float>(m_addr + 24);
	}
	float GetWeightRainDriving() {
		return memory.read<float>(m_addr + 28);
	}
	int32_t GetTargetDriverCount() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetLobbyPingCount() {
		return memory.read<int32_t>(m_addr + 36);
	}
	struct TMap<int32_t, float> GetTrackPreferenceByTrackId() {
		return memory.read<struct TMap<int32_t, float>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrollToItem
{
public:
	FScrollToItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UServerInfoItem GetserverEntry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UServerInfoItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_track
{
public:
	Facc_track(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Gettrack_name() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesHotlapEntry
{
public:
	FOnlineServicesHotlapEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRank() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetSteamId() {
		return memory.read<struct FString>(m_addr + 24);
	}
	enum class EDriverCategory GetFIADriverCategory() {
		return memory.read<enum class EDriverCategory>(m_addr + 40);
	}
	enum class EKunosDriverCategory GetKunosDriverCategory() {
		return memory.read<enum class EKunosDriverCategory>(m_addr + 41);
	}
	float GetWetness() {
		return memory.read<float>(m_addr + 44);
	}
	char GetCarModel() {
		return memory.read<char>(m_addr + 48);
	}
	int32_t GetLaps() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetLapTime() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct TArray<int32_t> GetSectors() {
		return memory.read<struct TArray<int32_t>>(m_addr + 64);
	}
	struct TArray<bool> GetIsRecordSectors() {
		return memory.read<struct TArray<bool>>(m_addr + 80);
	}
	int32_t GetDeltaToRecord() {
		return memory.read<int32_t>(m_addr + 96);
	}
	int32_t GetDeltaLapsToRecord() {
		return memory.read<int32_t>(m_addr + 100);
	}
	int32_t GetDeltaToDriver() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetDeltaLapsToDriver() {
		return memory.read<int32_t>(m_addr + 108);
	}
	int32_t GetBoPAdjustment() {
		return memory.read<int32_t>(m_addr + 112);
	}
	struct FDateTime GetCreatedOnUtc() {
		return memory.read<struct FDateTime>(m_addr + 120);
	}
	bool GetIsCurrentUser() {
		return memory.read<bool>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FHighlightEventsData
{
public:
	FHighlightEventsData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHighLightsEventType GetEventType() {
		return memory.read<enum class EHighLightsEventType>(m_addr + 8);
	}
	int32_t GetWeigth() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetmaxPresence() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GettimeBefore() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GettimeAfter() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetplayerCarFilterEnabled() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FRimMaterialType
{
public:
	FRimMaterialType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetMaterialName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	float GetRoughness() {
		return memory.read<float>(m_addr + 32);
	}
	float GetMetallic() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FInputDeviceObject
{
public:
	FInputDeviceObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetDeviceGuid() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetDeviceIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetDeviceObjectIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	enum class EDeviceInputObjectType GetObjectType() {
		return memory.read<enum class EDeviceInputObjectType>(m_addr + 16);
	}
	float GetNewValue() {
		return memory.read<float>(m_addr + 20);
	}
	float GetOldValue() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetOptions
{
public:
	FResetOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGroup() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool Getinclude_triple_screen() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetZeroPaddingFromRaceNumber
{
public:
	FGetZeroPaddingFromRaceNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetpaddedNumber() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDigitalDisplayTimeTextBlock
{
public:
	FCarDigitalDisplayTimeTextBlock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetPages() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 16);
	}
	enum class ECarDigitalDisplayType GetValueType() {
		return memory.read<enum class ECarDigitalDisplayType>(m_addr + 32);
	}
	char GetHoursDigits() {
		return memory.read<char>(m_addr + 33);
	}
	char GetMinutesDigits() {
		return memory.read<char>(m_addr + 34);
	}
	char GetSecondsDigits() {
		return memory.read<char>(m_addr + 35);
	}
	char GetMillisecondsDigits() {
		return memory.read<char>(m_addr + 36);
	}
	bool GetbShowPlusSign() {
		return memory.read<bool>(m_addr + 37);
	}
	int32_t GetMinimumValueMs() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetMaximumValueMs() {
		return memory.read<int32_t>(m_addr + 44);
	}
	bool GetbShowLastLapOnLapEvent() {
		return memory.read<bool>(m_addr + 48);
	}
	float GetTimeAfterOnLap() {
		return memory.read<float>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRatingItemCollapsedAnimationFinished__DelegateSignature
{
public:
	FRaceRatingItemCollapsedAnimationFinished__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetratingIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReverseAnimation() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetPlayerLockControlsTimeMs
{
public:
	FgetPlayerLockControlsTimeMs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGroupStatisticsBy
{
public:
	FGroupStatisticsBy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class KsonDriverStatisticSummaryTypeEnum GetFilter() {
		return memory.read<enum class KsonDriverStatisticSummaryTypeEnum>(m_addr + 0);
	}
	struct TArray<struct FOnlineServicesDriverStatisticsSet> Gettrack_car_sets() {
		return memory.read<struct TArray<struct FOnlineServicesDriverStatisticsSet>>(m_addr + 8);
	}
	int32_t Gettrack_id() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t Getcar_model() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct TArray<struct FOnlineServicesDriverStatisticsSet> GetReturnValue() {
		return memory.read<struct TArray<struct FOnlineServicesDriverStatisticsSet>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_DOF2
{
public:
	Facc_DOF2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFOV() {
		return memory.read<float>(m_addr + 0);
	}
	float Getfstop() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinFStop() {
		return memory.read<float>(m_addr + 8);
	}
	float GetnumBlades() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 16);
	}
	float GetblurRadius() {
		return memory.read<float>(m_addr + 20);
	}
	float GetblurRadiusHalf() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FChatMessage
{
public:
	FChatMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDateTime GetclientTimeStamp() {
		return memory.read<struct FDateTime>(m_addr + 0);
	}
	struct FText GetsenderName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct FText GetmsgText() {
		return memory.read<struct FText>(m_addr + 32);
	}
	struct FLinearColor GethighlightColor() {
		return memory.read<struct FLinearColor>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNationalitiesSorted
{
public:
	FGetNationalitiesSorted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNationality> GetReturnValue() {
		return memory.read<struct TArray<struct FNationality>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInternalMeshComponent
{
public:
	FGetInternalMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEndLoadingScreen
{
public:
	FEndLoadingScreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAnimationEvent
{
public:
	FOnAnimationEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarAnimation GetCarAnimationType() {
		return memory.read<enum class ECarAnimation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesMPMatchmakingResponse
{
public:
	FOnlineServicesMPMatchmakingResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRequestNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FOnlineServicesMPServerInfo> GetSortedMatchmakingResults() {
		return memory.read<struct TArray<struct FOnlineServicesMPServerInfo>>(m_addr + 8);
	}
	struct TMap<int32_t, char> GetTrackId2UserTrackMedals() {
		return memory.read<struct TMap<int32_t, char>>(m_addr + 24);
	}
	int32_t GetUserSafetyRating() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetUserRacecraftRating() {
		return memory.read<int32_t>(m_addr + 108);
	}
	int32_t GetUserCompetitionRating() {
		return memory.read<int32_t>(m_addr + 112);
	}
	struct FOnlineServicesMPQuickjoinPanelInfo GetquickjoinInfo() {
		return memory.read<struct FOnlineServicesMPQuickjoinPanelInfo>(m_addr + 116);
	}
	struct FOnlineServicesCPInvitationState GetcpInvitationState() {
		return memory.read<struct FOnlineServicesCPInvitationState>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLeaderboardCarLapsResponse
{
public:
	FOnLeaderboardCarLapsResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLeaderboardCarLapsResponse Getresponse() {
		return memory.read<struct FLeaderboardCarLapsResponse>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveSeasonGuiGameMode
{
public:
	FGetActiveSeasonGuiGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiGameModes GetReturnValue() {
		return memory.read<enum class EGuiGameModes>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraOptionsEA
{
public:
	FCameraOptionsEA(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class Facc_SaveVideoPreset
{
public:
	Facc_SaveVideoPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChatMessageReceived__DelegateSignature
{
public:
	FChatMessageReceived__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChatMessage GetchatMsg() {
		return memory.read<struct FChatMessage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraType
{
public:
	FCameraType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMainCameraMode Getmode() {
		return memory.read<enum class EMainCameraMode>(m_addr + 0);
	}
	int32_t GetsubMode() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindCarLocationManager
{
public:
	FFindCarLocationManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}
	struct AAcCarLocationManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AAcCarLocationManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGraphSettings
{
public:
	FGraphSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetMin() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetMax() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	float GetScaleY() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetNSamples() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetnGraphs() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMainCameraMode
{
public:
	FGetMainCameraMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMainCameraMode GetReturnValue() {
		return memory.read<enum class EMainCameraMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKSONLeaderboardData
{
public:
	FOnKSONLeaderboardData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesHotlapUpdate GetrankUpdate() {
		return memory.read<struct FOnlineServicesHotlapUpdate>(m_addr + 0);
	}
	struct TArray<struct FOnlineServicesHotlapEntry> Getentries() {
		return memory.read<struct TArray<struct FOnlineServicesHotlapEntry>>(m_addr + 64);
	}
	bool GetisDriverCarClass() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FNewCommsMessage__DelegateSignature
{
public:
	FNewCommsMessage__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommsMessage GetMessage() {
		return memory.read<struct FCommsMessage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisChampOver
{
public:
	FisChampOver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusedPositionChanged
{
public:
	FOnFocusedPositionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPosition() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLedInstance
{
public:
	FLedInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetLedIndex() {
		return memory.read<char>(m_addr + 0);
	}
	float GetPhysicsValueOn() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetIsReversed() {
		return memory.read<bool>(m_addr + 24);
	}
	float GetTimeOn() {
		return memory.read<float>(m_addr + 36);
	}
	struct FLinearColor GetColorOn() {
		return memory.read<struct FLinearColor>(m_addr + 40);
	}
	float GetValueOn() {
		return memory.read<float>(m_addr + 56);
	}
	float GetTimeOff() {
		return memory.read<float>(m_addr + 60);
	}
	struct FLinearColor GetColorOff() {
		return memory.read<struct FLinearColor>(m_addr + 64);
	}
	float GetValueOff() {
		return memory.read<float>(m_addr + 80);
	}
	bool GetIgnoreNone() {
		return memory.read<bool>(m_addr + 84);
	}
	struct FLinearColor GetColorNone() {
		return memory.read<struct FLinearColor>(m_addr + 88);
	}
	float GetValueNone() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeTableItemForward__DelegateSignature
{
public:
	FTimeTableItemForward__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTimeTableItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTimeTableItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllPanelsVisible
{
public:
	FGetAllPanelsVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetTrackStatusForUI
{
public:
	FgetTrackStatusForUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTrackStatus GetReturnValue() {
		return memory.read<struct FTrackStatus>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarInfoJson
{
public:
	FCarInfoJson(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCarGuid() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetTeamGuid() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetRaceNumber() {
		return memory.read<int32_t>(m_addr + 16);
	}
	char GetRaceNumberPadding() {
		return memory.read<char>(m_addr + 20);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 21);
	}
	enum class ECupCategory GetCupCategory() {
		return memory.read<enum class ECupCategory>(m_addr + 22);
	}
	enum class ELicenseType GetLicenseType() {
		return memory.read<enum class ELicenseType>(m_addr + 23);
	}
	struct FString GetTeamName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 40);
	}
	struct FString GetDisplayName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetCompetitorName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	enum class ENationality GetCompetitorNationality() {
		return memory.read<enum class ENationality>(m_addr + 80);
	}
	char GetTeamTemplateKey() {
		return memory.read<char>(m_addr + 81);
	}
	char GetAuxLightKey() {
		return memory.read<char>(m_addr + 82);
	}
	int32_t GetAuxLightColor() {
		return memory.read<int32_t>(m_addr + 84);
	}
	char GetSkinTemplateKey() {
		return memory.read<char>(m_addr + 88);
	}
	struct FString GetCustomSkinName() {
		return memory.read<struct FString>(m_addr + 96);
	}
	int32_t GetSkinColor1Id() {
		return memory.read<int32_t>(m_addr + 112);
	}
	struct FName GetSkinMaterialType1() {
		return memory.read<struct FName>(m_addr + 116);
	}
	int32_t GetSkinColor2Id() {
		return memory.read<int32_t>(m_addr + 124);
	}
	struct FName GetSkinMaterialType2() {
		return memory.read<struct FName>(m_addr + 128);
	}
	int32_t GetSkinColor3Id() {
		return memory.read<int32_t>(m_addr + 136);
	}
	struct FName GetSkinMaterialType3() {
		return memory.read<struct FName>(m_addr + 140);
	}
	char GetSponsorId() {
		return memory.read<char>(m_addr + 148);
	}
	int32_t GetRimColor1Id() {
		return memory.read<int32_t>(m_addr + 152);
	}
	struct FName GetRimMaterialType1() {
		return memory.read<struct FName>(m_addr + 156);
	}
	int32_t GetRimColor2Id() {
		return memory.read<int32_t>(m_addr + 164);
	}
	struct FName GetRimMaterialType2() {
		return memory.read<struct FName>(m_addr + 168);
	}
	char GetBannerTemplateKey() {
		return memory.read<char>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadUserPreset
{
public:
	FLoadUserPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FCommandConfiguration GetConfiguration() {
		return memory.read<struct FCommandConfiguration>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveAxisBinding
{
public:
	FRemoveAxisBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputAxis GetBindingToRemove() {
		return memory.read<struct FInputAxis>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampSettings
{
public:
	FChampSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetopponentNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	char GetglobalAISkillValue() {
		return memory.read<char>(m_addr + 4);
	}
	char GetglobalAggroValue() {
		return memory.read<char>(m_addr + 5);
	}
	float GetdamageRate() {
		return memory.read<float>(m_addr + 8);
	}
	bool GettyreFuelWear() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetPenalties() {
		return memory.read<bool>(m_addr + 13);
	}
	bool GetunlimitedTyreSet() {
		return memory.read<bool>(m_addr + 14);
	}
	bool GetbrakeFading() {
		return memory.read<bool>(m_addr + 15);
	}
	bool GetfastRollingStart() {
		return memory.read<bool>(m_addr + 16);
	}
	int32_t GetuseNewGenGT3() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct TMap<enum class ECarGroup, float> GetcarGroups() {
		return memory.read<struct TMap<enum class ECarGroup, float>>(m_addr + 24);
	}
	struct TArray<struct FName> Getcircuits() {
		return memory.read<struct TArray<struct FName>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpecialEventPreset
{
public:
	FSpecialEventPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEventSortOrder() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSeason() {
		return memory.read<int32_t>(m_addr + 12);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 16);
	}
	bool GetDisplaySeasonAndID() {
		return memory.read<bool>(m_addr + 17);
	}
	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 24);
	}
	struct FText GetInfoText() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FText GetLoadingInfoLine() {
		return memory.read<struct FText>(m_addr + 72);
	}
	struct FText GetBestLapDriverName() {
		return memory.read<struct FText>(m_addr + 96);
	}
	struct FText GetBestLapTime() {
		return memory.read<struct FText>(m_addr + 120);
	}
	struct TSoftObjectPtr<UTexture2D> GetPoster() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 144);
	}
	struct FRaceSpecialEventData GetEventDetails() {
		return memory.read<struct FRaceSpecialEventData>(m_addr + 184);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 552);
	}
	bool GetLockedSetup() {
		return memory.read<bool>(m_addr + 568);
	}
	bool GetNeedsKsonVerifcation() {
		return memory.read<bool>(m_addr + 569);
	}
	enum class EContentType GetContentId() {
		return memory.read<enum class EContentType>(m_addr + 570);
	}

private:
	std::uint64_t m_addr = 0;
};class FKsonMatchmakingOptionsChanged__DelegateSignature
{
public:
	FKsonMatchmakingOptionsChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKsonMatchmakingParameters Getoptions() {
		return memory.read<struct FKsonMatchmakingParameters>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPossession
{
public:
	FSetPossession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetPossess() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopSounds
{
public:
	FStopSounds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getpause_sounds() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommsMessage
{
public:
	FCommsMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetID() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct FText GetMessageText() {
		return memory.read<struct FText>(m_addr + 16);
	}
	struct FString Gettext() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FText GetTranslatedText() {
		return memory.read<struct FText>(m_addr + 56);
	}
	enum class ECommsCategory GetCategory() {
		return memory.read<enum class ECommsCategory>(m_addr + 80);
	}
	enum class ECommsPriority GetPriority() {
		return memory.read<enum class ECommsPriority>(m_addr + 81);
	}
	enum class ECommsContext GetContext() {
		return memory.read<enum class ECommsContext>(m_addr + 82);
	}
	struct FDateTime GetDateCreated() {
		return memory.read<struct FDateTime>(m_addr + 88);
	}
	int32_t GetTimerInSecs() {
		return memory.read<int32_t>(m_addr + 96);
	}
	bool GetIsLocalPlayer() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetRead() {
		return memory.read<bool>(m_addr + 101);
	}
	struct TArray<struct FString> GetArgs() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FCircuitDataEx
{
public:
	FCircuitDataEx(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCircuitName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	int32_t GetYear() {
		return memory.read<int32_t>(m_addr + 24);
	}
	float GetBaseGrip() {
		return memory.read<float>(m_addr + 28);
	}
	struct TArray<struct TSoftObjectPtr<USurfaceData>> Getsurfaces() {
		return memory.read<struct TArray<struct TSoftObjectPtr<USurfaceData>>>(m_addr + 32);
	}
	float GetAltitude() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesDriverStatistics
{
public:
	FOnlineServicesDriverStatistics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRequestNo() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetCarModel() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct TArray<struct FOnlineServicesDriverStatisticsSet> GetTrackCarSets() {
		return memory.read<struct TArray<struct FOnlineServicesDriverStatisticsSet>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCircuitCornerInfo
{
public:
	FCircuitCornerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSplineBrakeHint() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSplineStart() {
		return memory.read<float>(m_addr + 12);
	}
	float GetSplineEnd() {
		return memory.read<float>(m_addr + 16);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 24);
	}
	int32_t GetTurnNumber() {
		return memory.read<int32_t>(m_addr + 40);
	}
	enum class ECircuitSectionCornerType GetCornerType() {
		return memory.read<enum class ECircuitSectionCornerType>(m_addr + 44);
	}
	enum class ECircuitCornerBrakeHint GetBrakeHint() {
		return memory.read<enum class ECircuitCornerBrakeHint>(m_addr + 45);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleRearBrakes
{
public:
	FcycleRearBrakes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisIncreased() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddMessage
{
public:
	FAddMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommsMessage GetMessage() {
		return memory.read<struct FCommsMessage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDelCommsMessage__DelegateSignature
{
public:
	FDelCommsMessage__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetmessageGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsGameWindowFocused
{
public:
	FIsGameWindowFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveMenuState
{
public:
	FSaveMenuState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpotterAudioEventStarted__DelegateSignature
{
public:
	FSpotterAudioEventStarted__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAudioCommsData GetaudioEventType() {
		return memory.read<struct FAudioCommsData>(m_addr + 0);
	}
	int32_t GetaudioEventCounter() {
		return memory.read<int32_t>(m_addr + 208);
	}
	float Getpayload() {
		return memory.read<float>(m_addr + 212);
	}

private:
	std::uint64_t m_addr = 0;
};class FGhostCarOptions
{
public:
	FGhostCarOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetEnabled() {
		return memory.read<char>(m_addr + 0);
	}
	char GetUseInPractice() {
		return memory.read<char>(m_addr + 1);
	}
	char GetUseDifferentOpponent() {
		return memory.read<char>(m_addr + 2);
	}
	enum class ECarModelType GetOpponentModelType() {
		return memory.read<enum class ECarModelType>(m_addr + 3);
	}
	char GetUseExperimentalStateColor() {
		return memory.read<char>(m_addr + 4);
	}
	int32_t GetOffsetTimeMS() {
		return memory.read<int32_t>(m_addr + 8);
	}
	char GetGhostQuality() {
		return memory.read<char>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarWiper
{
public:
	FCarWiper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarWiperType GetType() {
		return memory.read<enum class ECarWiperType>(m_addr + 0);
	}
	bool GetStartFromLeft() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetMinVibrationCarSpeed() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxVibrationCarSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetVibrationSpeed() {
		return memory.read<float>(m_addr + 12);
	}
	float GetVibrationMaxAmplitudeSeconds() {
		return memory.read<float>(m_addr + 16);
	}
	float GetGForceFilter() {
		return memory.read<float>(m_addr + 20);
	}
	float GetGForceMaxAmplitudeSeconds() {
		return memory.read<float>(m_addr + 24);
	}
	float GetMinGForce() {
		return memory.read<float>(m_addr + 28);
	}
	float GetMaxGForce() {
		return memory.read<float>(m_addr + 32);
	}
	float GetPosition() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FSimpleColumnChartSelectionChanged__DelegateSignature
{
public:
	FSimpleColumnChartSelectionChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetselectedId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWaterCurves
{
public:
	FGetWaterCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FWaterCurves GetDestination() {
		return memory.read<struct FWaterCurves>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FSteerData
{
public:
	FSteerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSteerLock() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSteerRatio() {
		return memory.read<float>(m_addr + 4);
	}
	float GetLinearSteerRodRatio() {
		return memory.read<float>(m_addr + 8);
	}
	float GetFFMult() {
		return memory.read<float>(m_addr + 12);
	}
	float GetSteerAssist() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddColumn
{
public:
	FAddColumn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetisColumnNavigable() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAudioCommsData
{
public:
	FAudioCommsData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAudioCommsDataType GetCommType() {
		return memory.read<enum class EAudioCommsDataType>(m_addr + 8);
	}
	struct TSoftObjectPtr<UFMODEvent> GetAudioEvent() {
		return memory.read<struct TSoftObjectPtr<UFMODEvent>>(m_addr + 16);
	}
	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 56);
	}
	float GetParameterValue() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetusePositionsAsCondition() {
		return memory.read<bool>(m_addr + 68);
	}
	enum class EAudioCommsLevel GetLevel() {
		return memory.read<enum class EAudioCommsLevel>(m_addr + 69);
	}
	enum class ECommsPriority GetPriority() {
		return memory.read<enum class ECommsPriority>(m_addr + 70);
	}
	enum class ECommsCategory GetCategory() {
		return memory.read<enum class ECommsCategory>(m_addr + 71);
	}
	struct FText GetDisplayText() {
		return memory.read<struct FText>(m_addr + 72);
	}
	int32_t GetDisplayTextTimeInSecs() {
		return memory.read<int32_t>(m_addr + 96);
	}
	enum class EAudioCommsAppearanceHint GetAppearanceHint() {
		return memory.read<enum class EAudioCommsAppearanceHint>(m_addr + 100);
	}
	enum class EAudioCommsGuidCategory GetGuidCategory() {
		return memory.read<enum class EAudioCommsGuidCategory>(m_addr + 101);
	}
	struct TMap<int32_t, struct FText> GetDisplayTextByCondition() {
		return memory.read<struct TMap<int32_t, struct FText>>(m_addr + 104);
	}
	bool GetisPlayerMessage() {
		return memory.read<bool>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetPlayerLockControlsType
{
public:
	FgetPlayerLockControlsType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPlayerLockType GetReturnValue() {
		return memory.read<enum class EPlayerLockType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpotterAudioEventEnded__DelegateSignature
{
public:
	FSpotterAudioEventEnded__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetaudioEventCounter() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDirectInputPreset
{
public:
	FGetDirectInputPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FCommandDevice GetDestination() {
		return memory.read<struct FCommandDevice>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetDirectionLights
{
public:
	FsetDirectionLights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisOn() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetisLeft() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetanimEnable() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FSelectorChanged__DelegateSignature
{
public:
	FSelectorChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGenericSelectorItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGenericSelectorItem(ptr_addr);
	}
	int32_t Getcurrent_index() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t Getcurrent_value() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FResolutionConfirm
{
public:
	FResolutionConfirm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPageBase Getpopup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPageBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerAssists
{
public:
	FCareerAssists(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetautoGear() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetautoClutch() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetstabilityControl() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetautoEngineSwitch() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetautoWiper() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetautoLights() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetautoPitLimiter() {
		return memory.read<bool>(m_addr + 11);
	}
	bool GetautoPitProcedure() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetshowIdealLine() {
		return memory.read<bool>(m_addr + 13);
	}

private:
	std::uint64_t m_addr = 0;
};class FTelemetryModules
{
public:
	FTelemetryModules(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetdebugPhysics() {
		return memory.read<char>(m_addr + 0);
	}
	char GetdebugAI() {
		return memory.read<char>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FPhotomodeSettings
{
public:
	FPhotomodeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetResolutionX() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetResolutionY() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	char GetDOFMethod() {
		return memory.read<char>(m_addr + 8);
	}
	float GetFOVDeg() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDOFFstop() {
		return memory.read<float>(m_addr + 16);
	}
	float GetDOFFocalDistance() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDOFFocalRegion() {
		return memory.read<float>(m_addr + 24);
	}
	float GetDOFNearTransitionRegion() {
		return memory.read<float>(m_addr + 28);
	}
	float GetDOFFarTransitionRegion() {
		return memory.read<float>(m_addr + 32);
	}
	float GetDOFNearBlurSize() {
		return memory.read<float>(m_addr + 36);
	}
	float GetDOFFarBlurSize() {
		return memory.read<float>(m_addr + 40);
	}
	float GetDOFMinFstop() {
		return memory.read<float>(m_addr + 44);
	}
	float GetDOFNumBlades() {
		return memory.read<float>(m_addr + 48);
	}
	float GetDOFBlurRadius() {
		return memory.read<float>(m_addr + 52);
	}
	float GetDOFBlurRadiusHalf() {
		return memory.read<float>(m_addr + 56);
	}
	float GetDOFScale() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplayOptionsChanged__DelegateSignature
{
public:
	FReplayOptionsChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FReplayOptions Getoptions() {
		return memory.read<struct FReplayOptions>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreSuspState
{
public:
	FTyreSuspState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetslipAngle() {
		return memory.read<float>(m_addr + 0);
	}
	float GetslipRatio() {
		return memory.read<float>(m_addr + 4);
	}
	float GetsuspensionTravel() {
		return memory.read<float>(m_addr + 8);
	}
	float GetcoreTemp() {
		return memory.read<float>(m_addr + 12);
	}
	float GetthermalInput() {
		return memory.read<float>(m_addr + 16);
	}
	float Getpressure() {
		return memory.read<float>(m_addr + 20);
	}
	float GetcpTemperature() {
		return memory.read<float>(m_addr + 24);
	}
	float GetRealTimeTempLeft() {
		return memory.read<float>(m_addr + 28);
	}
	float GetRealTimeTempCenter() {
		return memory.read<float>(m_addr + 32);
	}
	float GetRealTimeTempRight() {
		return memory.read<float>(m_addr + 36);
	}
	float GetCamber() {
		return memory.read<float>(m_addr + 40);
	}
	float GetndSlip() {
		return memory.read<float>(m_addr + 44);
	}
	float Getsteer() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FisPodium
{
public:
	FisPodium(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUserOptionsChanged__DelegateSignature
{
public:
	FUserOptionsChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FUserOptions Getoptions() {
		return memory.read<struct FUserOptions>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSessionType
{
public:
	FGetCurrentSessionType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESessionType GetReturnValue() {
		return memory.read<enum class ESessionType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_printChampionshipPointsByTeam
{
public:
	Facc_printChampionshipPointsByTeam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getchamp_type() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getcup_category() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class ECarGroup Getcar_category() {
		return memory.read<enum class ECarGroup>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRatingsDebugCollisionInfo__DelegateSignature
{
public:
	FRaceRatingsDebugCollisionInfo__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRaceRatingCarRelationshipIncident> GetdebugCollisions() {
		return memory.read<struct TArray<struct FRaceRatingCarRelationshipIncident>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplayOptions
{
public:
	FReplayOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReplayQuality() {
		return memory.read<char>(m_addr + 0);
	}
	char GetFarAIReplayQuality() {
		return memory.read<char>(m_addr + 1);
	}
	char GetAutomaticHiglightEnabled() {
		return memory.read<char>(m_addr + 2);
	}
	char GetUseOnlyPlayerCarHighlights() {
		return memory.read<char>(m_addr + 3);
	}
	char GetHighlightsRecTimeBefore() {
		return memory.read<char>(m_addr + 4);
	}
	char GetHighlightsRecTimeAfter() {
		return memory.read<char>(m_addr + 5);
	}
	int32_t GetMaxTimeReplaySeconds() {
		return memory.read<int32_t>(m_addr + 8);
	}
	char GetAutoSaveEnabled() {
		return memory.read<char>(m_addr + 12);
	}
	int32_t GetAutoSaveRaceNumber() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetAutoSaveQualifyNumber() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetAutoSaveOthersNumber() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetAutoSaveMinTimeSeconds() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSaveHighlights
{
public:
	FOnSaveHighlights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetResultCode() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUserOptions
{
public:
	FUserOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHUDOptions GetHUD() {
		return memory.read<struct FHUDOptions>(m_addr + 0);
	}
	struct FCameraOptionsEA GetCameraEA() {
		return memory.read<struct FCameraOptionsEA>(m_addr + 192);
	}
	struct FCameraOptions GetCamera() {
		return memory.read<struct FCameraOptions>(m_addr + 193);
	}
	struct FGhostCarOptions GetGhostCar() {
		return memory.read<struct FGhostCarOptions>(m_addr + 196);
	}
	struct FReplayOptions Getreplay() {
		return memory.read<struct FReplayOptions>(m_addr + 212);
	}
	struct FKsonMatchmakingParameters GetMatchmakingParameters() {
		return memory.read<struct FKsonMatchmakingParameters>(m_addr + 248);
	}
	struct FModuleEnabler GetModuleEnabler() {
		return memory.read<struct FModuleEnabler>(m_addr + 368);
	}
	struct FServerListOptions GetServerList() {
		return memory.read<struct FServerListOptions>(m_addr + 384);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampFullLeaderboard
{
public:
	FChampFullLeaderboard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EChampType, struct FChampLeaderboard> Getleads() {
		return memory.read<struct TMap<enum class EChampType, struct FChampLeaderboard>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHitAudio
{
public:
	FHitAudio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FPrintTextToLog
{
public:
	FPrintTextToLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Getlog_message() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayerCarCornerSectionCompleted__DelegateSignature
{
public:
	FPlayerCarCornerSectionCompleted__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getsection_index() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesCompetitionRatingEntry
{
public:
	FOnlineServicesCompetitionRatingEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCompetitionEventId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetPlayerCompetitionRating() {
		return memory.read<float>(m_addr + 4);
	}
	int32_t GetPlayerCompetitionElo() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetPlayerFinalPosition() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetDriversTotal() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerListOptions
{
public:
	FServerListOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLeagueServerIP() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FModuleEnabler
{
public:
	FModuleEnabler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetEnableAudio() {
		return memory.read<char>(m_addr + 0);
	}
	char GetEnableSpotterAudio() {
		return memory.read<char>(m_addr + 1);
	}
	char GetEnableSpotterAudioAndText() {
		return memory.read<char>(m_addr + 2);
	}
	char GetEnableAmbientSounds() {
		return memory.read<char>(m_addr + 3);
	}
	char GetEnableCollisionSounds() {
		return memory.read<char>(m_addr + 4);
	}
	char GetEnableRayCastAudio() {
		return memory.read<char>(m_addr + 5);
	}
	char GetEnableHFAudio() {
		return memory.read<char>(m_addr + 6);
	}
	char GetEnableOnlineServices() {
		return memory.read<char>(m_addr + 7);
	}
	char GetEnableAudioDriverSelection() {
		return memory.read<char>(m_addr + 8);
	}
	char GetEnableSparks() {
		return memory.read<char>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FDownshiftProtectionData
{
public:
	FDownshiftProtectionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsActive() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetIsDebug() {
		return memory.read<bool>(m_addr + 1);
	}
	int32_t GetOverrev() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetLockN() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasHud
{
public:
	FHasHud(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAcPanelMouseEvent__DelegateSignature
{
public:
	FOnAcPanelMouseEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPanelBase Getpanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPanelBase(ptr_addr);
	}
	bool Getmouse_over() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraOptions
{
public:
	FCameraOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetNothingYet() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyrePressureData
{
public:
	FTyrePressureData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPressureFlexGain() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRollingResistanceGain() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRollingHeatGain() {
		return memory.read<float>(m_addr + 8);
	}
	float GetGainD() {
		return memory.read<float>(m_addr + 12);
	}
	float GetIdealPressure() {
		return memory.read<float>(m_addr + 16);
	}
	float GetPressureReference() {
		return memory.read<float>(m_addr + 20);
	}
	struct UCurveFloat GetPressureSpringCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetRainLights
{
public:
	FsetRainLights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisOn() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetanimEnable() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FHUDOptions
{
public:
	FHUDOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSafezoneLeft() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSafezoneTop() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetSafezoneRight() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSafezoneBottom() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetDefaultHUDPage() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetNewOverlayHUDPage() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetRaceNotificationsVisible() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetRatingWidgetVisible() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetRatingWidgetPracticeFocus() {
		return memory.read<int32_t>(m_addr + 32);
	}
	bool GetRatingSensitiveWidgetVisibility() {
		return memory.read<bool>(m_addr + 36);
	}
	int32_t GetBasicCarInfoVisible() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetFPSVisible() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetElectronicsVisible() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetHotlapStandingVisible() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetLaptimeInfo01Visible() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetLeaderboardVisible() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetTrackMapVisible() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetRaceDirectorInvestigationVisible() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetRaceRealtimeStandingVisible() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetRaceStandingVisible() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetRadarVisible() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetSessionInfoVisible() {
		return memory.read<int32_t>(m_addr + 84);
	}
	int32_t GetTyreTemps01Visible() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetTimeLeftWidgetVisible() {
		return memory.read<int32_t>(m_addr + 92);
	}
	int32_t GetWrongWayVisible() {
		return memory.read<int32_t>(m_addr + 96);
	}
	int32_t GetVirtualMirrorVisible() {
		return memory.read<int32_t>(m_addr + 100);
	}
	int32_t GetServerStatsVisible() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetProximityIndicatorsVisible() {
		return memory.read<int32_t>(m_addr + 108);
	}
	int32_t GetUseMPH() {
		return memory.read<int32_t>(m_addr + 112);
	}
	int32_t GetGreenLightsVisible() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetShowDriverNamePlates() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetChatPopupOnMessage() {
		return memory.read<int32_t>(m_addr + 124);
	}
	int32_t GetChatMaxMessageCount() {
		return memory.read<int32_t>(m_addr + 128);
	}
	int32_t GetChatShowTimestamps() {
		return memory.read<int32_t>(m_addr + 132);
	}
	float GetChatFadeoutSeconds() {
		return memory.read<float>(m_addr + 136);
	}
	int32_t GetCommunicationPanelVisible() {
		return memory.read<int32_t>(m_addr + 140);
	}
	int32_t GetCommunicationPanelMinPriority() {
		return memory.read<int32_t>(m_addr + 144);
	}
	int32_t GetCommunicationPanelMaxVisibleTotal() {
		return memory.read<int32_t>(m_addr + 148);
	}
	int32_t GetCommunicationPanelMaxVisibleSticky() {
		return memory.read<int32_t>(m_addr + 152);
	}
	int32_t GetCommunicationPanelMaxVisibleNormal() {
		return memory.read<int32_t>(m_addr + 156);
	}
	int32_t GetCommunicationPanelInCenter() {
		return memory.read<int32_t>(m_addr + 160);
	}
	float GetOverallHUDScale() {
		return memory.read<float>(m_addr + 164);
	}
	int32_t GetPitInfoAlwaysVisible() {
		return memory.read<int32_t>(m_addr + 168);
	}
	int32_t GetLightIndicators() {
		return memory.read<int32_t>(m_addr + 172);
	}
	int32_t GetCameraSetNameLabel() {
		return memory.read<int32_t>(m_addr + 176);
	}
	int32_t GetLastMfdScreen() {
		return memory.read<int32_t>(m_addr + 180);
	}
	bool GetAutoSwitchPitMFD() {
		return memory.read<bool>(m_addr + 184);
	}
	int32_t GetRealtimeStandingPitFilter() {
		return memory.read<int32_t>(m_addr + 188);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiSeasonRaceEventData
{
public:
	FGuiSeasonRaceEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EGuiGameModes, struct FGuiRaceEventData> GetRaceEventData() {
		return memory.read<struct TMap<enum class EGuiGameModes, struct FGuiRaceEventData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampLeaderboardLine
{
public:
	FChampLeaderboardLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarInfo GetCarInfo() {
		return memory.read<struct FCarInfo>(m_addr + 0);
	}
	float GetPoints() {
		return memory.read<float>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpeedMPH
{
public:
	FGetSpeedMPH(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitItemAxis
{
public:
	FInitItemAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControllerOptionsPage GetP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControllerOptionsPage(ptr_addr);
	}
	enum class EControllerAxisType Get_axisType() {
		return memory.read<enum class EControllerAxisType>(m_addr + 8);
	}
	bool Get_bIsUI() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPodiumEvent__DelegateSignature
{
public:
	FOnPodiumEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPodiumEvent GetpodiumEvent() {
		return memory.read<enum class EPodiumEvent>(m_addr + 0);
	}
	enum class EPodiumAnim GetpodiumAnim() {
		return memory.read<enum class EPodiumAnim>(m_addr + 1);
	}
	int32_t GetpodiumPosition() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackName
{
public:
	FGetTrackName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMultipleHelpText
{
public:
	FMultipleHelpText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FText> Gettexts() {
		return memory.read<struct TArray<struct FText>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHUDOptionsChanged__DelegateSignature
{
public:
	FHUDOptionsChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHUDOptions Getoptions() {
		return memory.read<struct FHUDOptions>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FModuleEnablerChanged__DelegateSignature
{
public:
	FModuleEnablerChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModuleEnabler Getoptions() {
		return memory.read<struct FModuleEnabler>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSkinMaterial
{
public:
	FSkinMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UMaterialInstance GetMaterialInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGamePlatformServicesAccountDataChanged__DelegateSignature
{
public:
	FGamePlatformServicesAccountDataChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGamePlatformUserAccountData Getaccount() {
		return memory.read<struct FGamePlatformUserAccountData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeTextBlockVisibilityByCanvas
{
public:
	FChangeTextBlockVisibilityByCanvas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCanvasPanel GetCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCanvasPanel(ptr_addr);
	}
	enum class ESlateVisibility GetValue() {
		return memory.read<enum class ESlateVisibility>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetRecentChatMessages
{
public:
	FgetRecentChatMessages(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChatMessage> GetReturnValue() {
		return memory.read<struct TArray<struct FChatMessage>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCommandConfiguration
{
public:
	FGetCommandConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandConfiguration GetReturnValue() {
		return memory.read<struct FCommandConfiguration>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCarLocationChange__DelegateSignature
{
public:
	FOnCarLocationChange__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarLocation GetLocation() {
		return memory.read<enum class ECarLocation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCommonGameModeText
{
public:
	FGetCommonGameModeText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiGameModes Getgame_mode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIconTemplate
{
public:
	FGetIconTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FGuiIconTemplate GetDestination() {
		return memory.read<struct FGuiIconTemplate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSkinMaterialTypes
{
public:
	FgetSkinMaterialTypes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSkinMaterialType> GetReturnValue() {
		return memory.read<struct TArray<struct FSkinMaterialType>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWidget__DelegateSignature
{
public:
	FGetWidget__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarInfoAndNameBySeasonAndRaceNumber
{
public:
	FGetCarInfoAndNameBySeasonAndRaceNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	int32_t GetRaceNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class ERaceEventType GetraceType() {
		return memory.read<enum class ERaceEventType>(m_addr + 8);
	}
	struct FCarInfo GetDestination() {
		return memory.read<struct FCarInfo>(m_addr + 16);
	}
	struct FName GetDestinationName() {
		return memory.read<struct FName>(m_addr + 240);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};class FARBData
{
public:
	FARBData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetK() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAcSeasonChanged__DelegateSignature
{
public:
	FAcSeasonChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getnew_season() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTemperature
{
public:
	FGetTemperature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarGroupToContentId
{
public:
	FCarGroupToContentId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup Getcar_group() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}
	enum class EContentType GetReturnValue() {
		return memory.read<enum class EContentType>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPageType
{
public:
	FGetCurrentPageType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarDigitalDisplayPages GetReturnValue() {
		return memory.read<enum class ECarDigitalDisplayPages>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarInfo
{
public:
	FCarInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCarGuid() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetTeamGuid() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetRaceNumber() {
		return memory.read<int32_t>(m_addr + 16);
	}
	char GetRaceNumberPadding() {
		return memory.read<char>(m_addr + 20);
	}
	bool GetuseEnduranceKit() {
		return memory.read<bool>(m_addr + 21);
	}
	bool GetisPlayerCar() {
		return memory.read<bool>(m_addr + 22);
	}
	bool GetisCustom() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbUsable() {
		return memory.read<bool>(m_addr + 25);
	}
	bool GetisMP() {
		return memory.read<bool>(m_addr + 26);
	}
	bool GetSprintCupValid() {
		return memory.read<bool>(m_addr + 27);
	}
	bool GetEnduranceCupValid() {
		return memory.read<bool>(m_addr + 28);
	}
	bool GetFullCupValid() {
		return memory.read<bool>(m_addr + 29);
	}
	bool GetcanSelectOfficialTemplate() {
		return memory.read<bool>(m_addr + 30);
	}
	bool GetcanSelectCustomTemplate() {
		return memory.read<bool>(m_addr + 31);
	}
	bool GetallowAsOpponentInFreeModes() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetallowAsOpponentInFreeSeason() {
		return memory.read<bool>(m_addr + 33);
	}
	struct TArray<enum class ERaceEventType> GetCarRaceEventType() {
		return memory.read<struct TArray<enum class ERaceEventType>>(m_addr + 40);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 56);
	}
	enum class ECupCategory GetCupCategory() {
		return memory.read<enum class ECupCategory>(m_addr + 57);
	}
	enum class ELicenseType GetLicenseType() {
		return memory.read<enum class ELicenseType>(m_addr + 58);
	}
	struct FString GetTeamName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 80);
	}
	struct FString GetDisplayName() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetCompetitorName() {
		return memory.read<struct FString>(m_addr + 104);
	}
	enum class ENationality GetCompetitorNationality() {
		return memory.read<enum class ENationality>(m_addr + 120);
	}
	char GetTeamTemplateKey() {
		return memory.read<char>(m_addr + 121);
	}
	char GetAuxLightKey() {
		return memory.read<char>(m_addr + 122);
	}
	int32_t GetAuxLightColor() {
		return memory.read<int32_t>(m_addr + 124);
	}
	char GetSkinTemplateKey() {
		return memory.read<char>(m_addr + 128);
	}
	struct FString GetCustomSkinName() {
		return memory.read<struct FString>(m_addr + 136);
	}
	int32_t GetSkinColor1Id() {
		return memory.read<int32_t>(m_addr + 152);
	}
	struct FName GetSkinMaterialType1() {
		return memory.read<struct FName>(m_addr + 156);
	}
	int32_t GetSkinColor2Id() {
		return memory.read<int32_t>(m_addr + 164);
	}
	struct FName GetSkinMaterialType2() {
		return memory.read<struct FName>(m_addr + 168);
	}
	int32_t GetSkinColor3Id() {
		return memory.read<int32_t>(m_addr + 176);
	}
	struct FName GetSkinMaterialType3() {
		return memory.read<struct FName>(m_addr + 180);
	}
	char GetSponsorId() {
		return memory.read<char>(m_addr + 188);
	}
	int32_t GetRimColor1Id() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct FName GetRimMaterialType1() {
		return memory.read<struct FName>(m_addr + 196);
	}
	int32_t GetRimColor2Id() {
		return memory.read<int32_t>(m_addr + 204);
	}
	struct FName GetRimMaterialType2() {
		return memory.read<struct FName>(m_addr + 208);
	}
	char GetBannerTemplateKey() {
		return memory.read<char>(m_addr + 216);
	}
	enum class EContentType GetContentId() {
		return memory.read<enum class EContentType>(m_addr + 217);
	}
	bool GetIsPriority() {
		return memory.read<bool>(m_addr + 218);
	}

private:
	std::uint64_t m_addr = 0;
};class FLeaderboardResponse
{
public:
	FLeaderboardResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FUIConfiguration
{
public:
	FUIConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTransitionStartLevelTime() {
		return memory.read<float>(m_addr + 0);
	}
	float GetTransitionOtherTime() {
		return memory.read<float>(m_addr + 4);
	}
	char GetDrawHUDDebugVisuals() {
		return memory.read<char>(m_addr + 8);
	}
	char GetChildHudEnabled() {
		return memory.read<char>(m_addr + 9);
	}
	char GetShowElectronicsActivityOnPedals1() {
		return memory.read<char>(m_addr + 10);
	}
	char GetShowGameIntroPages() {
		return memory.read<char>(m_addr + 11);
	}
	char GetSkipCarLoadingForUI() {
		return memory.read<char>(m_addr + 12);
	}
	char GetShowCutEstimates() {
		return memory.read<char>(m_addr + 13);
	}
	char GetShowKsonStatistics() {
		return memory.read<char>(m_addr + 14);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSkinColorsSorted
{
public:
	FgetSkinColorsSorted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSkinColor> Getnormal_colors() {
		return memory.read<struct TArray<struct FSkinColor>>(m_addr + 0);
	}
	struct TArray<struct FSkinColor> Getspecial_colors() {
		return memory.read<struct TArray<struct FSkinColor>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMPCarGroup
{
public:
	FGetMPCarGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getmodel_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	enum class EMPCarGroup GetReturnValue() {
		return memory.read<enum class EMPCarGroup>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPixelDensity
{
public:
	FSetPixelDensity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceGameModeLeaderboardEntryLaps__DelegateSignature
{
public:
	FRaceGameModeLeaderboardEntryLaps__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLeaderboardCarLapsResponse Getresponse() {
		return memory.read<struct FLeaderboardCarLapsResponse>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRatingItemExpandAnimationFinished__DelegateSignature
{
public:
	FRaceRatingItemExpandAnimationFinished__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetratingIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReverseAnimation() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesSteamAchievementEarned__DelegateSignature
{
public:
	FOnlineServicesSteamAchievementEarned__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetachievementId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLeaderboardCarLapsResponse
{
public:
	FLeaderboardCarLapsResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FServerInfoItemFocused__DelegateSignature
{
public:
	FServerInfoItemFocused__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UServerInfoItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UServerInfoItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupLimits
{
public:
	FSetupLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupAeroLimits GetAeroLimits() {
		return memory.read<struct FSetupAeroLimits>(m_addr + 0);
	}
	struct FSetupAlignmentLimits GetAlignmentLimits() {
		return memory.read<struct FSetupAlignmentLimits>(m_addr + 336);
	}
	struct FSetupSuspensionsLimits GetSuspensionLimits() {
		return memory.read<struct FSetupSuspensionsLimits>(m_addr + 952);
	}
	struct FSetupDamperLimits GetDamperLimits() {
		return memory.read<struct FSetupDamperLimits>(m_addr + 1768);
	}
	struct FSetupDifferentialLimits GetDifferentialLimits() {
		return memory.read<struct FSetupDifferentialLimits>(m_addr + 2672);
	}
	struct FSetupTyresLimits GetTyresLimits() {
		return memory.read<struct FSetupTyresLimits>(m_addr + 2728);
	}
	struct FSetupElectronicsLimits GetElectronicsLimits() {
		return memory.read<struct FSetupElectronicsLimits>(m_addr + 3008);
	}
	struct FSetupBrakesLimits GetBrakesLimits() {
		return memory.read<struct FSetupBrakesLimits>(m_addr + 3232);
	}
	struct FSetupStrategyLimits GetStrategyLimits() {
		return memory.read<struct FSetupStrategyLimits>(m_addr + 3512);
	}

private:
	std::uint64_t m_addr = 0;
};class FMultiplayerServerStatsChanged__DelegateSignature
{
public:
	FMultiplayerServerStatsChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMultiplayerServerStats Getserver_stats() {
		return memory.read<struct FMultiplayerServerStats>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWeatherData
{
public:
	FWeatherData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetisRandom() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetisDynamic() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetSeed() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float Getvariability() {
		return memory.read<float>(m_addr + 12);
	}
	float GetambientTemperature() {
		return memory.read<float>(m_addr + 16);
	}
	float GetwindSpeed() {
		return memory.read<float>(m_addr + 20);
	}
	float GetwindDirection() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIcons
{
public:
	FSetIcons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Get_title() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct UTexture2D GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D Getpinkie() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D Getoptional() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeTableItemBackward__DelegateSignature
{
public:
	FTimeTableItemBackward__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTimeTableItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTimeTableItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSkinMaterialType
{
public:
	FGetSkinMaterialType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FSkinMaterialType GetDestination() {
		return memory.read<struct FSkinMaterialType>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRimTemplate
{
public:
	FRimTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTemplateKey() {
		return memory.read<char>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 9);
	}
	bool GetbIsOfficial() {
		return memory.read<bool>(m_addr + 10);
	}
	struct TArray<struct FSkinMaterial> GetStaticRimMaterials() {
		return memory.read<struct TArray<struct FSkinMaterial>>(m_addr + 16);
	}
	struct TArray<struct FSkinMaterial> GetBLurredRimMaterials() {
		return memory.read<struct TArray<struct FSkinMaterial>>(m_addr + 32);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHasKeyboardFocus
{
public:
	FOnHasKeyboardFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeScreenResolution
{
public:
	FChangeScreenResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool Getfullscreen() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerEventData
{
public:
	FCareerEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECareerEventType GetcareerEventType() {
		return memory.read<enum class ECareerEventType>(m_addr + 8);
	}
	enum class ERaceEventType GetEventType() {
		return memory.read<enum class ERaceEventType>(m_addr + 9);
	}
	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 12);
	}
	char GetOpponentCount() {
		return memory.read<char>(m_addr + 20);
	}
	struct FCompetitionList GetCompetitionList() {
		return memory.read<struct FCompetitionList>(m_addr + 24);
	}
	char GetglobalAISkillValueEasy() {
		return memory.read<char>(m_addr + 56);
	}
	char GetglobalAISkillValueNormal() {
		return memory.read<char>(m_addr + 57);
	}
	char GetglobalAISkillValueHard() {
		return memory.read<char>(m_addr + 58);
	}
	char GetglobalAISkillValuePro() {
		return memory.read<char>(m_addr + 59);
	}
	char GetglobalAggroValue() {
		return memory.read<char>(m_addr + 60);
	}
	struct FWeatherStatus GetstartingWeatherStatus() {
		return memory.read<struct FWeatherStatus>(m_addr + 64);
	}
	struct FWeatherData GetstartingWeatherData() {
		return memory.read<struct FWeatherData>(m_addr + 96);
	}
	struct TArray<struct FCareerSessionData> GetsessionsData() {
		return memory.read<struct TArray<struct FCareerSessionData>>(m_addr + 128);
	}
	struct TArray<struct FCareerVictoryCondition> GettestEventVictoryConditions() {
		return memory.read<struct TArray<struct FCareerVictoryCondition>>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FMultiplayerServerStats
{
public:
	FMultiplayerServerStats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetuserPing() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetuserQoS() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetcpuOccupancy() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetcpuOccupancyPeak() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetpingAverage() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetpingMax() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetqosAverage() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetqosMin() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct TArray<struct FText> GetStatsTexts() {
		return memory.read<struct TArray<struct FText>>(m_addr + 32);
	}
	struct TArray<struct FText> GetWarningTexts() {
		return memory.read<struct TArray<struct FText>>(m_addr + 48);
	}
	struct TArray<struct FText> GetErrorTexts() {
		return memory.read<struct TArray<struct FText>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FAITestLogUpdate__DelegateSignature
{
public:
	FAITestLogUpdate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getlog_line() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FABSData
{
public:
	FABSData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsPresent() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EABSChannels GetChannels() {
		return memory.read<enum class EABSChannels>(m_addr + 1);
	}
	float GetFrequencylHZ() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinSpeedKMH() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetDefaultIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct TArray<struct FABSSettings> GetSettings() {
		return memory.read<struct TArray<struct FABSSettings>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FisCupCar
{
public:
	FisCupCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getcar_model_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBestLapTime
{
public:
	FGetBestLapTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLapTimeReference GetReturnValue() {
		return memory.read<struct FLapTimeReference>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupStrategy
{
public:
	FSetupStrategy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFuel() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetnPitStops() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetTyreSet() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetfrontBrakePadCompound() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetrearBrakePadCompound() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<struct FPitStrategy> GetPitStrategy() {
		return memory.read<struct TArray<struct FPitStrategy>>(m_addr + 24);
	}
	float GetFuelPerLap() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAcPanelFocusEvent__DelegateSignature
{
public:
	FOnAcPanelFocusEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPanelBase Getpanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPanelBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUseGamepad
{
public:
	FUseGamepad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMapCapture
{
public:
	FGetMapCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ASceneCapture2D GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ASceneCapture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimedCameraHeadTranslator
{
public:
	FTimedCameraHeadTranslator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDateTime GetTime() {
		return memory.read<struct FDateTime>(m_addr + 0);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampLeaderboardItemFocused__DelegateSignature
{
public:
	FChampLeaderboardItemFocused__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UChampLeaderboardItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UChampLeaderboardItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampLeaderboardItemForward__DelegateSignature
{
public:
	FChampLeaderboardItemForward__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UChampLeaderboardItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UChampLeaderboardItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadReplay
{
public:
	FLoadReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FReplayInfo GetReplayInfo() {
		return memory.read<struct FReplayInfo>(m_addr + 0);
	}
	enum class EReplayStore GetreplayStore() {
		return memory.read<enum class EReplayStore>(m_addr + 72);
	}
	struct UAcPageBase GetcallingPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UAcPageBase(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetIgnitionCar
{
public:
	FsetIgnitionCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}
	bool Getstart_engine_on() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTeamVisibility
{
public:
	FSetTeamVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getvisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCircuitSectionDefinition
{
public:
	FCircuitSectionDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSplineStart() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSplineEnd() {
		return memory.read<float>(m_addr + 12);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 16);
	}
	float GetCCRatingPushAdjustment() {
		return memory.read<float>(m_addr + 32);
	}
	float GetCCRatingOverdriveAdjustment() {
		return memory.read<float>(m_addr + 36);
	}
	bool GetIsCuttable() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetIsCutCanGainNextLapAdvantage() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetNoStrictWarningWhenWet() {
		return memory.read<bool>(m_addr + 42);
	}
	enum class ECircuitSectionCornerType GetCornerType() {
		return memory.read<enum class ECircuitSectionCornerType>(m_addr + 43);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampLeaderboardItemBackward__DelegateSignature
{
public:
	FChampLeaderboardItemBackward__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UChampLeaderboardItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UChampLeaderboardItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdvancedInput
{
public:
	FAdvancedInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGenericInputItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGenericInputItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeTableItemFocused__DelegateSignature
{
public:
	FTimeTableItemFocused__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTimeTableItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTimeTableItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommitTitle
{
public:
	FCommitTitle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupBrakesLimits
{
public:
	FSetupBrakesLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetTorque() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}
	struct FSetupSelectorLimits GetBias() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 56);
	}
	struct FSetupSelectorLimits GetBrakeDucts[2]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 112);
	}
	struct FSetupSelectorLimits Getbrakepads() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceHUDState
{
public:
	FRaceHUDState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACarAvatar GetCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct ACarAvatar(ptr_addr);
	}
	bool GetFocusedCarIsPlayerCar() {
		return memory.read<bool>(m_addr + 136);
	}
	int32_t GetFocusedCarPosition() {
		return memory.read<int32_t>(m_addr + 140);
	}
	int32_t GetFocusedCarPositionAlt() {
		return memory.read<int32_t>(m_addr + 144);
	}
	enum class ECarLocation GetFocusedCarLocation() {
		return memory.read<enum class ECarLocation>(m_addr + 148);
	}
	int32_t GetTotalCarsInLeaderboard() {
		return memory.read<int32_t>(m_addr + 152);
	}
	int32_t GetTotalCarsInLeaderboardAlt() {
		return memory.read<int32_t>(m_addr + 156);
	}
	struct FText GetFocusedCarPositionText() {
		return memory.read<struct FText>(m_addr + 160);
	}
	struct FText GetFocusedCarPositionTextAlt() {
		return memory.read<struct FText>(m_addr + 184);
	}
	bool GetIsSessionMultiCarGroup() {
		return memory.read<bool>(m_addr + 208);
	}
	struct FText GetTotalCarsInLeaderboardText() {
		return memory.read<struct FText>(m_addr + 216);
	}
	struct FText GetTotalCarsInLeaderboardTextAlt() {
		return memory.read<struct FText>(m_addr + 240);
	}
	enum class ECupCategory GetFocusedCarCupCategory() {
		return memory.read<enum class ECupCategory>(m_addr + 264);
	}
	struct FText GetFocusedCarRaceNumber() {
		return memory.read<struct FText>(m_addr + 272);
	}
	struct TArray<struct ACarAvatar> GetActiveCars() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct TArray<struct ACarAvatar>(ptr_addr);
	}
	float GetTimeOfDaySeconds() {
		return memory.read<float>(m_addr + 312);
	}
	float GetDeltaTime() {
		return memory.read<float>(m_addr + 316);
	}
	int32_t GetCurrentSplit() {
		return memory.read<int32_t>(m_addr + 320);
	}
	bool GetIsInPreparationLap() {
		return memory.read<bool>(m_addr + 324);
	}
	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 328);
	}
	bool GetIsLaptimeCurrentValid() {
		return memory.read<bool>(m_addr + 332);
	}
	int32_t GetLaptimeCurrent() {
		return memory.read<int32_t>(m_addr + 336);
	}
	int32_t GetLaptimeBest() {
		return memory.read<int32_t>(m_addr + 340);
	}
	bool GetIsOverallBest() {
		return memory.read<bool>(m_addr + 344);
	}
	int32_t GetLaptimeLast() {
		return memory.read<int32_t>(m_addr + 348);
	}
	int32_t GetTotalLaptimesIncludingPenalty() {
		return memory.read<int32_t>(m_addr + 352);
	}
	int32_t GetTotalSessionPenalty() {
		return memory.read<int32_t>(m_addr + 356);
	}
	int32_t GetTimeLeft() {
		return memory.read<int32_t>(m_addr + 360);
	}
	int32_t GetDeltaLaptime() {
		return memory.read<int32_t>(m_addr + 364);
	}
	int32_t GetDeltaPredictedLaptime() {
		return memory.read<int32_t>(m_addr + 368);
	}
	enum class ERaceSessionPhase GetCurrentSessionPhase() {
		return memory.read<enum class ERaceSessionPhase>(m_addr + 372);
	}
	enum class ESessionType GetCurrentSessionType() {
		return memory.read<enum class ESessionType>(m_addr + 373);
	}
	int32_t GetFormationLapTypeInt() {
		return memory.read<int32_t>(m_addr + 376);
	}
	int32_t GetPhysicsLateCount() {
		return memory.read<int32_t>(m_addr + 380);
	}
	int32_t GetPhysicsBlendCount() {
		return memory.read<int32_t>(m_addr + 384);
	}
	int32_t GetPhysicsCPUOccupancy() {
		return memory.read<int32_t>(m_addr + 388);
	}
	int32_t GetPing() {
		return memory.read<int32_t>(m_addr + 392);
	}
	struct FCircuitInfo GetCircuitInfo() {
		return memory.read<struct FCircuitInfo>(m_addr + 400);
	}
	struct FText GetTrackConditionText() {
		return memory.read<struct FText>(m_addr + 896);
	}
	struct FString GetWithPhysicsXYString() {
		return memory.read<struct FString>(m_addr + 920);
	}
	bool GetIsChatWidgetFocuced() {
		return memory.read<bool>(m_addr + 944);
	}
	int32_t GetPhysicsTime() {
		return memory.read<int32_t>(m_addr + 984);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetClutch
{
public:
	FGetClutch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesRatingDeltaReport__DelegateSignature
{
public:
	FOnlineServicesRatingDeltaReport__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRatingReport GetratingCurrent() {
		return memory.read<struct FRatingReport>(m_addr + 0);
	}
	struct FRatingReport GetdeltaRating() {
		return memory.read<struct FRatingReport>(m_addr + 160);
	}
	bool GetisSessionReference() {
		return memory.read<bool>(m_addr + 320);
	}

private:
	std::uint64_t m_addr = 0;
};class FCheckUserFFDefaultSettings
{
public:
	FCheckUserFFDefaultSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCarName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCircuitInfo
{
public:
	FCircuitInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCircuitName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	int32_t GetCircuitId() {
		return memory.read<int32_t>(m_addr + 24);
	}
	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 28);
	}
	struct FString GetDisplayName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetDisplayNameShort() {
		return memory.read<struct FString>(m_addr + 48);
	}
	char GetPitNumber() {
		return memory.read<char>(m_addr + 64);
	}
	struct TArray<struct FCircuitCornerInfo> GetCornerInfos() {
		return memory.read<struct TArray<struct FCircuitCornerInfo>>(m_addr + 72);
	}
	struct TArray<struct FCircuitSectionDefinition> Getsections() {
		return memory.read<struct TArray<struct FCircuitSectionDefinition>>(m_addr + 88);
	}
	bool GetisPitlaneFixed() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetbIsPolesitterOnLeft() {
		return memory.read<bool>(m_addr + 105);
	}
	char GetCorners() {
		return memory.read<char>(m_addr + 106);
	}
	bool GetisClockWise() {
		return memory.read<bool>(m_addr + 107);
	}
	int32_t GetLength() {
		return memory.read<int32_t>(m_addr + 108);
	}
	struct FText GetInfoText() {
		return memory.read<struct FText>(m_addr + 112);
	}
	struct TSoftObjectPtr<UTexture2D> GetTitleBanner() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 136);
	}
	struct TSoftObjectPtr<UTexture2D> GetSmallMap() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 176);
	}
	struct TSoftObjectPtr<UTexture2D> GetLargeMap() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 216);
	}
	struct TArray<struct TSoftObjectPtr<UTexture2D>> GetDayDryTrackImages() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UTexture2D>>>(m_addr + 256);
	}
	struct TArray<struct TSoftObjectPtr<UTexture2D>> GetNightDryTrackImages() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UTexture2D>>>(m_addr + 272);
	}
	struct TArray<struct TSoftObjectPtr<UTexture2D>> GetDayWetTrackImages() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UTexture2D>>>(m_addr + 288);
	}
	struct TArray<struct TSoftObjectPtr<UTexture2D>> GetNightWetTrackImages() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UTexture2D>>>(m_addr + 304);
	}
	struct TArray<struct TSoftObjectPtr<UTexture2D>> GetDayCloudyTrackImages() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UTexture2D>>>(m_addr + 320);
	}
	struct TArray<struct TSoftObjectPtr<UTexture2D>> GetNightCloudyTrackImages() {
		return memory.read<struct TArray<struct TSoftObjectPtr<UTexture2D>>>(m_addr + 336);
	}
	int32_t GetRealWorldRecord() {
		return memory.read<int32_t>(m_addr + 352);
	}
	struct TMap<enum class ESeasonType, struct FLapRecordInfo> GetRealWorldRecords() {
		return memory.read<struct TMap<enum class ESeasonType, struct FLapRecordInfo>>(m_addr + 360);
	}
	bool GetIsTrackAvailableInUI() {
		return memory.read<bool>(m_addr + 440);
	}
	bool GetIsAvailableOnlyToDevsAndTesters() {
		return memory.read<bool>(m_addr + 441);
	}
	struct UCurveFloat GetHelicamBiasCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 448);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetHelicamFOVCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 456);
		return struct UCurveFloat(ptr_addr);
	}
	enum class EContentType GetContentId() {
		return memory.read<enum class EContentType>(m_addr + 464);
	}
	struct UCurveFloat GetdisplaySunAngleMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 472);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetdisplayCloudMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 480);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetdisplayCloudInfluenceMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 488);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FisReplaySaving
{
public:
	FisReplaySaving(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAcSaveGameHeader
{
public:
	FAcSaveGameHeader(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FDateTime GetcreationDate() {
		return memory.read<struct FDateTime>(m_addr + 24);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 32);
	}
	enum class EGuiGameModes GetGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 33);
	}
	enum class ESessionType GetsessionType() {
		return memory.read<enum class ESessionType>(m_addr + 34);
	}
	int32_t GetsessionRound() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetsessionPhase() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct FString GetTrackName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetcarDisplayName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetTrackDisplayName() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FCarInfo GetCar() {
		return memory.read<struct FCarInfo>(m_addr + 96);
	}
	int32_t GetcurrentPosition() {
		return memory.read<int32_t>(m_addr + 320);
	}
	int32_t GetremainingSessionTime() {
		return memory.read<int32_t>(m_addr + 324);
	}
	int32_t GetLaps() {
		return memory.read<int32_t>(m_addr + 328);
	}
	float GetweatherState() {
		return memory.read<float>(m_addr + 332);
	}
	float GettrackState() {
		return memory.read<float>(m_addr + 336);
	}
	bool GetisCareer() {
		return memory.read<bool>(m_addr + 340);
	}
	bool GetisChamp() {
		return memory.read<bool>(m_addr + 341);
	}

private:
	std::uint64_t m_addr = 0;
};class FLapRecordInfo
{
public:
	FLapRecordInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetDriver() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 8);
	}
	int32_t GetLapTime() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCareerDifficultyText
{
public:
	FgetCareerDifficultyText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDifficultyLevel Getdifficulty() {
		return memory.read<enum class EDifficultyLevel>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnValueChanged
{
public:
	FOnValueChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAcTextInputEvent__DelegateSignature
{
public:
	FAcTextInputEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRatingCarRelationshipIncident
{
public:
	FRaceRatingCarRelationshipIncident(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetOutsideBoundariesValue
{
public:
	FGetOutsideBoundariesValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOnlineServicesConnectionStateChanged__DelegateSignature
{
public:
	FOnOnlineServicesConnectionStateChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOnlineServicesConnectionState GetState() {
		return memory.read<enum class EOnlineServicesConnectionState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOnlineServicesUpdateHotlapRank__DelegateSignature
{
public:
	FOnOnlineServicesUpdateHotlapRank__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesHotlapUpdate GetrankUpdate() {
		return memory.read<struct FOnlineServicesHotlapUpdate>(m_addr + 0);
	}
	struct TArray<struct FOnlineServicesHotlapEntry> Getentries() {
		return memory.read<struct TArray<struct FOnlineServicesHotlapEntry>>(m_addr + 64);
	}
	bool GetisDriverCarClass() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesHotlapUpdate
{
public:
	FOnlineServicesHotlapUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRequestNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EOnlineServicesHotlapUpdateType GetUpdateType() {
		return memory.read<enum class EOnlineServicesHotlapUpdateType>(m_addr + 4);
	}
	struct FString GetCarModel() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetTrackName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	int32_t GetDriverRank() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetTotalDrivers() {
		return memory.read<int32_t>(m_addr + 44);
	}
	char GetDebugCarControlValue() {
		return memory.read<char>(m_addr + 48);
	}
	float GetMinumumWetness() {
		return memory.read<float>(m_addr + 52);
	}
	int32_t GetEventReferenceId() {
		return memory.read<int32_t>(m_addr + 56);
	}
	enum class ESessionType GetLeaderboardType() {
		return memory.read<enum class ESessionType>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiActionCategory
{
public:
	FGuiActionCategory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType GetAction() {
		return memory.read<enum class EControllerActionType>(m_addr + 8);
	}
	enum class EControllerAxisType GetAxis() {
		return memory.read<enum class EControllerAxisType>(m_addr + 9);
	}
	struct FText GetActionText() {
		return memory.read<struct FText>(m_addr + 16);
	}
	char GetCategoryId() {
		return memory.read<char>(m_addr + 40);
	}
	struct FText GetCategoryText() {
		return memory.read<struct FText>(m_addr + 48);
	}
	bool GetbIsUI() {
		return memory.read<bool>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAlwaysShowScrollbarTrack
{
public:
	FSetAlwaysShowScrollbarTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getshow_track() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimeOfDayAs1440
{
public:
	FGetTimeOfDayAs1440(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesLapPerformanceReport__DelegateSignature
{
public:
	FOnlineServicesLapPerformanceReport__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesLapPerformance Getperformance() {
		return memory.read<struct FOnlineServicesLapPerformance>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSurfaceDef
{
public:
	FSurfaceDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESurfaceType GetSurfaceType() {
		return memory.read<enum class ESurfaceType>(m_addr + 16);
	}
	float GetFriction() {
		return memory.read<float>(m_addr + 20);
	}
	float GetFrictionRain() {
		return memory.read<float>(m_addr + 24);
	}
	float GetFrictionRainGamma() {
		return memory.read<float>(m_addr + 28);
	}
	float GetDirtAdditiveK() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetIsValidTrack() {
		return memory.read<bool>(m_addr + 36);
	}
	bool GetIsPitlane() {
		return memory.read<bool>(m_addr + 37);
	}
	float GetSinHeight() {
		return memory.read<float>(m_addr + 40);
	}
	float GetSinlength() {
		return memory.read<float>(m_addr + 44);
	}
	float GetVibration() {
		return memory.read<float>(m_addr + 48);
	}
	float GetVibrationLength() {
		return memory.read<float>(m_addr + 52);
	}
	float GetWearMultiplier() {
		return memory.read<float>(m_addr + 56);
	}
	float GetDamping() {
		return memory.read<float>(m_addr + 60);
	}
	struct FString GetNotes() {
		return memory.read<struct FString>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesLapPerformance
{
public:
	FOnlineServicesLapPerformance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCarControl() {
		return memory.read<float>(m_addr + 0);
	}
	float GetCarControlPushing() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCarControlOverdrive() {
		return memory.read<float>(m_addr + 8);
	}
	float GetConsistencyRatingLastLap() {
		return memory.read<float>(m_addr + 12);
	}
	float GetConsistencyRatingSession() {
		return memory.read<float>(m_addr + 16);
	}
	char GetConsistencyMinorMistakesLastLap() {
		return memory.read<char>(m_addr + 20);
	}
	char GetConsistencyMajorMistakesLastLap() {
		return memory.read<char>(m_addr + 21);
	}
	char GetConsistencyCutsLastLap() {
		return memory.read<char>(m_addr + 22);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPriority
{
public:
	FSetPriority(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInPriority() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampEventData
{
public:
	FChampEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	char GetOpponentCount() {
		return memory.read<char>(m_addr + 16);
	}
	struct TMap<enum class ECarGroup, float> GetcarGroups() {
		return memory.read<struct TMap<enum class ECarGroup, float>>(m_addr + 24);
	}
	struct FName GetentryListRowName() {
		return memory.read<struct FName>(m_addr + 104);
	}
	enum class ERaceEventType GetRaceEventType() {
		return memory.read<enum class ERaceEventType>(m_addr + 112);
	}
	enum class EGuiGameModes GetraceGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 113);
	}
	int32_t GetpracticeDurationS() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetpracticeCount() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetqualifyDurationS() {
		return memory.read<int32_t>(m_addr + 124);
	}
	int32_t GetraceDurationS() {
		return memory.read<int32_t>(m_addr + 128);
	}
	int32_t GetraceCount() {
		return memory.read<int32_t>(m_addr + 132);
	}
	int32_t GetPositionOnGrid() {
		return memory.read<int32_t>(m_addr + 136);
	}
	int32_t GetP1_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 140);
	}
	int32_t GetP1_RaceDay() {
		return memory.read<int32_t>(m_addr + 144);
	}
	bool GetP2_Enabled() {
		return memory.read<bool>(m_addr + 148);
	}
	int32_t GetP2_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 152);
	}
	int32_t GetP2_RaceDay() {
		return memory.read<int32_t>(m_addr + 156);
	}
	int32_t GetQualifyCount() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetQ_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 164);
	}
	int32_t GetQ_RaceDay() {
		return memory.read<int32_t>(m_addr + 168);
	}
	int32_t GetR1_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 172);
	}
	int32_t GetR1_RaceDay() {
		return memory.read<int32_t>(m_addr + 176);
	}
	bool GetR2_Enabled() {
		return memory.read<bool>(m_addr + 180);
	}
	int32_t GetR2_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 184);
	}
	int32_t GetR2_RaceDay() {
		return memory.read<int32_t>(m_addr + 188);
	}
	char GetMandatoryPitStopType() {
		return memory.read<char>(m_addr + 192);
	}
	int32_t GetPitstopTypeData() {
		return memory.read<int32_t>(m_addr + 196);
	}
	bool GetIsRefuelling_Enabled() {
		return memory.read<bool>(m_addr + 200);
	}
	int32_t GetPitWindowLength() {
		return memory.read<int32_t>(m_addr + 204);
	}
	int32_t GetDriverStintLength() {
		return memory.read<int32_t>(m_addr + 208);
	}
	int32_t GetTimeMultiplier() {
		return memory.read<int32_t>(m_addr + 212);
	}
	struct FWeatherStatus GetstartingWeatherStatus() {
		return memory.read<struct FWeatherStatus>(m_addr + 216);
	}
	struct FWeatherData GetstartingWeatherData() {
		return memory.read<struct FWeatherData>(m_addr + 248);
	}
	struct FTrackStatus GetTrackStatus() {
		return memory.read<struct FTrackStatus>(m_addr + 276);
	}
	int32_t GetTyreSetCount() {
		return memory.read<int32_t>(m_addr + 304);
	}
	char GetglobalAISkillValue() {
		return memory.read<char>(m_addr + 308);
	}
	char GetglobalAggroValue() {
		return memory.read<char>(m_addr + 309);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_UpdateActivity
{
public:
	FBP_UpdateActivity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetActive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesDriverSummaryDelegate__DelegateSignature
{
public:
	FOnlineServicesDriverSummaryDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesDriverSummary Getsummary() {
		return memory.read<struct FOnlineServicesDriverSummary>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCarGroupSelected
{
public:
	FOnCarGroupSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesDriverSummary
{
public:
	FOnlineServicesDriverSummary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRequestNo() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetDriverDisplayName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	enum class EDriverCategory GetFIADriverCategory() {
		return memory.read<enum class EDriverCategory>(m_addr + 24);
	}
	enum class EKunosDriverCategory GetKunosDriverCategory() {
		return memory.read<enum class EKunosDriverCategory>(m_addr + 25);
	}
	int32_t GetTotalValue() {
		return memory.read<int32_t>(m_addr + 28);
	}
	float GetTotalTrendIndicator() {
		return memory.read<float>(m_addr + 32);
	}
	struct TArray<struct FOnlineServicesDriverSummarySessionEntry> GetSessionHistory() {
		return memory.read<struct TArray<struct FOnlineServicesDriverSummarySessionEntry>>(m_addr + 40);
	}
	struct TArray<struct FOnlineServicesDriverSummaryRaceSessionEntry> GetRaceSessionHistory() {
		return memory.read<struct TArray<struct FOnlineServicesDriverSummaryRaceSessionEntry>>(m_addr + 56);
	}
	struct TArray<struct FOnlineServicesCompetitionRatingEntry> GetCompetitionHistory() {
		return memory.read<struct TArray<struct FOnlineServicesCompetitionRatingEntry>>(m_addr + 72);
	}
	float GetSafetyRatingPercentage() {
		return memory.read<float>(m_addr + 88);
	}
	float GetTrackCompetencePercentage() {
		return memory.read<float>(m_addr + 92);
	}
	struct FRatingReportTrackCompetence GettrackCompetenceDetail() {
		return memory.read<struct FRatingReportTrackCompetence>(m_addr + 96);
	}
	float GetConsistencyRatingPercentage() {
		return memory.read<float>(m_addr + 200);
	}
	float GetCarControlPercentage() {
		return memory.read<float>(m_addr + 204);
	}
	float GetHotlapRatingPercentage() {
		return memory.read<float>(m_addr + 208);
	}
	struct TArray<struct FOnlineServicesLeaderboardRank> GetLeaderboardRanks() {
		return memory.read<struct TArray<struct FOnlineServicesLeaderboardRank>>(m_addr + 216);
	}
	int32_t GetHighestEloRating() {
		return memory.read<int32_t>(m_addr + 232);
	}
	float GetRacecraftRatingPercentage() {
		return memory.read<float>(m_addr + 236);
	}
	float GetCompetitionPercentage() {
		return memory.read<float>(m_addr + 240);
	}
	struct FOnlineServicesDriverStatistics GetStatistics() {
		return memory.read<struct FOnlineServicesDriverStatistics>(m_addr + 248);
	}
	int32_t GetSafetyRatingValue() {
		return memory.read<int32_t>(m_addr + 280);
	}
	int32_t GetTrackCompetenceValue() {
		return memory.read<int32_t>(m_addr + 284);
	}
	int32_t GetConsistencyRatingValue() {
		return memory.read<int32_t>(m_addr + 288);
	}
	int32_t GetCarControlValue() {
		return memory.read<int32_t>(m_addr + 292);
	}
	int32_t GetHotlapRatingValue() {
		return memory.read<int32_t>(m_addr + 296);
	}
	int32_t GetRacecraftRatingValue() {
		return memory.read<int32_t>(m_addr + 300);
	}
	int32_t GetCompetitionValue() {
		return memory.read<int32_t>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindPlayerStartManager
{
public:
	FFindPlayerStartManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}
	struct AAcPlayerStartManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AAcPlayerStartManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCursorVisibility
{
public:
	FSetCursorVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getvisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAuxLightKeys
{
public:
	FGetAuxLightKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct TArray<int32_t> GetReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLightStage
{
public:
	FGetLightStage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarLightStage GetReturnValue() {
		return memory.read<enum class ECarLightStage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesDriverStatisticsSet
{
public:
	FOnlineServicesDriverStatisticsSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetClientTrackId() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 8);
	}
	int32_t GetCarModel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FText GetTrackDisplayName() {
		return memory.read<struct FText>(m_addr + 16);
	}
	struct FText GetCarModelDisplayName() {
		return memory.read<struct FText>(m_addr + 40);
	}
	struct TSoftObjectPtr<UTexture2D> GetCarBrandTexture() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 64);
	}
	struct TSoftObjectPtr<UTexture2D> GetCircuitSmallMap() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 104);
	}
	float GetDrivenKm() {
		return memory.read<float>(m_addr + 144);
	}
	float GetDrivenHours() {
		return memory.read<float>(m_addr + 148);
	}
	int32_t GetCuts() {
		return memory.read<int32_t>(m_addr + 152);
	}
	int32_t GetSpins() {
		return memory.read<int32_t>(m_addr + 156);
	}
	int32_t GetDQs() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetPersonalBest() {
		return memory.read<int32_t>(m_addr + 164);
	}
	struct FDateTime GetPersonalBestUtc() {
		return memory.read<struct FDateTime>(m_addr + 168);
	}
	int32_t GetPersonalBestS1() {
		return memory.read<int32_t>(m_addr + 176);
	}
	int32_t GetPersonalBestS2() {
		return memory.read<int32_t>(m_addr + 180);
	}
	int32_t GetPersonalBestS3() {
		return memory.read<int32_t>(m_addr + 184);
	}
	int32_t GetPersonalBestAmbientTemp() {
		return memory.read<int32_t>(m_addr + 188);
	}
	int32_t GetPersonalBestStintAverage() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct FDateTime GetPersonalBestStintUtc() {
		return memory.read<struct FDateTime>(m_addr + 200);
	}
	int32_t GetCleanLaps() {
		return memory.read<int32_t>(m_addr + 208);
	}
	int32_t GetMessyLaps() {
		return memory.read<int32_t>(m_addr + 212);
	}
	int32_t GetInvalidLaps() {
		return memory.read<int32_t>(m_addr + 216);
	}
	int32_t GetAbortedLaps() {
		return memory.read<int32_t>(m_addr + 220);
	}
	int32_t GetRacesAttended() {
		return memory.read<int32_t>(m_addr + 224);
	}
	int32_t GetRacesFinished() {
		return memory.read<int32_t>(m_addr + 228);
	}
	int32_t GetRaceWins() {
		return memory.read<int32_t>(m_addr + 232);
	}
	int32_t GetRacePodiums() {
		return memory.read<int32_t>(m_addr + 236);
	}
	int32_t GetPenalties() {
		return memory.read<int32_t>(m_addr + 240);
	}
	int32_t GetPenaltiesServed() {
		return memory.read<int32_t>(m_addr + 244);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTextFromStringTable
{
public:
	FGetTextFromStringTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTableName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetStringKey() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFilterApplied
{
public:
	FOnFilterApplied(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EShowroomCarFilterType GetFilter() {
		return memory.read<enum class EShowroomCarFilterType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesLeaderboardRank
{
public:
	FOnlineServicesLeaderboardRank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSpecialEventReferenceId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSpecialEventSeason() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetDriverRank() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetDriversTotal() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetPaceRating() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FcheckAndLoadOldGraphicBinarySaves
{
public:
	FcheckAndLoadOldGraphicBinarySaves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMainVolume
{
public:
	FSetMainVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetVolume() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRatingReportTrackCompetence
{
public:
	FRatingReportTrackCompetence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getrating() {
		return memory.read<float>(m_addr + 0);
	}
	struct TMap<int32_t, char> GettrackMedalsById() {
		return memory.read<struct TMap<int32_t, char>>(m_addr + 8);
	}
	struct TArray<struct FString> GetimprovementHints() {
		return memory.read<struct TArray<struct FString>>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesDriverSummaryRaceSessionEntry
{
public:
	FOnlineServicesDriverSummaryRaceSessionEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrust() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetOBWP() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetKmDriven() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetEloValue() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetRaceCraftRating() {
		return memory.read<float>(m_addr + 16);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 20);
	}
	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 32);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FReBindAxisKey
{
public:
	FReBindAxisKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputAxis GetCurrentBinding() {
		return memory.read<struct FInputAxis>(m_addr + 0);
	}
	struct FInputAxis GetNewBinding() {
		return memory.read<struct FInputAxis>(m_addr + 64);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetModelCustomSkinTemplates
{
public:
	FgetModelCustomSkinTemplates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool Getallow_carbon() {
		return memory.read<bool>(m_addr + 1);
	}
	struct TArray<struct FSkinTemplate> GetReturnValue() {
		return memory.read<struct TArray<struct FSkinTemplate>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FUIniValue
{
public:
	FUIniValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesDriverSummarySessionEntry
{
public:
	FOnlineServicesDriverSummarySessionEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCN() {
		return memory.read<float>(m_addr + 0);
	}
	float GetCCMax() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCC() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetTO() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetOverdrive() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetLaps() {
		return memory.read<int32_t>(m_addr + 20);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 24);
	}
	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 40);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FWishboneData
{
public:
	FWishboneData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetcarFront() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetcarRear() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetWheel() {
		return memory.read<struct FVector>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRatingCarRelationshipStep
{
public:
	FRaceRatingCarRelationshipStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class Facc_loadCarByGroup
{
public:
	Facc_loadCarByGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetGroup() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesDriverStatisticsDelegate__DelegateSignature
{
public:
	FOnlineServicesDriverStatisticsDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesDriverStatistics GetStatistics() {
		return memory.read<struct FOnlineServicesDriverStatistics>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKsonAchievementEarned
{
public:
	FOnKsonAchievementEarned(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetachievementId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMpServerListFilter
{
public:
	FMpServerListFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetSortMode() {
		return memory.read<char>(m_addr + 0);
	}
	bool GetAccessibleOnly() {
		return memory.read<bool>(m_addr + 1);
	}
	int32_t GetPingLimit() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChamp
{
public:
	FGetChamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAcSaveGameHeader> Getheaders() {
		return memory.read<struct TArray<struct FAcSaveGameHeader>>(m_addr + 0);
	}
	struct FAcSaveGameHeader Getchamp() {
		return memory.read<struct FAcSaveGameHeader>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 360);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRatingCarRelationshipELOResult
{
public:
	FRaceRatingCarRelationshipELOResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRatingReport
{
public:
	FRatingReport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GettotalScore() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EDriverCategory GetFIADriverCategory() {
		return memory.read<enum class EDriverCategory>(m_addr + 4);
	}
	float GettrackCompetence() {
		return memory.read<float>(m_addr + 8);
	}
	float Getconsistency() {
		return memory.read<float>(m_addr + 12);
	}
	float GetCarControl() {
		return memory.read<float>(m_addr + 16);
	}
	float GethotlapRating() {
		return memory.read<float>(m_addr + 20);
	}
	float GetsafetyRating() {
		return memory.read<float>(m_addr + 24);
	}
	float Getracecraft() {
		return memory.read<float>(m_addr + 28);
	}
	float Getcompetition() {
		return memory.read<float>(m_addr + 32);
	}
	struct TMap<char, int32_t> GettrackMedals() {
		return memory.read<struct TMap<char, int32_t>>(m_addr + 40);
	}
	int32_t GettrLapsDriven() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetcnLapsDriven() {
		return memory.read<int32_t>(m_addr + 124);
	}
	int32_t GetccLapsDriven() {
		return memory.read<int32_t>(m_addr + 128);
	}
	int32_t GetpcLapsDriven() {
		return memory.read<int32_t>(m_addr + 132);
	}
	int32_t GetrcLapsDriven() {
		return memory.read<int32_t>(m_addr + 136);
	}
	float GetsafetyTrust() {
		return memory.read<float>(m_addr + 140);
	}
	float GetsafetyOBWP() {
		return memory.read<float>(m_addr + 144);
	}
	int32_t GetracecraftElo() {
		return memory.read<int32_t>(m_addr + 148);
	}
	int32_t GetracecraftEloMP() {
		return memory.read<int32_t>(m_addr + 152);
	}
	int32_t GetcompetitionElo() {
		return memory.read<int32_t>(m_addr + 156);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHDREnabled
{
public:
	FGetHDREnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValue
{
public:
	FSetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesOnServerListReceived__DelegateSignature
{
public:
	FOnlineServicesOnServerListReceived__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesMPMatchmakingResponse GetmatchmakingResponse() {
		return memory.read<struct FOnlineServicesMPMatchmakingResponse>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPitEntryLaneStart
{
public:
	FOnPitEntryLaneStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOverlappedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupAlignment
{
public:
	FSetupAlignment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetCamber() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	struct TArray<int32_t> GetToe() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}
	struct TArray<float> GetStaticCamber() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}
	struct TArray<float> GetToeOutLinear() {
		return memory.read<struct TArray<float>>(m_addr + 48);
	}
	int32_t GetCasterLF() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetCasterRF() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetSteerRatio() {
		return memory.read<int32_t>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FPitStrategy
{
public:
	FPitStrategy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFuelToAdd() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FSetupTyre Gettyres() {
		return memory.read<struct FSetupTyre>(m_addr + 8);
	}
	int32_t GetTyreSet() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetfrontBrakePadCompound() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetrearBrakePadCompound() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesCPInvitationState
{
public:
	FOnlineServicesCPInvitationState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetCPServerRegion() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class BackendCPInvitationType GetInvitationType() {
		return memory.read<enum class BackendCPInvitationType>(m_addr + 24);
	}
	enum class BackendCPInvitationState GetState() {
		return memory.read<enum class BackendCPInvitationState>(m_addr + 25);
	}
	struct FDateTime GetCountdownTargetUtc() {
		return memory.read<struct FDateTime>(m_addr + 32);
	}
	struct FDateTime GetNextRaceStartsUtc() {
		return memory.read<struct FDateTime>(m_addr + 40);
	}
	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 48);
	}
	enum class ESeasonType GetTrackSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 52);
	}
	struct FText GetTrackText() {
		return memory.read<struct FText>(m_addr + 56);
	}
	int32_t GetSARequirement() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetTRRequirement() {
		return memory.read<int32_t>(m_addr + 84);
	}
	char GettrackMedals() {
		return memory.read<char>(m_addr + 88);
	}
	int32_t GetDurationFPMinutes() {
		return memory.read<int32_t>(m_addr + 92);
	}
	int32_t GetDurationQMinutes() {
		return memory.read<int32_t>(m_addr + 96);
	}
	int32_t GetDurationRaceMinutes() {
		return memory.read<int32_t>(m_addr + 100);
	}
	struct FText GetDetailText() {
		return memory.read<struct FText>(m_addr + 104);
	}
	struct FString GetJoinableServerIP() {
		return memory.read<struct FString>(m_addr + 128);
	}
	int32_t GetJoinableServerPort() {
		return memory.read<int32_t>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMessageID
{
public:
	FGetMessageID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetReturnValue() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRollingResistanceData
{
public:
	FRollingResistanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRR0() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRR1() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRR_slip() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBeforeGoToCallingPage
{
public:
	FOnBeforeGoToCallingPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject Getcalling_page() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRatingELOChangeEvent
{
public:
	FRaceRatingELOChangeEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FInt32ToLaptimeDelta
{
public:
	FInt32ToLaptimeDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDelta() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ELaptimeDeltaFormat GetFormat() {
		return memory.read<enum class ELaptimeDeltaFormat>(m_addr + 4);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiAssists
{
public:
	FGuiAssists(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiPresetType GetPresetType() {
		return memory.read<enum class EGuiPresetType>(m_addr + 8);
	}
	bool GetautoGear() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetautoClutch() {
		return memory.read<bool>(m_addr + 10);
	}
	float GetstabilityControl() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetautoEngineSwitch() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetautoWiper() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetautoLights() {
		return memory.read<bool>(m_addr + 18);
	}
	bool GetautoPitLimiter() {
		return memory.read<bool>(m_addr + 19);
	}
	bool GetautoPitProcedure() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetautoPitRequest() {
		return memory.read<bool>(m_addr + 21);
	}
	bool GetshowIdealLine() {
		return memory.read<bool>(m_addr + 22);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSteer
{
public:
	FGetSteer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesMPQuickjoinPanelInfo
{
public:
	FOnlineServicesMPQuickjoinPanelInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetJoinableServers() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTotalPlayers() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetTotalServers() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetPlayersInUnjoinableServers() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetPlayersInCompetitionServers() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetQuickjoinUnavailableByTrackMedals() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetQuickjoinUnavailableBySARating() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetQuickjoinUnavailableByRCRating() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetQuickjoinUnavailableByPing() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetQuickjoinUnavailableByContent() {
		return memory.read<int32_t>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_BackfireFlames
{
public:
	Facc_BackfireFlames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLeaderboardResponse
{
public:
	FOnLeaderboardResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLeaderboardResponse Getresponse() {
		return memory.read<struct FLeaderboardResponse>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesMPServerInfo
{
public:
	FOnlineServicesMPServerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetIP() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetTcpPort() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetUdpPort() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct FString GetTrack() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetServerName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	enum class ERaceEventType GetRaceEventType() {
		return memory.read<enum class ERaceEventType>(m_addr + 64);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 65);
	}
	enum class EMPCarGroup GetCarGroup() {
		return memory.read<enum class EMPCarGroup>(m_addr + 66);
	}
	enum class ESessionType GetCurrentSessionType() {
		return memory.read<enum class ESessionType>(m_addr + 67);
	}
	struct FDateTime GetCurrentSessionEndUtc() {
		return memory.read<struct FDateTime>(m_addr + 72);
	}
	bool GetIsSessionJoinAllowed() {
		return memory.read<bool>(m_addr + 80);
	}
	bool GetIsCompetitionServer() {
		return memory.read<bool>(m_addr + 81);
	}
	bool GetHasMandatoryPitstops() {
		return memory.read<bool>(m_addr + 82);
	}
	struct TArray<struct FOnlineServicesMPServerSessionInfo> GetSessionDefinitions() {
		return memory.read<struct TArray<struct FOnlineServicesMPServerSessionInfo>>(m_addr + 88);
	}
	bool GetIsPasswordProtected() {
		return memory.read<bool>(m_addr + 104);
	}
	char GetDriversMax() {
		return memory.read<char>(m_addr + 105);
	}
	char GetDriversOnline() {
		return memory.read<char>(m_addr + 106);
	}
	char GetFriendsOnline() {
		return memory.read<char>(m_addr + 107);
	}
	float GetRainProbability() {
		return memory.read<float>(m_addr + 108);
	}
	bool GetHasNightDriving() {
		return memory.read<bool>(m_addr + 112);
	}
	char GetWeatherRandomness() {
		return memory.read<char>(m_addr + 113);
	}
	char GetTrackMedalRequirement() {
		return memory.read<char>(m_addr + 114);
	}
	int32_t GetSafetyRatingRequirement() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetRacecraftRatingRequirement() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetCompetitionRatingMin() {
		return memory.read<int32_t>(m_addr + 124);
	}
	int32_t GetCompetitionRatingMax() {
		return memory.read<int32_t>(m_addr + 128);
	}
	bool GetIsTrackMedalsRequirementFullfilled() {
		return memory.read<bool>(m_addr + 132);
	}
	bool GetIsSafetyRatingRequirementFullfilled() {
		return memory.read<bool>(m_addr + 133);
	}
	bool GetIsRacecraftRatingRequirementFullfilled() {
		return memory.read<bool>(m_addr + 134);
	}
	bool GetIsCompetitionRatingRequirementFullfilled() {
		return memory.read<bool>(m_addr + 135);
	}
	int32_t GetSafetyIndicator() {
		return memory.read<int32_t>(m_addr + 136);
	}
	int32_t GetCompetitionIndicator() {
		return memory.read<int32_t>(m_addr + 140);
	}
	float GetMatchmakingRank() {
		return memory.read<float>(m_addr + 144);
	}
	int32_t GetPing() {
		return memory.read<int32_t>(m_addr + 148);
	}
	struct FText GetcpServerJoinStatus() {
		return memory.read<struct FText>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesMPServerSessionInfo
{
public:
	FOnlineServicesMPServerSessionInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESessionType GetsessionType() {
		return memory.read<enum class ESessionType>(m_addr + 0);
	}
	int32_t GetsessionDurationMinutes() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetisCurrent() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesOnCPRegionsChanged__DelegateSignature
{
public:
	FOnlineServicesOnCPRegionsChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCompetitionServerRegion> GetcpServersByRegion() {
		return memory.read<struct TArray<struct FCompetitionServerRegion>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompetitionServerRegion
{
public:
	FCompetitionServerRegion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCPServerIP() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetCPRegion() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetCPServerPort() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetMinCPServerPing() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetPingsSent() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetPingsReceived() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FHideReplayPanel
{
public:
	FHideReplayPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSpeed() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesOnRCEloUpdate__DelegateSignature
{
public:
	FOnlineServicesOnRCEloUpdate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKsonEloDataUpdate> Getelo_updates() {
		return memory.read<struct TArray<struct FKsonEloDataUpdate>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetMainDisplayIndex
{
public:
	FgetMainDisplayIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFullscreenMode
{
public:
	FSetFullscreenMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getfullscreen() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FforceHudById
{
public:
	FforceHudById(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDirectionRightOn
{
public:
	FIsDirectionRightOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTeamStrategy
{
public:
	FTeamStrategy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPitstopReason GetpitstopReason() {
		return memory.read<enum class EPitstopReason>(m_addr + 0);
	}
	bool GetisStartTimeSet() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetstartTimeMs() {
		return memory.read<float>(m_addr + 4);
	}
	float GetpitEntryPitlaneSessionTimeMs() {
		return memory.read<float>(m_addr + 8);
	}
	float GetpitExitPitlaneSessionTime() {
		return memory.read<float>(m_addr + 12);
	}
	char GetfastPosition() {
		return memory.read<char>(m_addr + 16);
	}
	struct FCarSetup GetCarSetup() {
		return memory.read<struct FCarSetup>(m_addr + 24);
	}
	float GetnextPitstopAtSessionTimeMs() {
		return memory.read<float>(m_addr + 440);
	}
	int32_t GetmandatoryPitstopNumber() {
		return memory.read<int32_t>(m_addr + 444);
	}
	float GetFuelPerLap() {
		return memory.read<float>(m_addr + 448);
	}
	float GetfuelPerMinute() {
		return memory.read<float>(m_addr + 452);
	}
	int32_t GetLapTime() {
		return memory.read<int32_t>(m_addr + 456);
	}
	float GetrainPitRandomizer() {
		return memory.read<float>(m_addr + 460);
	}
	int32_t GetpitStopCounter() {
		return memory.read<int32_t>(m_addr + 468);
	}
	struct TArray<float> GetdriverTotalTimes() {
		return memory.read<struct TArray<float>>(m_addr + 472);
	}

private:
	std::uint64_t m_addr = 0;
};class FKsonEloDataUpdate
{
public:
	FKsonEloDataUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKsonEloData GetKsonEloData() {
		return memory.read<struct FKsonEloData>(m_addr + 0);
	}
	bool GetisPlayerCar() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t GetracePosition() {
		return memory.read<int32_t>(m_addr + 44);
	}
	float GeteloDeltaPlus() {
		return memory.read<float>(m_addr + 48);
	}
	float GeteloDeltaMinus() {
		return memory.read<float>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateLeaderboardEntry
{
public:
	FCreateLeaderboardEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesLeaderboardRank GetRank() {
		return memory.read<struct FOnlineServicesLeaderboardRank>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetDisplayPage
{
public:
	FsetDisplayPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetDisplayIndex() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t Getpage_index() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetanimEnable() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FKsonEloData
{
public:
	FKsonEloData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetcarId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetdriverIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetksonId() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetisAI() {
		return memory.read<bool>(m_addr + 12);
	}
	struct FString GetplayerID() {
		return memory.read<struct FString>(m_addr + 16);
	}
	float GetEloValue() {
		return memory.read<float>(m_addr + 32);
	}
	float GetEloValueMP() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetWeatherDataFromUI
{
public:
	FsetWeatherDataFromUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FWeatherData Getweather_data() {
		return memory.read<struct FWeatherData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisPitLimiterOn
{
public:
	FisPitLimiterOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesOnCPInvitationUpdate__DelegateSignature
{
public:
	FOnlineServicesOnCPInvitationUpdate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesCPInvitationState Getinvitation_update() {
		return memory.read<struct FOnlineServicesCPInvitationState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomModelUpdate
{
public:
	FOnCustomModelUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModelInfo GetModelInfo() {
		return memory.read<struct FModelInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSwitchAnimation
{
public:
	FSwitchAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarAnimation GetCarAnimation() {
		return memory.read<enum class ECarAnimation>(m_addr + 0);
	}
	char GetStartingStage() {
		return memory.read<char>(m_addr + 1);
	}
	struct FVector2D GetStageLimits() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}
	struct FVector2D GetRelativeAngleLimits() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	bool GetRotateOnRed() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetRotateOnGreen() {
		return memory.read<bool>(m_addr + 21);
	}
	bool GetRotateOnBlue() {
		return memory.read<bool>(m_addr + 22);
	}
	float GetForcedTimeDelay() {
		return memory.read<float>(m_addr + 24);
	}
	struct FRotator GetCurrentRelativeRotation() {
		return memory.read<struct FRotator>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarLoosePart
{
public:
	FCarLoosePart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ELoosePartType GetLoosePartType() {
		return memory.read<enum class ELoosePartType>(m_addr + 0);
	}
	float GetGForceFilter() {
		return memory.read<float>(m_addr + 4);
	}
	struct FVector GetCurrentGForce() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsViewingDriverLaps
{
public:
	FIsViewingDriverLaps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTCLevel
{
public:
	FGetTCLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyCarGroupFilter
{
public:
	FApplyCarGroupFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup Getcar_group() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDigitalDisplayPage
{
public:
	FCarDigitalDisplayPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetDisplayLightIntensity() {
		return memory.read<float>(m_addr + 16);
	}
	enum class ECarDigitalDisplayPages GetPageType() {
		return memory.read<enum class ECarDigitalDisplayPages>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FupdateGarageLights
{
public:
	FupdateGarageLights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsLightOn() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDigitalDisplayNeedle
{
public:
	FCarDigitalDisplayNeedle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetPages() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 16);
	}
	enum class ECarDigitalDisplayType GetValueType() {
		return memory.read<enum class ECarDigitalDisplayType>(m_addr + 32);
	}
	struct UCurveFloat GetValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceSpecialEventData
{
public:
	FRaceSpecialEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCompetitionList GetCompetitionList() {
		return memory.read<struct FCompetitionList>(m_addr + 8);
	}
	bool GetUseCustomCompetitionList() {
		return memory.read<bool>(m_addr + 40);
	}
	enum class EGuiGameModes GetEventGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 41);
	}
	struct FGuiRaceEventData GetRaceEventData() {
		return memory.read<struct FGuiRaceEventData>(m_addr + 48);
	}
	struct FString GetTargetPosition() {
		return memory.read<struct FString>(m_addr + 256);
	}
	int32_t GetOnlineEventRefId() {
		return memory.read<int32_t>(m_addr + 272);
	}
	struct FWeatherStatus Getweather() {
		return memory.read<struct FWeatherStatus>(m_addr + 276);
	}
	struct FWeatherData GetWeatherData() {
		return memory.read<struct FWeatherData>(m_addr + 308);
	}
	struct FTrackStatus GetTrackStatus() {
		return memory.read<struct FTrackStatus>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDigitalDisplayCanvas
{
public:
	FCarDigitalDisplayCanvas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetPages() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 24);
	}
	enum class ECarDigitalDisplayType GetValueType() {
		return memory.read<enum class ECarDigitalDisplayType>(m_addr + 40);
	}
	float GetTimeToShow() {
		return memory.read<float>(m_addr + 44);
	}
	struct TArray<enum class ECarDigitalDisplayType> GetSharedWith() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayType>>(m_addr + 56);
	}
	struct FVector2D GetMinMaxValue() {
		return memory.read<struct FVector2D>(m_addr + 88);
	}
	struct UCurveLinearColor GetCurveValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UCurveLinearColor(ptr_addr);
	}
	bool GetbIsInverted() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarLoosePartPosition
{
public:
	FGetCarLoosePartPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetLoosePartIndex() {
		return memory.read<char>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDigitalDisplayLight
{
public:
	FCarDigitalDisplayLight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetPages() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 16);
	}
	struct TArray<enum class ECarLightStage> GetValueType() {
		return memory.read<struct TArray<enum class ECarLightStage>>(m_addr + 32);
	}
	bool GetbIsInverted() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHighlight
{
public:
	FSetHighlight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Gethighlighted() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadCustomPreset
{
public:
	FLoadCustomPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getfile_path() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreSet
{
public:
	FTyreSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTyreSet() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FTyreWearStatus> GetwearStatus() {
		return memory.read<struct TArray<struct FTyreWearStatus>>(m_addr + 8);
	}
	enum class ETyreSetWearState GetState() {
		return memory.read<enum class ETyreSetWearState>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateCorrectBodyKit
{
public:
	FUpdateCorrectBodyKit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class ERaceEventType> GetCarRaceEventTypes() {
		return memory.read<struct TArray<enum class ERaceEventType>>(m_addr + 0);
	}
	bool Getis_custom() {
		return memory.read<bool>(m_addr + 16);
	}
	bool Getgamemode_overide() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 18);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDigitalDisplayProgressMI
{
public:
	FCarDigitalDisplayProgressMI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UMaterialInstance GetmiProgress() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetmiProgressDynamic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetPages() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 32);
	}
	enum class ECarDigitalDisplayType GetValueType() {
		return memory.read<enum class ECarDigitalDisplayType>(m_addr + 48);
	}
	struct UCurveFloat GetValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FisAnyUIPageInViewport
{
public:
	FisAnyUIPageInViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWingState
{
public:
	FGetWingState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FWingState GetReturnValue() {
		return memory.read<struct FWingState>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDigitalDisplayProgressBar
{
public:
	FCarDigitalDisplayProgressBar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetPages() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 16);
	}
	enum class ECarDigitalDisplayType GetValueType() {
		return memory.read<enum class ECarDigitalDisplayType>(m_addr + 32);
	}
	struct UCurveFloat GetValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDigitalDisplayNumberTextBlock
{
public:
	FCarDigitalDisplayNumberTextBlock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetPages() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 16);
	}
	enum class ECarDigitalDisplayType GetValueType() {
		return memory.read<enum class ECarDigitalDisplayType>(m_addr + 32);
	}
	bool GetUseGrouping() {
		return memory.read<bool>(m_addr + 33);
	}
	int32_t GetMinimumIntegralDigits() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetMaximumIntegralDigits() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetMinimumFractionalDigits() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetMaximumFractionalDigits() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FString GetCultureLocaleName() {
		return memory.read<struct FString>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FBrandInfo
{
public:
	FBrandInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBrandName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	enum class EBrandType GetBrand() {
		return memory.read<enum class EBrandType>(m_addr + 16);
	}
	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 17);
	}
	int32_t GetFoundationYear() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct TSoftObjectPtr<UTexture2D> GetBrandLogo() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 24);
	}
	struct TSoftObjectPtr<UTexture2D> GetBrandIcon() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FBeginLoadingScreen
{
public:
	FBeginLoadingScreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMapName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerSaveData
{
public:
	FCareerSaveData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDriverInfo GetplayerInfo() {
		return memory.read<struct FDriverInfo>(m_addr + 0);
	}
	struct FCarInfo GetCarInfo() {
		return memory.read<struct FCarInfo>(m_addr + 240);
	}
	enum class EDifficultyLevel GetdifficultyLevel() {
		return memory.read<enum class EDifficultyLevel>(m_addr + 464);
	}
	struct FCareerAssists Getassists() {
		return memory.read<struct FCareerAssists>(m_addr + 468);
	}
	struct FCareerRealism Getrealism() {
		return memory.read<struct FCareerRealism>(m_addr + 484);
	}
	struct FString GetTeamName() {
		return memory.read<struct FString>(m_addr + 496);
	}
	struct TArray<struct FDriverInfo> GetteamDrivers() {
		return memory.read<struct TArray<struct FDriverInfo>>(m_addr + 512);
	}
	int32_t GetmedalPoints() {
		return memory.read<int32_t>(m_addr + 528);
	}
	int32_t GetbonusPoints() {
		return memory.read<int32_t>(m_addr + 532);
	}
	int32_t GetcareerActiveEvent() {
		return memory.read<int32_t>(m_addr + 536);
	}
	int32_t GetseasonNumber() {
		return memory.read<int32_t>(m_addr + 540);
	}
	enum class ECareerDurationType GetdurationType() {
		return memory.read<enum class ECareerDurationType>(m_addr + 544);
	}
	struct TArray<struct FCareerEventResult> GetpastEventsResults() {
		return memory.read<struct TArray<struct FCareerEventResult>>(m_addr + 552);
	}
	struct TArray<struct FCareerSeasonResult> GetpastSeasonResults() {
		return memory.read<struct TArray<struct FCareerSeasonResult>>(m_addr + 568);
	}
	bool GetisCareerInfoSet() {
		return memory.read<bool>(m_addr + 584);
	}
	bool GetisSeason1Completed() {
		return memory.read<bool>(m_addr + 585);
	}
	bool GetisSeason2Completed() {
		return memory.read<bool>(m_addr + 586);
	}

private:
	std::uint64_t m_addr = 0;
};class FPositionChanged
{
public:
	FPositionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPosition() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDamageBone
{
public:
	FDamageBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetcurrentTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSeasonDataAsset
{
public:
	FSeasonDataAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	struct FSeasonOutfit GetData() {
		return memory.read<struct FSeasonOutfit>(m_addr + 8);
	}
	struct TArray<enum class ERaceEventType> GeteventTypes() {
		return memory.read<struct TArray<enum class ERaceEventType>>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};class FSeasonOutfit
{
public:
	FSeasonOutfit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UTexture2D> GetNumberSet() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 0);
	}
	struct UMaterialInstance GetNumberPlate_Pro() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetNumberPlate_ProAm() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetNumberPlate_Am() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetNumberPlate_Silver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetNumberPlate_National() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetDecalNumberPlate_Pro() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetDecalNumberPlate_ProAm() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetDecalNumberPlate_Am() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetDecalNumberPlate_Silver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetDecalNumberPlate_National() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetRaceClass_Pro() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetRaceClass_ProAm() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetRaceClass_Am() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetRaceClass_Silver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetRaceClass_National() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetRearNumberTag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UMaterialInstance(ptr_addr);
	}
	struct FVector GetNumberPlate_Scale() {
		return memory.read<struct FVector>(m_addr + 168);
	}
	struct FVector GetRaceClass_ProScale() {
		return memory.read<struct FVector>(m_addr + 180);
	}
	struct FVector GetRaceClass_ProAmScale() {
		return memory.read<struct FVector>(m_addr + 192);
	}
	struct FVector GetRaceClass_AmScale() {
		return memory.read<struct FVector>(m_addr + 204);
	}
	struct FVector GetRaceClass_SilverScale() {
		return memory.read<struct FVector>(m_addr + 216);
	}
	struct FVector GetRaceClass_NationalScale() {
		return memory.read<struct FVector>(m_addr + 228);
	}
	struct FVector GetRearNumberTagScale() {
		return memory.read<struct FVector>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FBannerTemplate
{
public:
	FBannerTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTemplateKey() {
		return memory.read<char>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 9);
	}
	bool GetbIsOfficial() {
		return memory.read<bool>(m_addr + 10);
	}
	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 12);
	}
	struct UMaterialInstance GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UMaterialInstance(ptr_addr);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDriverUpdate
{
public:
	FOnDriverUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDriverInfo GetDriverInfo() {
		return memory.read<struct FDriverInfo>(m_addr + 0);
	}
	struct FName GetDriverKey() {
		return memory.read<struct FName>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FUGearRatioSplit
{
public:
	FUGearRatioSplit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRatioSplit() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODStats
{
public:
	FFMODStats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetnumChannels() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetnumRealChannel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetramAllocated() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetramMaxAllocated() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetramTotal() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int64_t GetbytesRead() {
		return memory.read<int64_t>(m_addr + 24);
	}
	int64_t GetstreamRead() {
		return memory.read<int64_t>(m_addr + 32);
	}
	int64_t GetotherRead() {
		return memory.read<int64_t>(m_addr + 40);
	}
	float GetcommandQueueUsage() {
		return memory.read<float>(m_addr + 48);
	}
	float GetcommandQueueStallTime() {
		return memory.read<float>(m_addr + 52);
	}
	float GethandleUsage() {
		return memory.read<float>(m_addr + 56);
	}
	float GethandleStallTime() {
		return memory.read<float>(m_addr + 60);
	}
	float GetdspCpuUsage() {
		return memory.read<float>(m_addr + 64);
	}
	float GetupdateCpuUsage() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FTeamTemplate
{
public:
	FTeamTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTemplateKey() {
		return memory.read<char>(m_addr + 8);
	}
	bool GetbIsOfficial() {
		return memory.read<bool>(m_addr + 9);
	}
	struct TArray<struct FSkinMaterial> GetHelmetMaterials() {
		return memory.read<struct TArray<struct FSkinMaterial>>(m_addr + 16);
	}
	struct TArray<struct FSkinMaterial> GetSuitMaterials() {
		return memory.read<struct TArray<struct FSkinMaterial>>(m_addr + 32);
	}
	struct TSoftObjectPtr<UTexture2D> Getlogo() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 48);
	}
	struct TSoftObjectPtr<UTexture2D> GetGarage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 88);
	}
	struct TSoftObjectPtr<UTexture2D> GetRefueller() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 128);
	}
	struct TSoftObjectPtr<UTexture2D> GetPlate() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 168);
	}
	struct TSoftObjectPtr<UTexture2D> GetPitstopPlate() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 208);
	}
	struct TSoftObjectPtr<UTexture2D> GetGaragePlate() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 248);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsRainLightOn
{
public:
	FIsRainLightOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriverSuitTemplate
{
public:
	FDriverSuitTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemplateKey() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbIsOfficial() {
		return memory.read<bool>(m_addr + 12);
	}
	struct FSkinMaterial GetSuitMaterials() {
		return memory.read<struct FSkinMaterial>(m_addr + 16);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriverGlovesTemplate
{
public:
	FDriverGlovesTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTemplateKey() {
		return memory.read<char>(m_addr + 8);
	}
	enum class EGlovesBrand GetBrand() {
		return memory.read<enum class EGlovesBrand>(m_addr + 9);
	}
	struct FSkinMaterial GetGlovesMaterial() {
		return memory.read<struct FSkinMaterial>(m_addr + 16);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimespanText
{
public:
	FGetTimespanText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GettimeAgo() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetLastVRMousePointerEvent
{
public:
	FgetLastVRMousePointerEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetReturnValue() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupElectronicsLimits
{
public:
	FSetupElectronicsLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetTC1() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}
	struct FSetupSelectorLimits GetAbs() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 56);
	}
	struct FSetupSelectorLimits GetECU() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 112);
	}
	struct FSetupSelectorLimits GetTelemetryLaps() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateCurrentDevices
{
public:
	FUpdateCurrentDevices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPresetManager GetPresetManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPresetManager(ptr_addr);
	}
	bool Getenum_devices() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriverHelmetTemplate
{
public:
	FDriverHelmetTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemplateKey() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetbIsOfficial() {
		return memory.read<bool>(m_addr + 12);
	}
	struct TArray<struct FSkinMaterial> GetHelmetMaterials() {
		return memory.read<struct TArray<struct FSkinMaterial>>(m_addr + 16);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FCleanEmptyInputsFromConfig
{
public:
	FCleanEmptyInputsFromConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandConfiguration GetCommandConfiguration() {
		return memory.read<struct FCommandConfiguration>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStickerSet
{
public:
	FStickerSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTemplateKey() {
		return memory.read<char>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 9);
	}
	bool GetbHasFrontNumber() {
		return memory.read<bool>(m_addr + 10);
	}
	struct FTransform GetFrontNumber() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FName GetFrontNumberSocket() {
		return memory.read<struct FName>(m_addr + 64);
	}
	bool GetbHasRoofNumber() {
		return memory.read<bool>(m_addr + 72);
	}
	struct FTransform GetRoofNumber() {
		return memory.read<struct FTransform>(m_addr + 80);
	}
	struct FName GetRoofNumberSocket() {
		return memory.read<struct FName>(m_addr + 128);
	}
	bool GetbHasClassFrontSticker() {
		return memory.read<bool>(m_addr + 136);
	}
	struct FTransform GetClassFrontSticker() {
		return memory.read<struct FTransform>(m_addr + 144);
	}
	struct FName GetClassFrontStickerSocket() {
		return memory.read<struct FName>(m_addr + 192);
	}
	bool GetbHasClassRearSticker() {
		return memory.read<bool>(m_addr + 200);
	}
	struct FTransform GetClassRearSticker() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	struct FName GetClassRearStickerSocket() {
		return memory.read<struct FName>(m_addr + 256);
	}
	bool GetbHasRearNumberTagSticker() {
		return memory.read<bool>(m_addr + 264);
	}
	struct FTransform GetRearNumberTagSticker() {
		return memory.read<struct FTransform>(m_addr + 272);
	}
	struct FName GetRearNumberTagStickerSocket() {
		return memory.read<struct FName>(m_addr + 320);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};class FSponsorTexture
{
public:
	FSponsorTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTemplateKey() {
		return memory.read<char>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 9);
	}
	struct TSoftObjectPtr<UTexture2D> GetSponsorTexture() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 16);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_SetHighlight
{
public:
	FBP_SetHighlight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Gethighlighted() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSkinColorByCode
{
public:
	FgetSkinColorByCode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getcolor_code() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FNumberPanelMesh
{
public:
	FNumberPanelMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTemplateKey() {
		return memory.read<char>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 9);
	}
	struct USkeletalMesh GetNumberPlateMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct USkeletalMesh(ptr_addr);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAuxLightMesh
{
public:
	FAuxLightMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetTemplateKey() {
		return memory.read<char>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 9);
	}
	struct USkeletalMesh GetAuxLightMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct USkeletalMesh(ptr_addr);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceTransitionStruct
{
public:
	FRaceTransitionStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetTextValueFromCurrentIndex
{
public:
	FGetTextValueFromCurrentIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBasicCarSetup
{
public:
	FBasicCarSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupTyre Gettyres() {
		return memory.read<struct FSetupTyre>(m_addr + 0);
	}
	struct FSetupAlignment GetAlignment() {
		return memory.read<struct FSetupAlignment>(m_addr + 24);
	}
	struct FSetupElectronics Getelectronics() {
		return memory.read<struct FSetupElectronics>(m_addr + 104);
	}
	struct FSetupStrategy GetStrategy() {
		return memory.read<struct FSetupStrategy>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGlovesTable
{
public:
	FGetGlovesTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FDriverGlovesTemplate GetDestination() {
		return memory.read<struct FDriverGlovesTemplate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSetMode
{
public:
	FOnSetMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetPressed() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EMfdMode Getmode() {
		return memory.read<enum class EMfdMode>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomSkinData
{
public:
	FCustomSkinData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBaseRoughness() {
		return memory.read<float>(m_addr + 0);
	}
	float GetClearCoat() {
		return memory.read<float>(m_addr + 4);
	}
	float GetClearCoatRoughness() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMetallic() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateAccountData
{
public:
	FUpdateAccountData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGamePlatformUserAccountData GetnewAccountData() {
		return memory.read<struct FGamePlatformUserAccountData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSkinMaterialType
{
public:
	FSkinMaterialType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetMaterialName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	float GetRoughness() {
		return memory.read<float>(m_addr + 32);
	}
	float GetClearCoatRoughness() {
		return memory.read<float>(m_addr + 36);
	}
	float GetMetallic() {
		return memory.read<float>(m_addr + 40);
	}
	float GetClearCoat() {
		return memory.read<float>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetConsoleCMDValue
{
public:
	FGetConsoleCMDValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCmd() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSkinColor
{
public:
	FSkinColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCode() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 16);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 40);
	}
	struct FText GetCategory() {
		return memory.read<struct FText>(m_addr + 56);
	}
	int32_t GetCategoryProbability() {
		return memory.read<int32_t>(m_addr + 80);
	}
	struct TSet<struct FName> GetSkinMaterialType() {
		return memory.read<struct TSet<struct FName>>(m_addr + 88);
	}
	struct TSet<struct FName> GetRimMaterialType() {
		return memory.read<struct TSet<struct FName>>(m_addr + 168);
	}
	struct TSet<struct FName> GetHelmetGlassMaterialType() {
		return memory.read<struct TSet<struct FName>>(m_addr + 248);
	}
	bool GetUseWithAuxLights() {
		return memory.read<bool>(m_addr + 328);
	}
	struct FString GetRealRGB() {
		return memory.read<struct FString>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleTyreSet
{
public:
	FcycleTyreSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisIncreased() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHelmetGlassMaterialType
{
public:
	FHelmetGlassMaterialType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetMaterialName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	float GetMetallic() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSkinTemplate
{
public:
	FSkinTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemplateKey() {
		return memory.read<int32_t>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 12);
	}
	bool GetbIsOfficial() {
		return memory.read<bool>(m_addr + 13);
	}
	bool GetbIsVariant() {
		return memory.read<bool>(m_addr + 14);
	}
	struct FLinearColor GetVariantColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	struct TArray<struct FSkinMaterial> GetMaterials() {
		return memory.read<struct TArray<struct FSkinMaterial>>(m_addr + 32);
	}
	char GetNumberPlateKey() {
		return memory.read<char>(m_addr + 48);
	}
	char GetStickerSetKey() {
		return memory.read<char>(m_addr + 49);
	}
	char GetRimKey() {
		return memory.read<char>(m_addr + 50);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarLightStage
{
public:
	FCarLightStage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCarLights> GetMaterialsParameters() {
		return memory.read<struct TArray<struct FCarLights>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPitstopManager
{
public:
	FGetPitstopManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcCarPitstopManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcCarPitstopManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCustomSuitTemplates
{
public:
	FgetCustomSuitTemplates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getallow_official() {
		return memory.read<bool>(m_addr + 0);
	}
	struct TArray<struct FDriverSuitTemplate> GetReturnValue() {
		return memory.read<struct TArray<struct FDriverSuitTemplate>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarLights
{
public:
	FCarLights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarLightMaterialType GetMaterialType() {
		return memory.read<enum class ECarLightMaterialType>(m_addr + 0);
	}
	enum class ECarLightMaterialParameter GetMaterialParameter() {
		return memory.read<enum class ECarLightMaterialParameter>(m_addr + 1);
	}
	float GetIntensityWhenOn() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetCanBlink() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetUseStageMaterialIntensityWhenOn() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetUseStageMaterialIntensityWhenOff() {
		return memory.read<bool>(m_addr + 18);
	}
	float GetBlinkDuration_Ms_WhenOn() {
		return memory.read<float>(m_addr + 20);
	}
	float GetIntensityWhenOff() {
		return memory.read<float>(m_addr + 24);
	}
	float GetBlinkDuration_Ms_WhenOff() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetUseStageLightIntensityWhenOn() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetUseStageLightIntensityWhenOff() {
		return memory.read<bool>(m_addr + 41);
	}
	float GetLightFrontComponentIntensity() {
		return memory.read<float>(m_addr + 44);
	}
	float GetLightRearComponentIntensity() {
		return memory.read<float>(m_addr + 48);
	}
	float GetGlassIntesityMultiplier() {
		return memory.read<float>(m_addr + 52);
	}
	bool GetbIsSharingDayLights() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FLapTimeReference
{
public:
	FLapTimeReference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FisChamp
{
public:
	FisChamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBackfireFlame
{
public:
	FBackfireFlame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBackFireFlameType GetflameType() {
		return memory.read<enum class EBackFireFlameType>(m_addr + 0);
	}
	char GetspawnProbability() {
		return memory.read<char>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveSetup
{
public:
	FSaveSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getfile_name() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiLoadingScreenInfos
{
public:
	FGuiLoadingScreenInfos(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTrackDisplayName() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetTrackName() {
		return memory.read<struct FText>(m_addr + 24);
	}
	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FText GetCarName() {
		return memory.read<struct FText>(m_addr + 56);
	}
	struct FText GetDriverName() {
		return memory.read<struct FText>(m_addr + 80);
	}
	struct FText GetLapTime() {
		return memory.read<struct FText>(m_addr + 104);
	}
	struct FText GetTeamName() {
		return memory.read<struct FText>(m_addr + 128);
	}
	struct FText GetTypeSession() {
		return memory.read<struct FText>(m_addr + 152);
	}
	struct FText GetInfoLine() {
		return memory.read<struct FText>(m_addr + 176);
	}
	enum class EGuiLoadingInfoType GetLoadingType() {
		return memory.read<enum class EGuiLoadingInfoType>(m_addr + 200);
	}
	enum class EGuiGameModes GetGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 201);
	}
	struct FGuiRaceEventData GetRaceData() {
		return memory.read<struct FGuiRaceEventData>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiRaceEventData
{
public:
	FGuiRaceEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCarName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetDriverName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	char GetOpponentCount() {
		return memory.read<char>(m_addr + 16);
	}
	struct TMap<enum class ECarGroup, float> GetcarGroups() {
		return memory.read<struct TMap<enum class ECarGroup, float>>(m_addr + 24);
	}
	enum class ERaceEventType GetRaceEventType() {
		return memory.read<enum class ERaceEventType>(m_addr + 104);
	}
	int32_t GetTimeOfDay() {
		return memory.read<int32_t>(m_addr + 108);
	}
	int32_t GetPracticeLength() {
		return memory.read<int32_t>(m_addr + 112);
	}
	int32_t GetQualifyLength() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetRaceLength() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetPositionOnGrid() {
		return memory.read<int32_t>(m_addr + 124);
	}
	int32_t GetTimeMultiplier() {
		return memory.read<int32_t>(m_addr + 128);
	}
	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 132);
	}
	char GetskillMultiplier() {
		return memory.read<char>(m_addr + 140);
	}
	char GetaggroMultiplier() {
		return memory.read<char>(m_addr + 141);
	}
	int32_t GetP1_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 144);
	}
	bool GetP2_Enabled() {
		return memory.read<bool>(m_addr + 148);
	}
	int32_t GetP2_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 152);
	}
	int32_t GetQualifyCount() {
		return memory.read<int32_t>(m_addr + 156);
	}
	bool GetSuperPole_Enabled() {
		return memory.read<bool>(m_addr + 160);
	}
	int32_t GetQ_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 164);
	}
	int32_t GetR1_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 168);
	}
	bool GetR2_Enabled() {
		return memory.read<bool>(m_addr + 172);
	}
	int32_t GetR2_TimeOfDay() {
		return memory.read<int32_t>(m_addr + 176);
	}
	char GetMandatoryPitStopType() {
		return memory.read<char>(m_addr + 180);
	}
	int32_t GetPitstopTypeData() {
		return memory.read<int32_t>(m_addr + 184);
	}
	bool GetIsRefuelling_Enabled() {
		return memory.read<bool>(m_addr + 188);
	}
	int32_t GetPitWindowLength() {
		return memory.read<int32_t>(m_addr + 192);
	}
	int32_t GetDriverStintLength() {
		return memory.read<int32_t>(m_addr + 196);
	}
	int32_t GetSingleMakeType() {
		return memory.read<int32_t>(m_addr + 200);
	}
	int32_t GetTyreSetCount() {
		return memory.read<int32_t>(m_addr + 204);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTVCameraSets
{
public:
	FGetTVCameraSets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCameraSet> GetReturnValue() {
		return memory.read<struct TArray<struct FCameraSet>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FACNameplateSettings
{
public:
	FACNameplateSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTextSize() {
		return memory.read<float>(m_addr + 0);
	}
	float GetTextZPos() {
		return memory.read<float>(m_addr + 4);
	}
	float GetScaleUpdateFreq() {
		return memory.read<float>(m_addr + 8);
	}
	float GetTextMinSizePerc() {
		return memory.read<float>(m_addr + 12);
	}
	float GetTextMaxSizePerc() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMinVisibleSizePerc() {
		return memory.read<float>(m_addr + 20);
	}
	float GetPingUpdateFreq() {
		return memory.read<float>(m_addr + 24);
	}
	int32_t GetTextScalingEnabled() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetIsOnLeft
{
public:
	FgetIsOnLeft(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FACVRSettings
{
public:
	FACVRSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMainMenuLayerDistance() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMainMenuLayerSize() {
		return memory.read<float>(m_addr + 4);
	}
	int32_t GetMainMenuLayerType() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetRaceMenuLayerDistance() {
		return memory.read<float>(m_addr + 12);
	}
	float GetRaceMenuLayerSize() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetRaceMenuLayerType() {
		return memory.read<int32_t>(m_addr + 20);
	}
	float GetHUDLayerDistance() {
		return memory.read<float>(m_addr + 24);
	}
	float GetHUDLayerSize() {
		return memory.read<float>(m_addr + 28);
	}
	int32_t GetHUDLayerType() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetSpectatorScreenMode() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetResetPositionAtStartup() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetExternalMeshComponent
{
public:
	FGetExternalMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestServerList
{
public:
	FRequestServerList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EServerRequestType Getrequest_type() {
		return memory.read<enum class EServerRequestType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_LoadVideoPreset
{
public:
	Facc_LoadVideoPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugStruct
{
public:
	FDebugStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetStartupLocation() {
		return memory.read<char>(m_addr + 0);
	}
	enum class ESeasonType GetcurrentSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 1);
	}
	char GetStartWithEngineOn() {
		return memory.read<char>(m_addr + 2);
	}
	char GetSaveBestLapReference() {
		return memory.read<char>(m_addr + 3);
	}
	char GetPracticeSequentialStart() {
		return memory.read<char>(m_addr + 4);
	}
	int32_t GetGridOffset() {
		return memory.read<int32_t>(m_addr + 8);
	}
	char GetShowIntroSequence() {
		return memory.read<char>(m_addr + 12);
	}
	char GetShowTransitionPage() {
		return memory.read<char>(m_addr + 13);
	}
	struct FDebugEventOverride GetEventOverride() {
		return memory.read<struct FDebugEventOverride>(m_addr + 16);
	}
	struct FDebugMultiplayerConfiguration GetMultiplayer() {
		return memory.read<struct FDebugMultiplayerConfiguration>(m_addr + 392);
	}
	struct FDebugOnline GetOnline() {
		return memory.read<struct FDebugOnline>(m_addr + 400);
	}
	struct FDebugVideoEditing GetVideoEditing() {
		return memory.read<struct FDebugVideoEditing>(m_addr + 448);
	}
	struct FModulesEnabler GetModulesEnabler() {
		return memory.read<struct FModulesEnabler>(m_addr + 460);
	}
	struct FReplayConfiguration GetReplayConfiguration() {
		return memory.read<struct FReplayConfiguration>(m_addr + 520);
	}
	struct FUIConfiguration GetUIConfiguration() {
		return memory.read<struct FUIConfiguration>(m_addr + 528);
	}
	int32_t GetIsDeveloper() {
		return memory.read<int32_t>(m_addr + 544);
	}
	int32_t GetIsTester() {
		return memory.read<int32_t>(m_addr + 548);
	}
	int32_t GetautoSaveSeconds() {
		return memory.read<int32_t>(m_addr + 552);
	}
	char GettestKeyboard() {
		return memory.read<char>(m_addr + 556);
	}
	int32_t GetAITest() {
		return memory.read<int32_t>(m_addr + 560);
	}
	float GetAI_RAIN_VARIATION_GAIN() {
		return memory.read<float>(m_addr + 564);
	}
	float GetAI_RAIN_VARIATION_BASE() {
		return memory.read<float>(m_addr + 568);
	}
	float GetAI_RAIN_MISTAKE_MULT() {
		return memory.read<float>(m_addr + 572);
	}

private:
	std::uint64_t m_addr = 0;
};class FWaterCurves
{
public:
	FWaterCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveFloat GetwaterCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetWaterCurveFogChase() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetWaterCurveDetail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetFogSpeedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetDetailsSpeedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveVector GetDetailsSpeedVelMinCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UCurveVector(ptr_addr);
	}
	struct UCurveVector GetDetailsSpeedVelMaxCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UCurveVector(ptr_addr);
	}
	struct UCurveFloat GetDropsSpeedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetChaseSpeedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseFocusedVelMinCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseFocusedVelMaxCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseFocusedAlphaLifeCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseNotFocusedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseNotFocusedVelMinCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseNotFocusedVelMaxCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseNotFocusedAlphaLifeCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStandingDeltaText
{
public:
	FGetStandingDeltaText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetLaps() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	struct TArray<int32_t> Getlaptimes() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}
	bool Getsort_by_laps() {
		return memory.read<bool>(m_addr + 32);
	}
	enum class ELaptimeDeltaFormat GetFormat() {
		return memory.read<enum class ELaptimeDeltaFormat>(m_addr + 33);
	}
	struct TArray<struct FText> GetReturnValue() {
		return memory.read<struct TArray<struct FText>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowLastLapTime
{
public:
	FShowLastLapTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getvisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplayConfiguration
{
public:
	FReplayConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetExperimentalMinQualityFactor() {
		return memory.read<float>(m_addr + 0);
	}
	char GetDisableSavingOnAnotherThread() {
		return memory.read<char>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FInputAction
{
public:
	FInputAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetActionName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 16);
	}
	struct FString GetKeyAsString() {
		return memory.read<struct FString>(m_addr + 40);
	}
	char GetbShift() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbCtrl() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbAlt() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbCmd() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FloadChampState
{
public:
	FloadChampState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FModulesEnabler
{
public:
	FModulesEnabler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetUseReplay() {
		return memory.read<char>(m_addr + 0);
	}
	char GetExperimentalPostponedQuit() {
		return memory.read<char>(m_addr + 1);
	}
	char GetUseHUD() {
		return memory.read<char>(m_addr + 2);
	}
	char GetUseSpotter() {
		return memory.read<char>(m_addr + 3);
	}
	char GetEnableYellowSpotter() {
		return memory.read<char>(m_addr + 4);
	}
	struct FAudioModules GetAudioModules() {
		return memory.read<struct FAudioModules>(m_addr + 5);
	}
	struct FCarModules GetCarModules() {
		return memory.read<struct FCarModules>(m_addr + 8);
	}
	struct FTelemetryModules GetTelemetryModules() {
		return memory.read<struct FTelemetryModules>(m_addr + 17);
	}
	int32_t GetPhysicsThreadsCount() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetPhysicsThreadsCountMP() {
		return memory.read<int32_t>(m_addr + 24);
	}
	char GetUseHMD() {
		return memory.read<char>(m_addr + 28);
	}
	int32_t GetUseNativeDBox() {
		return memory.read<int32_t>(m_addr + 32);
	}
	float GetKerbFFVibrationsGain() {
		return memory.read<float>(m_addr + 36);
	}
	int32_t GetuseRealtimeLeadboardFilter() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetdisableStartFastUnlock() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetenableCarPerformanceLogs() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetdisableBoxCollider() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetuseOdeMultithread() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCarClassType
{
public:
	FgetCarClassType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	enum class ECarClass GetReturnValue() {
		return memory.read<enum class ECarClass>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameter
{
public:
	FGetParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class GraphicsOptions GetType() {
		return memory.read<enum class GraphicsOptions>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FprocessFirstEventResults
{
public:
	FprocessFirstEventResults(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FModelCockpitCamInfo
{
public:
	FModelCockpitCamInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCockpitLookLeftYaw() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCockpitLookRightYaw() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDashLookLeftYaw() {
		return memory.read<float>(m_addr + 16);
	}
	float GetDashLookRightYaw() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueAsFloat
{
public:
	FGetValueAsFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarModules
{
public:
	FCarModules(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetUseDigitalDisplays() {
		return memory.read<char>(m_addr + 0);
	}
	char GetUseLedSystem() {
		return memory.read<char>(m_addr + 1);
	}
	char GetUseDriverAnimation() {
		return memory.read<char>(m_addr + 2);
	}
	char GetUseCarAnimation() {
		return memory.read<char>(m_addr + 3);
	}
	char GetUseBrakeGlow() {
		return memory.read<char>(m_addr + 4);
	}
	char GetUseLightingSystem() {
		return memory.read<char>(m_addr + 5);
	}
	char GetUseDistanceSaving() {
		return memory.read<char>(m_addr + 6);
	}
	char GetUseCarParticles() {
		return memory.read<char>(m_addr + 7);
	}
	char GetUseLumirank() {
		return memory.read<char>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAudioModules
{
public:
	FAudioModules(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetAudioDebug() {
		return memory.read<char>(m_addr + 0);
	}
	char GetDisableAudioScale() {
		return memory.read<char>(m_addr + 1);
	}
	char GetExperimentalAudioReset() {
		return memory.read<char>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayerStart
{
public:
	FGetPlayerStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAcPlayerStartType GetPlayerStartType() {
		return memory.read<enum class EAcPlayerStartType>(m_addr + 0);
	}
	int32_t GetPlayerPosition() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool Getlog_errors() {
		return memory.read<bool>(m_addr + 8);
	}
	struct AAcPlayerStart GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AAcPlayerStart(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWaterParticles
{
public:
	FGetWaterParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FWaterParticles GetDestination() {
		return memory.read<struct FWaterParticles>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugVideoEditing
{
public:
	FDebugVideoEditing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCameraTVCenterHeight() {
		return memory.read<float>(m_addr + 0);
	}
	char GetUseExperimentalCameraTV() {
		return memory.read<char>(m_addr + 4);
	}
	char GetShowPhotomodeButton() {
		return memory.read<char>(m_addr + 5);
	}
	char GetShowNumberPlates() {
		return memory.read<char>(m_addr + 6);
	}
	char GetShowDecals() {
		return memory.read<char>(m_addr + 7);
	}
	char GetUseCarbonSkin() {
		return memory.read<char>(m_addr + 8);
	}
	char GetHideAuxLights() {
		return memory.read<char>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFastLane
{
public:
	FGetFastLane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAcTrackSpline GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAcTrackSpline(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDamperData2W
{
public:
	FDamperData2W(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getbump() {
		return memory.read<float>(m_addr + 0);
	}
	float Getrebound() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControllerType
{
public:
	FGetControllerType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAcControllerType GetReturnValue() {
		return memory.read<enum class EAcControllerType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugOnline
{
public:
	FDebugOnline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOnlineServicesStage GetAcOnlineServer() {
		return memory.read<enum class EOnlineServicesStage>(m_addr + 0);
	}
	int32_t GetPort3() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetPort4() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetRollingStartType() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FString GetDriverName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetIdentitySwitchSimulatorNumber() {
		return memory.read<int32_t>(m_addr + 32);
	}
	char GetUseRaceDirectorPenalties() {
		return memory.read<char>(m_addr + 36);
	}
	int32_t GetLocalMPServerTcpPort() {
		return memory.read<int32_t>(m_addr + 40);
	}
	char GetUseCCRatingFinalForm() {
		return memory.read<char>(m_addr + 44);
	}
	char GetLogCCLaps() {
		return memory.read<char>(m_addr + 45);
	}

private:
	std::uint64_t m_addr = 0;
};class FteleportCarOnSpawnLocation
{
public:
	FteleportCarOnSpawnLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAcPlayerStart GetPlayerStart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAcPlayerStart(ptr_addr);
	}
	bool GetresetCar() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetPodium() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FisViewSettingsAllowed
{
public:
	FisViewSettingsAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugMultiplayerConfiguration
{
public:
	FDebugMultiplayerConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetPreloadCars() {
		return memory.read<char>(m_addr + 0);
	}
	char GetUseLockstepSendInterval() {
		return memory.read<char>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOnlineServices
{
public:
	FGetOnlineServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UOnlineServices GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UOnlineServices(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugEventOverride
{
public:
	FDebugEventOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetOverrideEvent() {
		return memory.read<char>(m_addr + 0);
	}
	struct TArray<struct FString> GetraceEventTypeExamples() {
		return memory.read<struct TArray<struct FString>>(m_addr + 8);
	}
	struct FGuiRaceEventData GetRaceData() {
		return memory.read<struct FGuiRaceEventData>(m_addr + 24);
	}
	char GetuseEnduranceBodyKit() {
		return memory.read<char>(m_addr + 232);
	}
	char GetGameMode() {
		return memory.read<char>(m_addr + 233);
	}
	struct TArray<struct FString> GetgameModeExamples() {
		return memory.read<struct TArray<struct FString>>(m_addr + 240);
	}
	struct FWeatherStatus GetWeatherStatus() {
		return memory.read<struct FWeatherStatus>(m_addr + 256);
	}
	struct FTrackStatus GetTrackStatus() {
		return memory.read<struct FTrackStatus>(m_addr + 288);
	}
	char GetusableCarsOnly() {
		return memory.read<char>(m_addr + 316);
	}
	int32_t GetOfflineSpecialEventID() {
		return memory.read<int32_t>(m_addr + 320);
	}
	struct FString GetTrackName() {
		return memory.read<struct FString>(m_addr + 328);
	}
	struct FWeatherData GetWeatherData() {
		return memory.read<struct FWeatherData>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTeam
{
public:
	FGetTeam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTeamTemplate GetDestination() {
		return memory.read<struct FTeamTemplate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestLANServerList
{
public:
	FRequestLANServerList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_ServerItemAdded
{
public:
	FBP_ServerItemAdded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UServerInfoItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UServerInfoItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackStatus
{
public:
	FTrackStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetisRandom() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetIdealLineGrip() {
		return memory.read<float>(m_addr + 4);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 12);
	}
	float GetPuddlesLevel() {
		return memory.read<float>(m_addr + 16);
	}
	float GetWetDryLineLevel() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FWeatherStatus
{
public:
	FWeatherStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetambientTemperature() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRoadTemperature() {
		return memory.read<float>(m_addr + 4);
	}
	float GetwindSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetwindDirection() {
		return memory.read<float>(m_addr + 12);
	}
	float GetRainLevel() {
		return memory.read<float>(m_addr + 16);
	}
	float GetCloudLevel() {
		return memory.read<float>(m_addr + 20);
	}
	float GetRainIn10Minutes() {
		return memory.read<float>(m_addr + 24);
	}
	float GetRainIn30Minutes() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FACCFFBSettings
{
public:
	FACCFFBSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, float> GetMapCarUserGain() {
		return memory.read<struct TMap<struct FString, float>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPitLaneEntry
{
public:
	FOnPitLaneEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOverlappedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentTVCameraSet
{
public:
	FGetCurrentTVCameraSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCameraSet GetReturnValue() {
		return memory.read<struct FCameraSet>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRimTemplate
{
public:
	FGetRimTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FRimTemplate GetDestination() {
		return memory.read<struct FRimTemplate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FNameSeason
{
public:
	FNameSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTurboData
{
public:
	FTurboData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxBoost() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLagUP() {
		return memory.read<float>(m_addr + 4);
	}
	float GetLagDN() {
		return memory.read<float>(m_addr + 8);
	}
	float GetRpmRef() {
		return memory.read<float>(m_addr + 12);
	}
	float GetGammaGas() {
		return memory.read<float>(m_addr + 16);
	}
	float GetGammaRpm() {
		return memory.read<float>(m_addr + 20);
	}
	float GetWastegate() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetIsAdjustable() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FDynamicControllerData GetController() {
		return memory.read<struct FDynamicControllerData>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlsStatus
{
public:
	FGetControlsStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FControlsStatus GetReturnValue() {
		return memory.read<struct FControlsStatus>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetState
{
public:
	FGetState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommandConfiguration
{
public:
	FCommandConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetEnableManufacturerExtras() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FString GetConfigurationName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	char GetCarControllerMode() {
		return memory.read<char>(m_addr + 24);
	}
	float GetGearShiftDebouncingMs() {
		return memory.read<float>(m_addr + 28);
	}
	struct TArray<struct FCommandDevice> GetCommandDevices() {
		return memory.read<struct TArray<struct FCommandDevice>>(m_addr + 32);
	}
	struct FGamepadSettings GetGamepadSettings() {
		return memory.read<struct FGamepadSettings>(m_addr + 48);
	}
	struct FKeyboardSettings GetKeyboardSettings() {
		return memory.read<struct FKeyboardSettings>(m_addr + 120);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 192);
	}
	float GetforceFeedbackIntervalSteps() {
		return memory.read<float>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FKeyboardSettings
{
public:
	FKeyboardSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetmouseSteering() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetmouseAcceleratorBrake() {
		return memory.read<bool>(m_addr + 9);
	}
	float GetsteerSpeed() {
		return memory.read<float>(m_addr + 12);
	}
	float GetsteerOppositeDirectionFactor() {
		return memory.read<float>(m_addr + 16);
	}
	float GetsteerGain() {
		return memory.read<float>(m_addr + 20);
	}
	float GetsteerResetFactor() {
		return memory.read<float>(m_addr + 24);
	}
	float GetlookAhead() {
		return memory.read<float>(m_addr + 28);
	}
	float GetmouseSpeed() {
		return memory.read<float>(m_addr + 32);
	}
	struct TArray<struct FCommandKey> GetUICommandButtonList() {
		return memory.read<struct TArray<struct FCommandKey>>(m_addr + 40);
	}
	struct TArray<struct FCommandKey> GetRaceCommandButtonList() {
		return memory.read<struct TArray<struct FCommandKey>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetDriverStintMaxMs
{
public:
	FgetDriverStintMaxMs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommandKey
{
public:
	FCommandKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType GetActionType() {
		return memory.read<enum class EControllerActionType>(m_addr + 8);
	}
	struct FInputChord GetKey() {
		return memory.read<struct FInputChord>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCameraViewByTagTransition
{
public:
	FSetCameraViewByTagTransition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Gettag_name() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FViewTargetTransitionParams Gettransition_params() {
		return memory.read<struct FViewTargetTransitionParams>(m_addr + 16);
	}
	struct ACameraActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct ACameraActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGamepadSettings
{
public:
	FGamepadSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetUseSteerWithRight() {
		return memory.read<bool>(m_addr + 8);
	}
	float GetRumbleIntensity() {
		return memory.read<float>(m_addr + 12);
	}
	float GetsteerSpeed() {
		return memory.read<float>(m_addr + 16);
	}
	float GetSteerGamma() {
		return memory.read<float>(m_addr + 20);
	}
	float GetSteerFilter() {
		return memory.read<float>(m_addr + 24);
	}
	float GetDeadZone() {
		return memory.read<float>(m_addr + 28);
	}
	float GetSpeedSensitivity() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetUseAutoSteer() {
		return memory.read<bool>(m_addr + 36);
	}
	bool GetUseOldVibration() {
		return memory.read<bool>(m_addr + 37);
	}
	struct TArray<struct FCommandKey> GetUICommandButtonList() {
		return memory.read<struct TArray<struct FCommandKey>>(m_addr + 40);
	}
	struct TArray<struct FCommandKey> GetRaceCommandButtonList() {
		return memory.read<struct TArray<struct FCommandKey>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommandDevice
{
public:
	FCommandDevice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetuniqueDeviceIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetcurrentDeviceIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FName GetProductName() {
		return memory.read<struct FName>(m_addr + 20);
	}
	struct FName GetProductId() {
		return memory.read<struct FName>(m_addr + 28);
	}
	struct FName GetInstanceGuid() {
		return memory.read<struct FName>(m_addr + 36);
	}
	struct FName GetSteeringWheelModel() {
		return memory.read<struct FName>(m_addr + 44);
	}
	char GetIsGamePad() {
		return memory.read<char>(m_addr + 52);
	}
	char GetIsPedals() {
		return memory.read<char>(m_addr + 53);
	}
	struct FName GetIconTemplate() {
		return memory.read<struct FName>(m_addr + 56);
	}
	struct TArray<struct FCommandButton> GetUICommandButtonList() {
		return memory.read<struct TArray<struct FCommandButton>>(m_addr + 64);
	}
	struct TArray<struct FCommandButton> GetRaceCommandButtonList() {
		return memory.read<struct TArray<struct FCommandButton>>(m_addr + 80);
	}
	struct TArray<struct FCommandAxis> GetRaceCommandAxisList() {
		return memory.read<struct TArray<struct FCommandAxis>>(m_addr + 96);
	}
	float GetForceFeedbackGain() {
		return memory.read<float>(m_addr + 112);
	}
	float GetSteerScale() {
		return memory.read<float>(m_addr + 116);
	}
	float GetSteerLock() {
		return memory.read<float>(m_addr + 120);
	}
	float GetDynamicDamping() {
		return memory.read<float>(m_addr + 124);
	}
	float GetSteerLinearity() {
		return memory.read<float>(m_addr + 128);
	}
	float GetRoadEffects() {
		return memory.read<float>(m_addr + 132);
	}
	float GetMinDamper() {
		return memory.read<float>(m_addr + 136);
	}
	float GetDamperGain() {
		return memory.read<float>(m_addr + 140);
	}
	float GetAntaniGain() {
		return memory.read<float>(m_addr + 144);
	}
	float GetMinimumForceFeedback() {
		return memory.read<float>(m_addr + 148);
	}
	float GetBrakeGamma() {
		return memory.read<float>(m_addr + 152);
	}
	char GetCombinedPedals() {
		return memory.read<char>(m_addr + 156);
	}
	bool GetIsConnected() {
		return memory.read<bool>(m_addr + 157);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommandAxis
{
public:
	FCommandAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAxisIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	enum class EControllerAxisType GetAxisCode() {
		return memory.read<enum class EControllerAxisType>(m_addr + 12);
	}
	float GetMinRange() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetIsCombined() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FInputAxis
{
public:
	FInputAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetAxisName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetKeyAsString() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 32);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommandButton
{
public:
	FCommandButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetButtonIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetPowIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetPowValue() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FName GetKeyName() {
		return memory.read<struct FName>(m_addr + 20);
	}
	struct FName GetGamepadButtonName() {
		return memory.read<struct FName>(m_addr + 28);
	}
	enum class EControllerActionType GetInstantActionCode() {
		return memory.read<enum class EControllerActionType>(m_addr + 36);
	}
	enum class EControllerActionType GetExtendedActionCode() {
		return memory.read<enum class EControllerActionType>(m_addr + 38);
	}
	float GetExtendedTime() {
		return memory.read<float>(m_addr + 40);
	}
	enum class EControllerActionType GetPinkieInstanceActionCode() {
		return memory.read<enum class EControllerActionType>(m_addr + 44);
	}
	enum class EControllerActionType GetPinkieExtendedActionCode() {
		return memory.read<enum class EControllerActionType>(m_addr + 45);
	}

private:
	std::uint64_t m_addr = 0;
};class FRodData
{
public:
	FRodData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCar() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetWheel() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FFuelData
{
public:
	FFuelData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFuelKG() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFuelConsumptionK() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxFuel() {
		return memory.read<float>(m_addr + 8);
	}
	float GetFuel() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParticleList
{
public:
	FGetParticleList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EParticleLod GetParticleLod() {
		return memory.read<enum class EParticleLod>(m_addr + 0);
	}
	struct TArray<struct FName> GetList() {
		return memory.read<struct TArray<struct FName>>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiIconTemplate
{
public:
	FGuiIconTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetHardwarePicture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture2D(ptr_addr);
	}
	struct TArray<struct UTexture2D> GetButtonIcons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}
	struct TArray<struct UTexture2D> GetAxisIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}
	struct TMap<struct FName, struct UTexture2D> GetPowIcons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TMap<struct FName, struct UTexture2D>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPitExitLaneSide
{
public:
	FOnPitExitLaneSide(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOverlappedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FisOldGen
{
public:
	FisOldGen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getmodel_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetItem
{
public:
	FSetItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetDeviceIndex() {
		return memory.read<char>(m_addr + 0);
	}
	char GetinputIndex() {
		return memory.read<char>(m_addr + 1);
	}
	struct FText Get_title() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct UTexture2D GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D Getpinkie() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D Getoptional() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiColorsAsset
{
public:
	FGuiColorsAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiColors GetColorName() {
		return memory.read<enum class EGuiColors>(m_addr + 8);
	}
	struct FSlateColor GetColor() {
		return memory.read<struct FSlateColor>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRainGlobalLevel
{
public:
	FGetRainGlobalLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetColorSaturation
{
public:
	FGetColorSaturation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiCar
{
public:
	FGuiCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModelInfo GetInfo() {
		return memory.read<struct FModelInfo>(m_addr + 0);
	}
	struct ACarAvatar GetSprintCarAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 424);
		return struct ACarAvatar(ptr_addr);
	}
	struct ACarAvatar GetEnduranceCarAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct ACarAvatar(ptr_addr);
	}
	UObject GetUClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 496);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetModelSponsorKeys
{
public:
	FgetModelSponsorKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct TArray<char> GetReturnValue() {
		return memory.read<struct TArray<char>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FModelInfo
{
public:
	FModelInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCarModelName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 16);
	}
	bool GetIsSelectableCar() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetIsOpponentCar() {
		return memory.read<bool>(m_addr + 18);
	}
	bool GetIsAvailableOnlyToDevsAndTesters() {
		return memory.read<bool>(m_addr + 19);
	}
	struct TSet<enum class ESeasonType> GetallowAsOpponentBySeason() {
		return memory.read<struct TSet<enum class ESeasonType>>(m_addr + 24);
	}
	struct TSet<enum class ECarGroup> GetcarGroups() {
		return memory.read<struct TSet<enum class ECarGroup>>(m_addr + 104);
	}
	enum class EBrandType GetBrand() {
		return memory.read<enum class EBrandType>(m_addr + 184);
	}
	int32_t GetDebutYear() {
		return memory.read<int32_t>(m_addr + 188);
	}
	int32_t GetPrice() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct FText GetDescription() {
		return memory.read<struct FText>(m_addr + 200);
	}
	enum class EContentType GetContentId() {
		return memory.read<enum class EContentType>(m_addr + 224);
	}
	struct TMap<enum class ETrackBopType, struct UBOPData> GetTrackBOP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct TMap<enum class ETrackBopType, struct UBOPData>(ptr_addr);
	}
	struct FModelCockpitCamInfo GetCockpitCamSettings() {
		return memory.read<struct FModelCockpitCamInfo>(m_addr + 312);
	}
	struct TArray<struct FVector> GetCameraOffsets() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 336);
	}
	struct TArray<float> GetCameraPitches() {
		return memory.read<struct TArray<float>>(m_addr + 352);
	}
	struct FModelOnboardCamInfo GetOnboardCamSettings() {
		return memory.read<struct FModelOnboardCamInfo>(m_addr + 368);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUIDataFromPreset
{
public:
	FGetUIDataFromPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance Getgame_instance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct FSpecialEventPreset GetPreset() {
		return memory.read<struct FSpecialEventPreset>(m_addr + 8);
	}
	struct FSpecialEventUIData GetReturnValue() {
		return memory.read<struct FSpecialEventUIData>(m_addr + 584);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNormalizedWiperPosition
{
public:
	FGetNormalizedWiperPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetWiperIndex() {
		return memory.read<char>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestDriverSummary
{
public:
	FRequestDriverSummary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FModelOnboardCamInfo
{
public:
	FModelOnboardCamInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> Getpositions() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}
	struct TArray<struct FRotator> GetRotations() {
		return memory.read<struct TArray<struct FRotator>>(m_addr + 24);
	}
	struct TArray<float> GetFOVs() {
		return memory.read<struct TArray<float>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiServerInfo
{
public:
	FGuiServerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesMPServerInfo GetServerInfo() {
		return memory.read<struct FOnlineServicesMPServerInfo>(m_addr + 0);
	}
	bool GetServerSet() {
		return memory.read<bool>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControllerType
{
public:
	FSetControllerType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAcControllerType GetType() {
		return memory.read<enum class EAcControllerType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiLoadingScreenInfo
{
public:
	FGuiLoadingScreenInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTrackDisplayName() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetTrackName() {
		return memory.read<struct FText>(m_addr + 24);
	}
	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FText GetCarName() {
		return memory.read<struct FText>(m_addr + 56);
	}
	struct FText GetDriverName() {
		return memory.read<struct FText>(m_addr + 80);
	}
	struct FText GetLapTime() {
		return memory.read<struct FText>(m_addr + 104);
	}
	struct FText GetTeamName() {
		return memory.read<struct FText>(m_addr + 128);
	}
	struct FText GetTypeSession() {
		return memory.read<struct FText>(m_addr + 152);
	}
	struct FText GetInfoLine() {
		return memory.read<struct FText>(m_addr + 176);
	}
	bool GetIsInfoFromSpecialEvent() {
		return memory.read<bool>(m_addr + 200);
	}
	enum class EGuiLoadingInfoType GetLoadingType() {
		return memory.read<enum class EGuiLoadingInfoType>(m_addr + 201);
	}
	enum class EGuiGameModes GetGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 202);
	}
	struct FGuiRaceEventData GetRaceData() {
		return memory.read<struct FGuiRaceEventData>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupPresetsJson
{
public:
	FSetupPresetsJson(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetScreenName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TMap<struct FName, struct FCarSetup> GetSetupMap() {
		return memory.read<struct TMap<struct FName, struct FCarSetup>>(m_addr + 16);
	}
	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGuiRealism
{
public:
	FGuiRealism(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiPresetType GetPresetType() {
		return memory.read<enum class EGuiPresetType>(m_addr + 8);
	}
	float GetdamageRate() {
		return memory.read<float>(m_addr + 12);
	}
	bool GettyreWear() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetfuelConsumption() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetunlimitedTyreSet() {
		return memory.read<bool>(m_addr + 18);
	}
	bool GetbrakeFading() {
		return memory.read<bool>(m_addr + 19);
	}

private:
	std::uint64_t m_addr = 0;
};class FKSRandom
{
public:
	FKSRandom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMin() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMax() {
		return memory.read<float>(m_addr + 4);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleLightStages
{
public:
	FcycleLightStages(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisUp() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAudioSave
{
public:
	FAudioSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMain() {
		return memory.read<float>(m_addr + 0);
	}
	float GetEngineExt() {
		return memory.read<float>(m_addr + 4);
	}
	float GetEngineInt() {
		return memory.read<float>(m_addr + 8);
	}
	float GetWheel() {
		return memory.read<float>(m_addr + 12);
	}
	float Getwind() {
		return memory.read<float>(m_addr + 16);
	}
	float Getenvironment() {
		return memory.read<float>(m_addr + 20);
	}
	float Getdamage() {
		return memory.read<float>(m_addr + 24);
	}
	float Getcomms() {
		return memory.read<float>(m_addr + 28);
	}
	float GetStartingComms() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetSpotter() {
		return memory.read<bool>(m_addr + 36);
	}
	float Getmusic() {
		return memory.read<float>(m_addr + 40);
	}
	float GetOpponent() {
		return memory.read<float>(m_addr + 44);
	}
	float Getgui() {
		return memory.read<float>(m_addr + 48);
	}
	float Getvideo() {
		return memory.read<float>(m_addr + 52);
	}
	float Getbodywork() {
		return memory.read<float>(m_addr + 56);
	}
	struct FDriverAudioSave GetdriverAudio() {
		return memory.read<struct FDriverAudioSave>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetYearBySeason
{
public:
	FGetYearBySeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FValidateSeason
{
public:
	FValidateSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriverAudioSave
{
public:
	FDriverAudioSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNotifyReceived
{
public:
	FOnNotifyReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeDelay() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSmokeDirtParticles
{
public:
	FSmokeDirtParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetSmoke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UParticleSystem(ptr_addr);
	}
	struct UParticleSystem Getdirt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UParticleSystem(ptr_addr);
	}
	struct UParticleSystem Getstone() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UParticleSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FVirtualDesktopLayout
{
public:
	FVirtualDesktopLayout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FString Getcaption() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct TArray<struct FRaceWidgetLayout> GetwidgetDefinitions() {
		return memory.read<struct TArray<struct FRaceWidgetLayout>>(m_addr + 32);
	}
	bool GetIsDisabled() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetisDevOrTestOnly() {
		return memory.read<bool>(m_addr + 49);
	}
	bool GetisDevOnly() {
		return memory.read<bool>(m_addr + 50);
	}
	bool GethideInSingleplayer() {
		return memory.read<bool>(m_addr + 51);
	}
	bool GethideInMultiplayer() {
		return memory.read<bool>(m_addr + 52);
	}
	struct TArray<enum class ESessionType> GethideInSessionTypes() {
		return memory.read<struct TArray<enum class ESessionType>>(m_addr + 56);
	}
	AAcChildHUD GetDesktopHUDClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return AAcChildHUD(ptr_addr);
	}
	bool GetAllowMouse() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_teleportCarsToSpawn
{
public:
	Facc_teleportCarsToSpawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getstart_type() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSmokeDirtCurves
{
public:
	FSmokeDirtCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveFloat Getrate1Curve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat Getrate2Curve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetsmokeRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetstonesRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetsmokeBuildCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetsmokeCoolCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetOfficialEventByEntry
{
public:
	FgetOfficialEventByEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCarName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ERaceEventType GetReturnValue() {
		return memory.read<enum class ERaceEventType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FWaterParticles
{
public:
	FWaterParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetwaterSprayDrops() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UParticleSystem(ptr_addr);
	}
	struct UParticleSystem GetbackSpray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UParticleSystem(ptr_addr);
	}
	struct UParticleSystem GetwaterSprayDetail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UParticleSystem(ptr_addr);
	}
	struct UParticleSystem GetwaterSprayFog() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UParticleSystem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreAudio
{
public:
	FTyreAudio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GettyreId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FTyreAudioEvent> GettyreAudioEvents() {
		return memory.read<struct TArray<struct FTyreAudioEvent>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreAudioEvent
{
public:
	FTyreAudioEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTime() {
		return memory.read<float>(m_addr + 0);
	}
	enum class EPitstopAudioEvent GetAudioEvent() {
		return memory.read<enum class EPitstopAudioEvent>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FACOnboardCameraSettings
{
public:
	FACOnboardCameraSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, struct FACOnboardCameraCarInfo> GetMapCarCameraData() {
		return memory.read<struct TMap<struct FString, struct FACOnboardCameraCarInfo>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCircuits
{
public:
	FSetCircuits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> Getcircuit_indexes() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FACOnboardCameraCarInfo
{
public:
	FACOnboardCameraCarInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getpositions[4]() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetRotations[4]() {
		return memory.read<struct FRotator>(m_addr + 48);
	}
	float GetFOVs[4]() {
		return memory.read<float>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPanelFocused
{
public:
	FOnPanelFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPanelBase GetpanelOnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPanelBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FACPhotomodeSettings
{
public:
	FACPhotomodeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumCarsCastingShadows() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFocusedCarFullLightRadius() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetCarLightRadiusCM() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCarLightMultiplier() {
		return memory.read<float>(m_addr + 12);
	}
	float GetTyreShadowPower() {
		return memory.read<float>(m_addr + 16);
	}
	float GetTyreShadowMult() {
		return memory.read<float>(m_addr + 20);
	}
	int32_t GetNumFramesToWait() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetDebugFlags() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCameraPitch
{
public:
	FGetCurrentCameraPitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FACCameraSettings
{
public:
	FACCameraSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetLastUsedCamIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetLastUsedOnboardIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetGeneralMovement() {
		return memory.read<float>(m_addr + 12);
	}
	float GetOnboardMovement() {
		return memory.read<float>(m_addr + 16);
	}
	float GetDashcamFactor() {
		return memory.read<float>(m_addr + 20);
	}
	float GetPanniniProjection() {
		return memory.read<float>(m_addr + 24);
	}
	float GetHelicamDistance() {
		return memory.read<float>(m_addr + 28);
	}
	float GetHelicamFOV() {
		return memory.read<float>(m_addr + 32);
	}
	char GetHelicamTargetMoreCars() {
		return memory.read<char>(m_addr + 36);
	}
	float GetHelicamTargetCarsMaxDist() {
		return memory.read<float>(m_addr + 40);
	}
	float GetHelicamTargetInterpTime() {
		return memory.read<float>(m_addr + 44);
	}
	char GetHelicamDebug() {
		return memory.read<char>(m_addr + 48);
	}
	float GetCameraFOV[7]() {
		return memory.read<float>(m_addr + 52);
	}
	struct TMap<struct FString, struct FACCameraCarInfo> GetMapCarCameraData() {
		return memory.read<struct TMap<struct FString, struct FACCameraCarInfo>>(m_addr + 80);
	}
	float GetLookWithSteerGain() {
		return memory.read<float>(m_addr + 160);
	}
	float GetLookWithSteerGamma() {
		return memory.read<float>(m_addr + 164);
	}
	float GetLookWithSteerSmoothing() {
		return memory.read<float>(m_addr + 168);
	}
	float GetLookAroundSpeed() {
		return memory.read<float>(m_addr + 172);
	}
	float GetHorizonLock() {
		return memory.read<float>(m_addr + 176);
	}
	char GetEnableTrackIR() {
		return memory.read<char>(m_addr + 180);
	}
	float GetTripleWidth() {
		return memory.read<float>(m_addr + 184);
	}
	float GetTripleDistance() {
		return memory.read<float>(m_addr + 188);
	}
	float GetTripleAngle() {
		return memory.read<float>(m_addr + 192);
	}
	float GetTripleBezel() {
		return memory.read<float>(m_addr + 196);
	}
	float GetHDRExposure() {
		return memory.read<float>(m_addr + 200);
	}
	float GetHDRContrast() {
		return memory.read<float>(m_addr + 204);
	}
	int32_t GetMirrorFOV() {
		return memory.read<int32_t>(m_addr + 208);
	}
	char GetUseGamepadForFreeCamera() {
		return memory.read<char>(m_addr + 212);
	}
	float GetVirtualMirrorSize() {
		return memory.read<float>(m_addr + 216);
	}
	float GetVirtualMirrorVerticalOffset() {
		return memory.read<float>(m_addr + 220);
	}
	float GetVirtualMirrorHorizontalOffset() {
		return memory.read<float>(m_addr + 224);
	}
	float GetTVCamFocusedAperture() {
		return memory.read<float>(m_addr + 228);
	}
	float GetTVCamStaticAperture() {
		return memory.read<float>(m_addr + 232);
	}
	float GetTVCamStaticFocusDistance() {
		return memory.read<float>(m_addr + 236);
	}
	char GetTVCamConstrainAspectRatio() {
		return memory.read<char>(m_addr + 240);
	}
	char GetFreeCamDOFEnabled() {
		return memory.read<char>(m_addr + 241);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLastValue
{
public:
	FGetLastValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReBindActionKey
{
public:
	FReBindActionKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputAction GetCurrentBinding() {
		return memory.read<struct FInputAction>(m_addr + 0);
	}
	struct FInputAction GetNewBinding() {
		return memory.read<struct FInputAction>(m_addr + 64);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FACCameraCarInfo
{
public:
	FACCameraCarInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCockpitVisMode() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetDashInHud() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetDashInHudWidthLimit() {
		return memory.read<bool>(m_addr + 5);
	}
	float GetDashOpacity() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetOffsets[7]() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	float GetPitches[7]() {
		return memory.read<float>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FSortNamedTexts
{
public:
	FSortNamedTexts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FText> Getnamed_texts() {
		return memory.read<struct TMap<struct FName, struct FText>>(m_addr + 0);
	}
	struct TMap<struct FName, struct FText> GetReturnValue() {
		return memory.read<struct TMap<struct FName, struct FText>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FCameraSet
{
public:
	FCameraSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateActiveWidgetIndex
{
public:
	FUpdateActiveWidgetIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUVRect
{
public:
	FGetUVRect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBox2D GetReturnValue() {
		return memory.read<struct FBox2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceWidgetLayoutBase
{
public:
	FRaceWidgetLayoutBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAcRaceWidgetBase GetraceWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UAcRaceWidgetBase(ptr_addr);
	}
	struct FString Getcaption() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetalwaysVisible() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetIsDisabled() {
		return memory.read<bool>(m_addr + 33);
	}
	bool GetisDevOrTestOnly() {
		return memory.read<bool>(m_addr + 34);
	}
	bool GetisDevOnly() {
		return memory.read<bool>(m_addr + 35);
	}
	struct TArray<enum class ESessionType> GethideInSessionTypes() {
		return memory.read<struct TArray<enum class ESessionType>>(m_addr + 40);
	}
	bool GethideInSingleplayer() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GethideInMultiplayer() {
		return memory.read<bool>(m_addr + 57);
	}
	bool GethasSessionTypeOverride() {
		return memory.read<bool>(m_addr + 58);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarGroupToMPCarGroup
{
public:
	FCarGroupToMPCarGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup Getcar_group() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}
	enum class EMPCarGroup GetReturnValue() {
		return memory.read<enum class EMPCarGroup>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FAcGraphicsPreset
{
public:
	FAcGraphicsPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetResolutionQuality() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetViewDistanceQuality() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetAntiAliasingQuality() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetShadowQuality() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetPostProcessQuality() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetTextureQuality() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetEffectsQuality() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetFoliageQuality() {
		return memory.read<int32_t>(m_addr + 36);
	}
	char GetMirrorQualityLevel() {
		return memory.read<char>(m_addr + 40);
	}
	int32_t GetMirrorFramerateCap() {
		return memory.read<int32_t>(m_addr + 44);
	}
	char GetMaxCarsVisible() {
		return memory.read<char>(m_addr + 48);
	}
	bool GetisAATemporal() {
		return memory.read<bool>(m_addr + 49);
	}
	float GetPixelDensity() {
		return memory.read<float>(m_addr + 52);
	}
	int32_t GetMirrorDistance() {
		return memory.read<int32_t>(m_addr + 56);
	}
	bool GetAdvancedSharpenFilter() {
		return memory.read<bool>(m_addr + 60);
	}
	char GetMaterialsQuality() {
		return memory.read<char>(m_addr + 61);
	}
	bool GetTemporalUpsampling() {
		return memory.read<bool>(m_addr + 62);
	}
	char GetVolumetricFog() {
		return memory.read<char>(m_addr + 63);
	}
	float GetBloomLevel() {
		return memory.read<float>(m_addr + 64);
	}
	char GetBloomQuality() {
		return memory.read<char>(m_addr + 68);
	}
	char GetMirrorsResolution() {
		return memory.read<char>(m_addr + 69);
	}
	float GetFoliageLodQuality() {
		return memory.read<float>(m_addr + 72);
	}
	char GetCarLODSet() {
		return memory.read<char>(m_addr + 76);
	}
	bool GetHLODEnabled() {
		return memory.read<bool>(m_addr + 77);
	}
	bool GetDLSSEnable() {
		return memory.read<bool>(m_addr + 78);
	}
	int32_t GetDLSSQuality() {
		return memory.read<int32_t>(m_addr + 80);
	}
	float GetDLSSSharpness() {
		return memory.read<float>(m_addr + 84);
	}
	bool GetTAAGen5() {
		return memory.read<bool>(m_addr + 88);
	}
	bool GetAMDFSREnable() {
		return memory.read<bool>(m_addr + 89);
	}
	int32_t GetAMDFSRQuality() {
		return memory.read<int32_t>(m_addr + 92);
	}
	float GetAMDFSRSharpness() {
		return memory.read<float>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUserPresets
{
public:
	FGetUserPresets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFileItem> GetReturnValue() {
		return memory.read<struct TArray<struct FFileItem>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompetitionList
{
public:
	FCompetitionList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCompetitionEntryList> GetEntryList() {
		return memory.read<struct TArray<struct FCompetitionEntryList>>(m_addr + 8);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetFlashingLights
{
public:
	FsetFlashingLights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisOn() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetanimEnable() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FisFinishAsSpectatorEnabled
{
public:
	FisFinishAsSpectatorEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompetitionEntryList
{
public:
	FCompetitionEntryList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCarKey() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct TArray<struct FName> GetDriverKey() {
		return memory.read<struct TArray<struct FName>>(m_addr + 16);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRollingStartMessage
{
public:
	FRollingStartMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetshowMessage() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FCarInfo GetcarToFollow() {
		return memory.read<struct FCarInfo>(m_addr + 8);
	}
	struct FString GetmainMessage() {
		return memory.read<struct FString>(m_addr + 232);
	}
	struct FString GetwarningMessage() {
		return memory.read<struct FString>(m_addr + 248);
	}
	float GetwarningTimer() {
		return memory.read<float>(m_addr + 264);
	}
	bool GetisIgnored() {
		return memory.read<bool>(m_addr + 268);
	}
	float GetcurrentSpeed() {
		return memory.read<float>(m_addr + 272);
	}
	float GettargetSpeed() {
		return memory.read<float>(m_addr + 276);
	}
	int32_t GetTargetPosition() {
		return memory.read<int32_t>(m_addr + 280);
	}
	int32_t GetlatPosition() {
		return memory.read<int32_t>(m_addr + 284);
	}
	int32_t GetlngPosition() {
		return memory.read<int32_t>(m_addr + 288);
	}
	int32_t Getdistance_between_cars_cm() {
		return memory.read<int32_t>(m_addr + 292);
	}
	float Getspeed_damper() {
		return memory.read<float>(m_addr + 296);
	}
	bool GetcarLocked() {
		return memory.read<bool>(m_addr + 300);
	}
	bool GetshowPrestartWarning() {
		return memory.read<bool>(m_addr + 301);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetButtonIsFocusable
{
public:
	FSetButtonIsFocusable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UButton GetButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UButton(ptr_addr);
	}
	bool Getis_focusable() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSessionInfoUI
{
public:
	FSessionInfoUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetActive() {
		return memory.read<bool>(m_addr + 0);
	}
	int32_t GetDurationSeconds() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetStartHour() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetStartMinute() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetStartDay() {
		return memory.read<int32_t>(m_addr + 16);
	}
	enum class ESessionType GetsessionType() {
		return memory.read<enum class ESessionType>(m_addr + 20);
	}
	struct FText GetTypeText() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FisNewGen
{
public:
	FisNewGen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getmodel_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTertiaryColor
{
public:
	FSetTertiaryColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateNewSeason
{
public:
	FCreateNewSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSeason() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceWeekendForecast
{
public:
	FRaceWeekendForecast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRaceWeekendSessionDefinition> Getsessions() {
		return memory.read<struct TArray<struct FRaceWeekendSessionDefinition>>(m_addr + 0);
	}
	struct TArray<struct FRaceWeekendForecastSlice> GettimeSlices() {
		return memory.read<struct TArray<struct FRaceWeekendForecastSlice>>(m_addr + 16);
	}
	float Getaccuracy() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxRange
{
public:
	FGetMaxRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDistanceAtLocation
{
public:
	FGetDistanceAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetLeftDoor
{
public:
	FsetLeftDoor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_opening() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceWeekendForecastSlice
{
public:
	FRaceWeekendForecastSlice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetweekendTime() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}
	struct FTimespan GetsliceLength() {
		return memory.read<struct FTimespan>(m_addr + 8);
	}
	float GetambientTemperature() {
		return memory.read<float>(m_addr + 16);
	}
	float GetRoadTemperature() {
		return memory.read<float>(m_addr + 20);
	}
	float GetwindSpeed() {
		return memory.read<float>(m_addr + 24);
	}
	float GetRainLevel() {
		return memory.read<float>(m_addr + 28);
	}
	float GetCloudLevel() {
		return memory.read<float>(m_addr + 32);
	}
	float GetsunLightFactor() {
		return memory.read<float>(m_addr + 36);
	}
	float GetWetness() {
		return memory.read<float>(m_addr + 40);
	}
	float Getpuddles() {
		return memory.read<float>(m_addr + 44);
	}
	float GettrackGrip() {
		return memory.read<float>(m_addr + 48);
	}
	struct FText GetsessionText() {
		return memory.read<struct FText>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentDelta
{
public:
	FgetCurrentDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceWeekendSessionDefinition
{
public:
	FRaceWeekendSessionDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetStart() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}
	struct FTimespan GetEnd() {
		return memory.read<struct FTimespan>(m_addr + 8);
	}
	enum class ESessionType GetType() {
		return memory.read<enum class ESessionType>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarSetup
{
public:
	FCarSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCarName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FBasicCarSetup GetBasicSetup() {
		return memory.read<struct FBasicCarSetup>(m_addr + 24);
	}
	struct FAdvancedCarSetup GetAdvancedSetup() {
		return memory.read<struct FAdvancedCarSetup>(m_addr + 200);
	}
	int32_t GettrackBopType() {
		return memory.read<int32_t>(m_addr + 408);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDirectionRightBlinkOn
{
public:
	FIsDirectionRightBlinkOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPhysicsLateCount
{
public:
	FGetPhysicsLateCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceGameModeJson
{
public:
	FRaceGameModeJson(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCarAvatarJson> Getcars() {
		return memory.read<struct TArray<struct FCarAvatarJson>>(m_addr + 0);
	}
	int32_t GetleaderLapCountAtStart() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetisPitlaneOpen() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSharpen
{
public:
	FGetSharpen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChampionshipDatatable
{
public:
	FGetChampionshipDatatable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	bool Getis_custom() {
		return memory.read<bool>(m_addr + 1);
	}
	struct UDataTable GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPrimaryColor
{
public:
	FSetPrimaryColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarAvatarJson
{
public:
	FCarAvatarJson(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetcarId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetdriverIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetoldPhysicsTimeMs() {
		return memory.read<float>(m_addr + 8);
	}
	struct FTeamStrategy GetStrategy() {
		return memory.read<struct FTeamStrategy>(m_addr + 16);
	}
	struct FPitSpeedingDetector GetPitSpeedingDetector() {
		return memory.read<struct FPitSpeedingDetector>(m_addr + 504);
	}
	struct FPitstopMFD GetPitstopMFD() {
		return memory.read<struct FPitstopMFD>(m_addr + 512);
	}
	struct FFuelStruct GetFuel() {
		return memory.read<struct FFuelStruct>(m_addr + 696);
	}
	struct TArray<struct FTyreSet> GettyreSets() {
		return memory.read<struct TArray<struct FTyreSet>>(m_addr + 720);
	}
	struct TArray<struct FTyreSet> GetstartingTyreSets() {
		return memory.read<struct TArray<struct FTyreSet>>(m_addr + 736);
	}
	int32_t GetcurrentTyreSet() {
		return memory.read<int32_t>(m_addr + 752);
	}
	int32_t GetcurrentTyreCompound() {
		return memory.read<int32_t>(m_addr + 756);
	}
	int32_t GetcurrentFrontBrakeCompound() {
		return memory.read<int32_t>(m_addr + 760);
	}
	int32_t GetcurrentRearBrakeCompound() {
		return memory.read<int32_t>(m_addr + 764);
	}
	float GetlastSplitNpos() {
		return memory.read<float>(m_addr + 768);
	}
	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 772);
	}
	bool GethotlapFirstLapArmed() {
		return memory.read<bool>(m_addr + 776);
	}
	int32_t GetfilteredTimeAhead() {
		return memory.read<int32_t>(m_addr + 780);
	}
	float GetaverageRelativeSpeed() {
		return memory.read<float>(m_addr + 784);
	}
	struct FCarSetup GetCarSetup() {
		return memory.read<struct FCarSetup>(m_addr + 792);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdvancedCarSetup
{
public:
	FAdvancedCarSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupMechanicalBalance GetMechanicalBalance() {
		return memory.read<struct FSetupMechanicalBalance>(m_addr + 0);
	}
	struct FSetupDampers GetDampers() {
		return memory.read<struct FSetupDampers>(m_addr + 80);
	}
	struct FSetupAeroBalance GetAeroBalance() {
		return memory.read<struct FSetupAeroBalance>(m_addr + 144);
	}
	struct FSetupDrivetrain GetDrivetrain() {
		return memory.read<struct FSetupDrivetrain>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleFrontBrakes
{
public:
	FcycleFrontBrakes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisIncreased() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSeasonFilterApplied
{
public:
	FOnSeasonFilterApplied(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupDrivetrain
{
public:
	FSetupDrivetrain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPreload() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupAeroBalance
{
public:
	FSetupAeroBalance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetRideHeight() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	struct TArray<float> GetRodLength() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}
	int32_t GetSplitter() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetRearWing() {
		return memory.read<int32_t>(m_addr + 36);
	}
	struct TArray<int32_t> GetBrakeDuct() {
		return memory.read<struct TArray<int32_t>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupDampers
{
public:
	FSetupDampers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetBumpSlow() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	struct TArray<int32_t> GetBumpFast() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}
	struct TArray<int32_t> GetReboundSlow() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	struct TArray<int32_t> GetReboundFast() {
		return memory.read<struct TArray<int32_t>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FTempApplyAndSave
{
public:
	FTempApplyAndSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCycleEngineMap
{
public:
	FCycleEngineMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupMechanicalBalance
{
public:
	FSetupMechanicalBalance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetARBFront() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetARBRear() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<int32_t> GetWheelRate() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}
	struct TArray<int32_t> GetBumpStopRateUp() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}
	struct TArray<int32_t> GetBumpStopRateDn() {
		return memory.read<struct TArray<int32_t>>(m_addr + 40);
	}
	struct TArray<int32_t> GetBumpStopWindow() {
		return memory.read<struct TArray<int32_t>>(m_addr + 56);
	}
	int32_t GetBrakeTorque() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetBrakeBias() {
		return memory.read<int32_t>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateButton
{
public:
	FUpdateButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetMainText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetIcon() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupTyre
{
public:
	FSetupTyre(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GettyreCompound() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<int32_t> GettyrePressure() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FisEndOfSeason1
{
public:
	FisEndOfSeason1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupElectronics
{
public:
	FSetupElectronics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTC1() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTC2() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetAbs() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetECUMap() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetFuelMix() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTelemetryLaps() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreWearStatus
{
public:
	FTyreWearStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GettreadMM() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	float Getgrain() {
		return memory.read<float>(m_addr + 16);
	}
	float Getblister() {
		return memory.read<float>(m_addr + 20);
	}
	float GetmarblesLevel() {
		return memory.read<float>(m_addr + 24);
	}
	float GetflatSpot() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetisCriticalState() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSeasonOverallMedal
{
public:
	FgetSeasonOverallMedal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMedalType GetReturnValue() {
		return memory.read<enum class EMedalType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWiperLevel
{
public:
	FGetWiperLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAIState
{
public:
	FAIState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCurrentPush() {
		return memory.read<float>(m_addr + 0);
	}
	float GettargetSpeed() {
		return memory.read<float>(m_addr + 4);
	}
	float GetBrakeTargetSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetBrakeTargetDistance() {
		return memory.read<float>(m_addr + 12);
	}
	float GetCurrentRadius() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFuelStruct
{
public:
	FFuelStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetstartingFuelOnLastLap() {
		return memory.read<float>(m_addr + 0);
	}
	float GettotalFuelUsedInSession() {
		return memory.read<float>(m_addr + 4);
	}
	float GetfuelPerSingleLap() {
		return memory.read<float>(m_addr + 8);
	}
	float GetfuelPerKm() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetfuelLapCount() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCamerasByTag
{
public:
	FGetCamerasByTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Gettag_name() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct ACameraActor> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct ACameraActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemFocused
{
public:
	FOnItemFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTimeTableItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTimeTableItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValueByIndex
{
public:
	FGetValueByIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetLapCount
{
public:
	FgetLapCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPitstopMFD
{
public:
	FPitstopMFD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetActivePitStrategy() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTyreSet() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetIsDisabled() {
		return memory.read<bool>(m_addr + 8);
	}
	char GetFuelToAdd() {
		return memory.read<char>(m_addr + 9);
	}
	struct FVector2D GetFuelLimits() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	bool GetRefuellingAllowed() {
		return memory.read<bool>(m_addr + 20);
	}
	char GetNewTyreCompound() {
		return memory.read<char>(m_addr + 21);
	}
	struct TArray<struct FString> GetTyreCompoundNames() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}
	struct TArray<bool> GetTyreToChange() {
		return memory.read<struct TArray<bool>>(m_addr + 40);
	}
	struct TArray<float> GetTyrePressures() {
		return memory.read<struct TArray<float>>(m_addr + 56);
	}
	struct FVector2D GetTyrePressureLimits() {
		return memory.read<struct FVector2D>(m_addr + 72);
	}
	bool GetDriverSwapAllowed() {
		return memory.read<bool>(m_addr + 80);
	}
	char GetNewDriverIndexForSwap() {
		return memory.read<char>(m_addr + 81);
	}
	struct FString GetNewDriverNameToDisplay() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct TArray<struct FString> GetDriversNames() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}
	struct TArray<int32_t> GetDriversStintTotalTimeLeft() {
		return memory.read<struct TArray<int32_t>>(m_addr + 120);
	}
	struct TArray<bool> GetHasDriversDoneAStint() {
		return memory.read<struct TArray<bool>>(m_addr + 136);
	}
	char GetCurrentDriverIndex() {
		return memory.read<char>(m_addr + 152);
	}
	bool GetRepairBody() {
		return memory.read<bool>(m_addr + 153);
	}
	bool GetRepairSuspension() {
		return memory.read<bool>(m_addr + 154);
	}
	bool GetRepairEngine() {
		return memory.read<bool>(m_addr + 155);
	}
	float GetTimeRequired() {
		return memory.read<float>(m_addr + 156);
	}
	bool GetMustServePenalty() {
		return memory.read<bool>(m_addr + 160);
	}
	bool GetServePenalty() {
		return memory.read<bool>(m_addr + 161);
	}
	bool GetchangeBrakeDiscs() {
		return memory.read<bool>(m_addr + 162);
	}
	int32_t GetfrontBrakeCompound() {
		return memory.read<int32_t>(m_addr + 164);
	}
	int32_t GetrearBrakeCompound() {
		return memory.read<int32_t>(m_addr + 168);
	}
	bool GetIsValidForMandatory() {
		return memory.read<bool>(m_addr + 172);
	}
	bool GetisDriverSwapRequired() {
		return memory.read<bool>(m_addr + 173);
	}
	bool GetisTyreChangeRequired() {
		return memory.read<bool>(m_addr + 174);
	}
	bool GetisRefuellingRequired() {
		return memory.read<bool>(m_addr + 175);
	}
	bool GetIsPitEntryValid() {
		return memory.read<bool>(m_addr + 176);
	}
	bool GethasPitWindowRule() {
		return memory.read<bool>(m_addr + 177);
	}
	bool GethasDriverStintRule() {
		return memory.read<bool>(m_addr + 178);
	}
	bool GetIsDriverStintCompleted() {
		return memory.read<bool>(m_addr + 179);
	}
	char GetmissingMandatoryPitstops() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbaseMandatoryPitstops() {
		return memory.read<char>(m_addr + 181);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRightDoor
{
public:
	FSetRightDoor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_opening() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetKeysForActions
{
public:
	FGetKeysForActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController Getplayer_controller() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct TArray<enum class EControllerActionType> Getaction_types() {
		return memory.read<struct TArray<enum class EControllerActionType>>(m_addr + 8);
	}
	struct TArray<struct FInputActionKeyMapping> GetReturnValue() {
		return memory.read<struct TArray<struct FInputActionKeyMapping>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FPitSpeedingDetector
{
public:
	FPitSpeedingDetector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GettimeOverLimitS() {
		return memory.read<float>(m_addr + 0);
	}
	float GetmaxSpeedKmh() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDamage
{
public:
	FCarDamage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetdamageFront() {
		return memory.read<float>(m_addr + 0);
	}
	float GetdamageRear() {
		return memory.read<float>(m_addr + 4);
	}
	float GetdamageLeft() {
		return memory.read<float>(m_addr + 8);
	}
	float GetdamageRight() {
		return memory.read<float>(m_addr + 12);
	}
	float GetdamageCentral() {
		return memory.read<float>(m_addr + 16);
	}
	float GetengineLifeLeft() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FisEngineRunning
{
public:
	FisEngineRunning(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRightDoorTime
{
public:
	FGetRightDoorTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FForceAnimation
{
public:
	FForceAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateShowroomCarRotation
{
public:
	FUpdateShowroomCarRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getreset_to_sideview() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMeteoInfos
{
public:
	FMeteoInfos(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWeatherPresetType GetMeteoType() {
		return memory.read<enum class EWeatherPresetType>(m_addr + 8);
	}
	struct FText GetMeteoText() {
		return memory.read<struct FText>(m_addr + 16);
	}
	struct FText GetMeteoIcon() {
		return memory.read<struct FText>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetBlendPhaseNo
{
public:
	FgetBlendPhaseNo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_printSessionTotalPointsByDriver
{
public:
	Facc_printSessionTotalPointsByDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getcup_category() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommonTexts
{
public:
	FCommonTexts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetCommonText() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReset
{
public:
	FReset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_full_reset() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocalUserAccount
{
public:
	FGetLocalUserAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGamePlatformUserAccountData GetReturnValue() {
		return memory.read<struct FGamePlatformUserAccountData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCircuitBopDataEx
{
public:
	FCircuitBopDataEx(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCircuitName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FTrackBopSeason GetdefaultBop() {
		return memory.read<struct FTrackBopSeason>(m_addr + 24);
	}
	struct TMap<enum class ESeasonType, struct FTrackBopSeason> GetBopOverride() {
		return memory.read<struct TMap<enum class ESeasonType, struct FTrackBopSeason>>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBeginOverlap
{
public:
	FOnBeginOverlap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetOtherBodyIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetfromSweep() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FHitResult Gethit() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceRatingPlayerCollisionDebugMsg
{
public:
	FRaceRatingPlayerCollisionDebugMsg(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOpponentName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetInfoText() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackBopSeason
{
public:
	FTrackBopSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETrackBopType GetdefaultBop() {
		return memory.read<enum class ETrackBopType>(m_addr + 8);
	}
	struct TMap<enum class ECarGroup, enum class ETrackBopType> Getbop() {
		return memory.read<struct TMap<enum class ECarGroup, enum class ETrackBopType>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSetting
{
public:
	FGetSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class GraphicsOptions GetType() {
		return memory.read<enum class GraphicsOptions>(m_addr + 0);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetLightStage
{
public:
	FsetLightStage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarLightStage GetlightStage() {
		return memory.read<enum class ECarLightStage>(m_addr + 0);
	}
	bool GetanimEnable() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FCircuitSpeedData
{
public:
	FCircuitSpeedData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCircuitName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 24);
	}
	struct TSet<enum class ECarGroup> GetcarGroups() {
		return memory.read<struct TSet<enum class ECarGroup>>(m_addr + 32);
	}
	struct TSet<enum class ECarModelType> GetCarModels() {
		return memory.read<struct TSet<enum class ECarModelType>>(m_addr + 112);
	}
	int32_t GetYear() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct TArray<int32_t> GetIdealLineSpeeds() {
		return memory.read<struct TArray<int32_t>>(m_addr + 200);
	}
	int32_t GetReferenceLaptime() {
		return memory.read<int32_t>(m_addr + 216);
	}
	struct TArray<int32_t> GetMicroSectorTimes() {
		return memory.read<struct TArray<int32_t>>(m_addr + 224);
	}
	int32_t GetRealWorldRecord() {
		return memory.read<int32_t>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FCircuitData
{
public:
	FCircuitData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCircuitName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 24);
	}
	enum class ERaceEventType GetRaceEventType() {
		return memory.read<enum class ERaceEventType>(m_addr + 25);
	}
	enum class ETrackBopType GettrackBopType() {
		return memory.read<enum class ETrackBopType>(m_addr + 26);
	}
	enum class ETrackBopType GetTrackBopType_GT4() {
		return memory.read<enum class ETrackBopType>(m_addr + 27);
	}
	enum class ETrackBopType GetTrackBopType_GT2() {
		return memory.read<enum class ETrackBopType>(m_addr + 28);
	}
	enum class ETrackBopType GetTrackBopType_TCX() {
		return memory.read<enum class ETrackBopType>(m_addr + 29);
	}
	float GetBaseGrip() {
		return memory.read<float>(m_addr + 32);
	}
	struct TArray<struct TSoftObjectPtr<USurfaceData>> Getsurfaces() {
		return memory.read<struct TArray<struct TSoftObjectPtr<USurfaceData>>>(m_addr + 40);
	}
	float GetAltitude() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FSValidate
{
public:
	FSValidate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGridPosition
{
public:
	FSetGridPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPosition() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_addPenalty
{
public:
	Facc_addPenalty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	char Getinvestigation() {
		return memory.read<char>(m_addr + 2);
	}
	char GetPenalty() {
		return memory.read<char>(m_addr + 3);
	}
	char GetWeight() {
		return memory.read<char>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTyreSuspState
{
public:
	FGetTyreSuspState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FTyreSuspState GetReturnValue() {
		return memory.read<struct FTyreSuspState>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMenuColor
{
public:
	FGetMenuColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiColors GetcolorToGet() {
		return memory.read<enum class EGuiColors>(m_addr + 0);
	}
	struct FSlateColor GetReturnValue() {
		return memory.read<struct FSlateColor>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCircuitCommonData
{
public:
	FCircuitCommonData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TArray<struct FCircuitCornerInfo> GetCornerInfos() {
		return memory.read<struct TArray<struct FCircuitCornerInfo>>(m_addr + 24);
	}
	struct TArray<struct FCircuitSectionDefinition> Getsections() {
		return memory.read<struct TArray<struct FCircuitSectionDefinition>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupSuspensionsLimits
{
public:
	FSetupSuspensionsLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetARB[2]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}
	struct FSetupSelectorLimits GetWheelRate[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 112);
	}
	struct FSetupSelectorLimits GetBumpStopRateUp[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 336);
	}
	struct FSetupSelectorLimits GetBumpStopRange[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 560);
	}
	float GetBSGraphMinY[4]() {
		return memory.read<float>(m_addr + 784);
	}
	float GetbSOffsetForce[2]() {
		return memory.read<float>(m_addr + 800);
	}
	bool GetisBumpStopGraphAbsolute() {
		return memory.read<bool>(m_addr + 808);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleTC
{
public:
	FcycleTC(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarControlSessionLog
{
public:
	FCarControlSessionLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTrackName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	enum class ESeasonType Getbop() {
		return memory.read<enum class ESeasonType>(m_addr + 24);
	}
	struct TArray<struct FCircuitSectionDefinition> GetCorners() {
		return memory.read<struct TArray<struct FCircuitSectionDefinition>>(m_addr + 32);
	}
	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FString GetplayerID() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct TArray<struct FCarControlLapLog> GetLaps() {
		return memory.read<struct TArray<struct FCarControlLapLog>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetQuadSize
{
public:
	FGetQuadSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampLeaderboardEntry
{
public:
	FChampLeaderboardEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FCarControlLapLog
{
public:
	FCarControlLapLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 8);
	}
	int32_t GetLapTime() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetWetness() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<int32_t> GetSplits() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}
	struct TArray<struct FCarControlSectionLog> GetCornerSections() {
		return memory.read<struct TArray<struct FCarControlSectionLog>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetCarPosition
{
public:
	FResetCarPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisShowroom() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSuspDataDW
{
public:
	FSuspDataDW(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FWishboneData GetwbTop() {
		return memory.read<struct FWishboneData>(m_addr + 0);
	}
	struct FWishboneData GetwbBottom() {
		return memory.read<struct FWishboneData>(m_addr + 36);
	}
	struct FRodData Getsteer() {
		return memory.read<struct FRodData>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarControlSectionLog
{
public:
	FCarControlSectionLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCCRating() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCCPush() {
		return memory.read<float>(m_addr + 12);
	}
	float GetCCOverdrive() {
		return memory.read<float>(m_addr + 16);
	}
	struct TArray<float> GetSlipNumbers() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}
	float GetActionTime() {
		return memory.read<float>(m_addr + 40);
	}
	float GetUndersteerTime() {
		return memory.read<float>(m_addr + 44);
	}
	float GetOverturnTime() {
		return memory.read<float>(m_addr + 48);
	}
	float GetHeavyOverturnTime() {
		return memory.read<float>(m_addr + 52);
	}
	float GetOutOfControlTime() {
		return memory.read<float>(m_addr + 56);
	}
	int32_t GetDuration() {
		return memory.read<int32_t>(m_addr + 60);
	}
	float GetExitKmh() {
		return memory.read<float>(m_addr + 64);
	}
	int32_t GetOutOfTrackMeters() {
		return memory.read<int32_t>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FNationality
{
public:
	FNationality(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 8);
	}
	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 16);
	}
	struct FString GetShortName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct TSoftObjectPtr<UTexture2D> GetFlagImage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarSkinTemplates
{
public:
	FGetCarSkinTemplates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarInfo Getcar_info() {
		return memory.read<struct FCarInfo>(m_addr + 0);
	}
	struct TArray<struct FSkinTemplate> Getdestination_array() {
		return memory.read<struct TArray<struct FSkinTemplate>>(m_addr + 224);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriverInfo
{
public:
	FDriverInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFirstName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetSecondName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetLastName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetNickname() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetShortName() {
		return memory.read<struct FString>(m_addr + 80);
	}
	char GetWeight() {
		return memory.read<char>(m_addr + 96);
	}
	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 97);
	}
	struct FText GetBio() {
		return memory.read<struct FText>(m_addr + 104);
	}
	char GetSkillLevel() {
		return memory.read<char>(m_addr + 128);
	}
	char GetAggroLevel() {
		return memory.read<char>(m_addr + 129);
	}
	char Getconsistency() {
		return memory.read<char>(m_addr + 130);
	}
	int32_t GetpreferredRacingNumber() {
		return memory.read<int32_t>(m_addr + 132);
	}
	struct TSoftObjectPtr<UTexture2D> GetPicture() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 136);
	}
	enum class EDriverCategory GetDriverCategory() {
		return memory.read<enum class EDriverCategory>(m_addr + 176);
	}
	int32_t GetHelmetTemplateKey() {
		return memory.read<int32_t>(m_addr + 180);
	}
	int32_t GetHelmetBaseColor() {
		return memory.read<int32_t>(m_addr + 184);
	}
	int32_t GetHelmetDetailColor() {
		return memory.read<int32_t>(m_addr + 188);
	}
	enum class EHelmetMaterialType GetHelmetMaterialType() {
		return memory.read<enum class EHelmetMaterialType>(m_addr + 192);
	}
	int32_t GetHelmetGlassColor() {
		return memory.read<int32_t>(m_addr + 196);
	}
	struct FName GetHelmetGlassMaterialType() {
		return memory.read<struct FName>(m_addr + 200);
	}
	int32_t GetGlovesTemplateKey() {
		return memory.read<int32_t>(m_addr + 208);
	}
	int32_t GetSuitTemplateKey() {
		return memory.read<int32_t>(m_addr + 212);
	}
	int32_t GetSuitDetailColor1() {
		return memory.read<int32_t>(m_addr + 216);
	}
	int32_t GetSuitDetailColor2() {
		return memory.read<int32_t>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHelmetGlassMaterialType
{
public:
	FGetHelmetGlassMaterialType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FHelmetGlassMaterialType GetDestination() {
		return memory.read<struct FHelmetGlassMaterialType>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetGoldMedalPoints
{
public:
	FgetGoldMedalPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSettingsChanged
{
public:
	FOnSettingsChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetSameAsOldSettings() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDriverAsset
{
public:
	FDriverAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDriverCategory GetDriverCategory() {
		return memory.read<enum class EDriverCategory>(m_addr + 8);
	}
	int32_t GetHelmetTemplateKey() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetHelmetBaseColor() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetHelmetDetailColor() {
		return memory.read<int32_t>(m_addr + 20);
	}
	enum class EHelmetMaterialType GetHelmetMaterialType() {
		return memory.read<enum class EHelmetMaterialType>(m_addr + 24);
	}
	int32_t GetHelmetGlassColor() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct FName GetHelmetGlassMaterialType() {
		return memory.read<struct FName>(m_addr + 32);
	}
	int32_t GetGlovesTemplateKey() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetSuitTemplateKey() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetSuitDetailColor1() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetSuitDetailColor2() {
		return memory.read<int32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetFocusedCarDriverStintTotalTimeMs
{
public:
	FgetFocusedCarDriverStintTotalTimeMs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisChampInProgress
{
public:
	FisChampInProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTeamInfo
{
public:
	FTeamInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTeamName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetCompetitorName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	int32_t GetTemplateKey() {
		return memory.read<int32_t>(m_addr + 32);
	}
	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 36);
	}
	bool GetIsPriority() {
		return memory.read<bool>(m_addr + 37);
	}
	struct TArray<enum class ESeasonType> GetSeasons() {
		return memory.read<struct TArray<enum class ESeasonType>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCarAnimationEvent
{
public:
	FOnCarAnimationEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarAnimation GetCarAnimation() {
		return memory.read<enum class ECarAnimation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomCarInfo
{
public:
	FCustomCarInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRaceNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetTeamName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetDisplayName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetCompetitorName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	char GetTeamTemplateKey() {
		return memory.read<char>(m_addr + 56);
	}
	char GetAuxLightKey() {
		return memory.read<char>(m_addr + 57);
	}
	int32_t GetAuxLightColor() {
		return memory.read<int32_t>(m_addr + 60);
	}
	char GetSkinTemplateKey() {
		return memory.read<char>(m_addr + 64);
	}
	int32_t GetSkinColor1Id() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetSkinColor2Id() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetSkinColor3Id() {
		return memory.read<int32_t>(m_addr + 76);
	}
	struct FName GetSkinMaterialType1() {
		return memory.read<struct FName>(m_addr + 80);
	}
	struct FName GetSkinMaterialType2() {
		return memory.read<struct FName>(m_addr + 88);
	}
	struct FName GetSkinMaterialType3() {
		return memory.read<struct FName>(m_addr + 96);
	}
	int32_t GetRimColor1Id() {
		return memory.read<int32_t>(m_addr + 104);
	}
	struct FName GetRimMaterialType1() {
		return memory.read<struct FName>(m_addr + 108);
	}
	int32_t GetRimColor2Id() {
		return memory.read<int32_t>(m_addr + 116);
	}
	struct FName GetRimMaterialType2() {
		return memory.read<struct FName>(m_addr + 120);
	}
	char GetBannerTemplateKey() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSuspTransform
{
public:
	FGetSuspTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSeasonDatatable
{
public:
	FSeasonDatatable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	struct UDataTable GetSeasonDatatable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommLevelValues
{
public:
	FCommLevelValues(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMenuState
{
public:
	FMenuState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetsinglePlayerSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	struct TMap<enum class ESeasonType, enum class EGuiGameModes> GetSeasonGameMode() {
		return memory.read<struct TMap<enum class ESeasonType, enum class EGuiGameModes>>(m_addr + 8);
	}
	struct TMap<enum class ESeasonType, struct FGuiSeasonRaceEventData> GetSeasonRaceEventData() {
		return memory.read<struct TMap<enum class ESeasonType, struct FGuiSeasonRaceEventData>>(m_addr + 88);
	}
	struct TMap<enum class ESeasonType, struct FName> GetGlobalSeasonTrackName() {
		return memory.read<struct TMap<enum class ESeasonType, struct FName>>(m_addr + 168);
	}
	char GetGlobalOpponentCount() {
		return memory.read<char>(m_addr + 248);
	}
	char GetGlobalOpponentSkill() {
		return memory.read<char>(m_addr + 249);
	}
	char GetGlobalOpponentAggro() {
		return memory.read<char>(m_addr + 250);
	}
	int32_t GetGlobalPositionOnGrid() {
		return memory.read<int32_t>(m_addr + 252);
	}
	struct TMap<enum class ECarGroup, float> GetGlobalCarGroupRatios() {
		return memory.read<struct TMap<enum class ECarGroup, float>>(m_addr + 256);
	}
	int32_t GetuseNewGenGT3() {
		return memory.read<int32_t>(m_addr + 336);
	}
	enum class EGuiSetupSection GetSetupSection() {
		return memory.read<enum class EGuiSetupSection>(m_addr + 340);
	}
	enum class EWeatherPresetType GetweatherType() {
		return memory.read<enum class EWeatherPresetType>(m_addr + 341);
	}
	bool GetbUseEnduranceKit() {
		return memory.read<bool>(m_addr + 342);
	}
	struct FAudioSave Getaudio() {
		return memory.read<struct FAudioSave>(m_addr + 344);
	}
	struct FGuiLoadingScreenInfo GetLoadingScreenInfo() {
		return memory.read<struct FGuiLoadingScreenInfo>(m_addr + 432);
	}
	enum class EGuiLanguages GetCurrentLanguage() {
		return memory.read<enum class EGuiLanguages>(m_addr + 848);
	}
	struct FString GetLastServerSearch() {
		return memory.read<struct FString>(m_addr + 856);
	}
	struct TMap<enum class EMPCarGroup, struct FName> GetMultiplayerCarGroupSelection() {
		return memory.read<struct TMap<enum class EMPCarGroup, struct FName>>(m_addr + 872);
	}
	struct TMap<struct FName, int32_t> GetTemplateOverrides() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 952);
	}
	struct TMap<struct FString, struct FString> GetServerPasswords() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 1032);
	}
	struct FGuiServerInfo GetSelectedServer() {
		return memory.read<struct FGuiServerInfo>(m_addr + 1112);
	}
	struct FOnlineServicesMPMatchmakingResponse GetCachedMPResponse() {
		return memory.read<struct FOnlineServicesMPMatchmakingResponse>(m_addr + 1296);
	}
	char GetSpecialEventPage() {
		return memory.read<char>(m_addr + 1608);
	}
	int32_t GetOnlineEventRefId() {
		return memory.read<int32_t>(m_addr + 1612);
	}
	bool GetIsPrivacyPolicyAccepted() {
		return memory.read<bool>(m_addr + 1616);
	}
	struct FString GetLastNewsItemIdRead() {
		return memory.read<struct FString>(m_addr + 1624);
	}
	bool GetuseFallbackControlPage() {
		return memory.read<bool>(m_addr + 1640);
	}
	bool GetIsNativeDBoxEnabled() {
		return memory.read<bool>(m_addr + 1641);
	}
	bool GetisNativeFanatecLedsEnabled() {
		return memory.read<bool>(m_addr + 1642);
	}
	bool GetisFirstLaunchDataInserted() {
		return memory.read<bool>(m_addr + 1643);
	}
	bool GetskipIntroSequence() {
		return memory.read<bool>(m_addr + 1644);
	}
	bool GetpitcrewAnimationEnabled() {
		return memory.read<bool>(m_addr + 1645);
	}
	bool GetpitmarkersVisible() {
		return memory.read<bool>(m_addr + 1646);
	}
	struct FGraphicOptions GetGraphicOptions() {
		return memory.read<struct FGraphicOptions>(m_addr + 1648);
	}
	char GettexCap() {
		return memory.read<char>(m_addr + 1808);
	}
	char GettexDDS() {
		return memory.read<char>(m_addr + 1809);
	}
	char GettexMips() {
		return memory.read<char>(m_addr + 1810);
	}
	struct FACGfxPreset GetCustomGraphicOptions() {
		return memory.read<struct FACGfxPreset>(m_addr + 1812);
	}
	struct TArray<struct FName> GetCustomDriverInfoNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1960);
	}
	enum class EShowroomCarFilterType GetLastFilter() {
		return memory.read<enum class EShowroomCarFilterType>(m_addr + 1976);
	}
	enum class ESeasonType GetLastSeasonFilter() {
		return memory.read<enum class ESeasonType>(m_addr + 1977);
	}
	bool GetPersistShowroomCar() {
		return memory.read<bool>(m_addr + 1978);
	}
	struct FName GetPersistShowroomCarName() {
		return memory.read<struct FName>(m_addr + 1980);
	}
	struct FName GetPersistShowroomDriverName() {
		return memory.read<struct FName>(m_addr + 1988);
	}
	enum class ECarGroup GetMPShowroomCarGroup() {
		return memory.read<enum class ECarGroup>(m_addr + 1996);
	}
	enum class EMPCarGroup GetMPShowroomCarGroupFilter() {
		return memory.read<enum class EMPCarGroup>(m_addr + 1997);
	}
	enum class EMPCarGroup GetMPServerListCarGroupFilter() {
		return memory.read<enum class EMPCarGroup>(m_addr + 1998);
	}
	struct FMpServerListFilter GetMpServerListFilter() {
		return memory.read<struct FMpServerListFilter>(m_addr + 2000);
	}
	bool GetLockMPShowroomToTargetGroup() {
		return memory.read<bool>(m_addr + 2008);
	}
	enum class EDisconnectionReason GetDisconnectionReason() {
		return memory.read<enum class EDisconnectionReason>(m_addr + 2009);
	}
	char GetcarsPreloadMode() {
		return memory.read<char>(m_addr + 2010);
	}
	int32_t GetcarsPreloadLimitMB() {
		return memory.read<int32_t>(m_addr + 2012);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommLogData
{
public:
	FCommLogData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAiTestCar
{
public:
	FAiTestCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetcarId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<int32_t> Getlaptimes() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 24);
	}
	struct FName GetCarModelName() {
		return memory.read<struct FName>(m_addr + 28);
	}
	int32_t GetcarYear() {
		return memory.read<int32_t>(m_addr + 36);
	}
	struct FString GetsetupPreset() {
		return memory.read<struct FString>(m_addr + 40);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 56);
	}
	int32_t GetAiPush() {
		return memory.read<int32_t>(m_addr + 60);
	}
	struct FString GetbestLap() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetlastLap() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetendState() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTemperature
{
public:
	FSetTemperature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Get_Temperature() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWingState
{
public:
	FWingState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float Getaoa() {
		return memory.read<float>(m_addr + 16);
	}
	float Getcd() {
		return memory.read<float>(m_addr + 20);
	}
	float Getcl() {
		return memory.read<float>(m_addr + 24);
	}
	float GetAngle() {
		return memory.read<float>(m_addr + 28);
	}
	float GetinputAngle() {
		return memory.read<float>(m_addr + 32);
	}
	float GetgroundHeight() {
		return memory.read<float>(m_addr + 36);
	}
	float GetfrontShare() {
		return memory.read<float>(m_addr + 40);
	}
	float GetdragKG() {
		return memory.read<float>(m_addr + 44);
	}
	float GetliftKG() {
		return memory.read<float>(m_addr + 48);
	}
	float GetangleMult() {
		return memory.read<float>(m_addr + 52);
	}
	float GetgroundEffectLift() {
		return memory.read<float>(m_addr + 56);
	}
	float GetgroundEffectDrag() {
		return memory.read<float>(m_addr + 60);
	}
	float Getyawangle() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetisVertical() {
		return memory.read<bool>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActionTexts
{
public:
	FGetActionTexts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentTrackConditionText
{
public:
	FgetCurrentTrackConditionText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReMapValue
{
public:
	FReMapValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	float Getsourcelow() {
		return memory.read<float>(m_addr + 4);
	}
	float Getsourcehigh() {
		return memory.read<float>(m_addr + 8);
	}
	float Gettargetlow() {
		return memory.read<float>(m_addr + 12);
	}
	float Gettargethigh() {
		return memory.read<float>(m_addr + 16);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FTractionControlSettings
{
public:
	FTractionControlSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinSlipRatio() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxSlipRatio() {
		return memory.read<float>(m_addr + 4);
	}
	float GetReferenceSlipAngleDEG() {
		return memory.read<float>(m_addr + 8);
	}
	float GetEngineCutLevel() {
		return memory.read<float>(m_addr + 12);
	}
	float GetoversteerGain() {
		return memory.read<float>(m_addr + 16);
	}
	float GetyawACCGain() {
		return memory.read<float>(m_addr + 20);
	}
	float GetactivationSlipAngle() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetReplayManager
{
public:
	FGetReplayManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReplayManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UReplayManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreCompoundSetDefinition
{
public:
	FTyreCompoundSetDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetShortName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct UTyreCompoundSet GetPhysicsData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UTyreCompoundSet(ptr_addr);
	}
	struct TArray<struct UStaticMesh> GetTyreMeshes_LF_RF_LR_RR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UStaticMesh>(ptr_addr);
	}
	struct FName GetBlurMaterialSlot() {
		return memory.read<struct FName>(m_addr + 56);
	}
	struct TArray<int32_t> GetMaterialIndexes() {
		return memory.read<struct TArray<int32_t>>(m_addr + 64);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetTyreBlurMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDamagePart
{
public:
	FDamagePart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDamagePart GetType() {
		return memory.read<enum class EDamagePart>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FVector GetstaticRotationAxis() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	float GetstaticRotationAngle() {
		return memory.read<float>(m_addr + 36);
	}
	struct FVector GetoscillationAxis() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	float GetoscillationMinAngle() {
		return memory.read<float>(m_addr + 52);
	}
	float GetoscillationMaxAngle() {
		return memory.read<float>(m_addr + 56);
	}
	float GetoscillationMultG() {
		return memory.read<float>(m_addr + 60);
	}
	enum class EDamageZone GetdamageZone() {
		return memory.read<enum class EDamageZone>(m_addr + 64);
	}
	float GetminSpeed() {
		return memory.read<float>(m_addr + 68);
	}
	float GetfullSpeed() {
		return memory.read<float>(m_addr + 72);
	}
	struct FVector GetallowedG() {
		return memory.read<struct FVector>(m_addr + 76);
	}
	float GetsparksGMultiplier() {
		return memory.read<float>(m_addr + 88);
	}
	float GetdamageDebug() {
		return memory.read<float>(m_addr + 92);
	}
	bool GetoscillationEnabled() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCustomEntry
{
public:
	FAddCustomEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}
	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlsStatus
{
public:
	FControlsStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getsteer() {
		return memory.read<float>(m_addr + 0);
	}
	float GetGas() {
		return memory.read<float>(m_addr + 4);
	}
	float GetBrake() {
		return memory.read<float>(m_addr + 8);
	}
	float GetClutch() {
		return memory.read<float>(m_addr + 12);
	}
	float GetFF() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSkinTemplates
{
public:
	FGetSkinTemplates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct TArray<struct FSkinTemplate> GetReturnValue() {
		return memory.read<struct TArray<struct FSkinTemplate>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrackGene
{
public:
	FTrackGene(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPush() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSwitchRotator
{
public:
	FGetCurrentSwitchRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetIndex() {
		return memory.read<char>(m_addr + 0);
	}
	struct FRotator GetReturnValue() {
		return memory.read<struct FRotator>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FCarDataJson
{
public:
	FCarDataJson(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetScreenName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	float GetMassKG() {
		return memory.read<float>(m_addr + 16);
	}
	float GetTorsionalRigidity() {
		return memory.read<float>(m_addr + 20);
	}
	float GetTorsionalDamping() {
		return memory.read<float>(m_addr + 24);
	}
	struct FVector GetInertia() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	float GetMinimumHeight() {
		return memory.read<float>(m_addr + 40);
	}
	struct FSteerData GetSteerData() {
		return memory.read<struct FSteerData>(m_addr + 44);
	}
	struct FFuelData GetFuelData() {
		return memory.read<struct FFuelData>(m_addr + 64);
	}
	struct FBrakesData GetBrakesData() {
		return memory.read<struct FBrakesData>(m_addr + 96);
	}
	struct FEngineData GetEngineData() {
		return memory.read<struct FEngineData>(m_addr + 152);
	}
	struct FDrivetrainData GetDrivetrain() {
		return memory.read<struct FDrivetrainData>(m_addr + 304);
	}
	struct FSuspData GetSuspensions() {
		return memory.read<struct FSuspData>(m_addr + 488);
	}
	struct FARBData GetARBFront() {
		return memory.read<struct FARBData>(m_addr + 1152);
	}
	struct FARBData GetARBRear() {
		return memory.read<struct FARBData>(m_addr + 1156);
	}
	struct FTractionControl GetTractionControl() {
		return memory.read<struct FTractionControl>(m_addr + 1160);
	}
	struct FABSData GetAbs() {
		return memory.read<struct FABSData>(m_addr + 1208);
	}
	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 1240);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSortedSpecialEventList
{
public:
	FGetSortedSpecialEventList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSpecialEventPreset> GetList() {
		return memory.read<struct TArray<struct FSpecialEventPreset>>(m_addr + 0);
	}
	struct UOnlineServices Getkson() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UOnlineServices(ptr_addr);
	}
	bool Getpast_events() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupAeroLimits
{
public:
	FSetupAeroLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetRearWing() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}
	struct FSetupSelectorLimits GetSplitter() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 56);
	}
	struct FSetupSelectorLimits GetRideHeight[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FTractionControl
{
public:
	FTractionControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsPresent() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GethasTC2() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetFrequencylHZ() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinSpeedKMH() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetDefaultIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetGearChangeTime() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMinCutLevel() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaxCutLevel() {
		return memory.read<float>(m_addr + 24);
	}
	struct TArray<struct FTractionControlSettings> GetSettings() {
		return memory.read<struct TArray<struct FTractionControlSettings>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSuspData
{
public:
	FSuspData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getwheelbase() {
		return memory.read<float>(m_addr + 0);
	}
	float GetcgLocation() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetisBumpStopAbsolute() {
		return memory.read<bool>(m_addr + 8);
	}
	float GetbaseYFront() {
		return memory.read<float>(m_addr + 12);
	}
	float GetbaseYRear() {
		return memory.read<float>(m_addr + 16);
	}
	float GettrackFront() {
		return memory.read<float>(m_addr + 20);
	}
	float GettrackRear() {
		return memory.read<float>(m_addr + 24);
	}
	struct FSuspHubData GethubFront() {
		return memory.read<struct FSuspHubData>(m_addr + 32);
	}
	struct FSuspHubData GethubRear() {
		return memory.read<struct FSuspHubData>(m_addr + 168);
	}
	struct FSuspDataDW GetdwFront() {
		return memory.read<struct FSuspDataDW>(m_addr + 304);
	}
	struct FSuspDataDW GetdwRear() {
		return memory.read<struct FSuspDataDW>(m_addr + 400);
	}
	struct FSuspDataStrut GetstrutFront() {
		return memory.read<struct FSuspDataStrut>(m_addr + 496);
	}
	struct FSuspDataStrut GetstrutRear() {
		return memory.read<struct FSuspDataStrut>(m_addr + 580);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCockpitVisMode
{
public:
	FGetCurrentCockpitVisMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECockpitVisMode GetReturnValue() {
		return memory.read<enum class ECockpitVisMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSuspDataStrut
{
public:
	FSuspDataStrut(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRodData Getstrut() {
		return memory.read<struct FRodData>(m_addr + 0);
	}
	struct FWishboneData GetwbBottom() {
		return memory.read<struct FWishboneData>(m_addr + 24);
	}
	struct FRodData Getsteer() {
		return memory.read<struct FRodData>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGear
{
public:
	FGetGear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSuspHubData
{
public:
	FSuspHubData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESuspType GetType() {
		return memory.read<enum class ESuspType>(m_addr + 0);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 4);
	}
	float GetrimOffset() {
		return memory.read<float>(m_addr + 8);
	}
	struct FSuspBumpStop GetbumpStop() {
		return memory.read<struct FSuspBumpStop>(m_addr + 12);
	}
	float GetRodLength() {
		return memory.read<float>(m_addr + 52);
	}
	float GetK() {
		return memory.read<float>(m_addr + 56);
	}
	float GetprogressiveK() {
		return memory.read<float>(m_addr + 60);
	}
	float GethelperK() {
		return memory.read<float>(m_addr + 64);
	}
	float GethelperRange() {
		return memory.read<float>(m_addr + 68);
	}
	float GettoeOut() {
		return memory.read<float>(m_addr + 72);
	}
	float GetStaticCamber() {
		return memory.read<float>(m_addr + 76);
	}
	float GetpackerRange() {
		return memory.read<float>(m_addr + 80);
	}
	struct FSuspDamageData Getdamage() {
		return memory.read<struct FSuspDamageData>(m_addr + 84);
	}
	struct FDamperData Getdamper() {
		return memory.read<struct FDamperData>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FDamperData
{
public:
	FDamperData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDamperData2W Getslow() {
		return memory.read<struct FDamperData2W>(m_addr + 0);
	}
	struct FDamperData2W Getfast() {
		return memory.read<struct FDamperData2W>(m_addr + 8);
	}
	float GetfastThresholdBump() {
		return memory.read<float>(m_addr + 16);
	}
	float GetfastThresholdRebound() {
		return memory.read<float>(m_addr + 20);
	}
	struct UCurveFloat GetLut() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCurveFloat(ptr_addr);
	}
	float GetDamperMotionRatio() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLeftDoorTime
{
public:
	FGetLeftDoorTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSuspDamageData
{
public:
	FSuspDamageData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetminSpeed() {
		return memory.read<float>(m_addr + 0);
	}
	float GetGain() {
		return memory.read<float>(m_addr + 4);
	}
	float GetmaxDamage() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetLapTimeDiff
{
public:
	FgetLapTimeDiff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisGt4
{
public:
	FisGt4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getcar_model_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFocusedCar
{
public:
	FGetFocusedCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACarAvatar GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ACarAvatar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSuspBumpStop
{
public:
	FSuspBumpStop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSuspBumpStopDef GetUp() {
		return memory.read<struct FSuspBumpStopDef>(m_addr + 0);
	}
	struct FSuspBumpStopDef GetDown() {
		return memory.read<struct FSuspBumpStopDef>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSuspBumpStopDef
{
public:
	FSuspBumpStopDef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRange() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReference() {
		return memory.read<float>(m_addr + 4);
	}
	float GetForce() {
		return memory.read<float>(m_addr + 8);
	}
	float GetGamma() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDamping() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFlag
{
public:
	FSetFlag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMarshalFlagType GetflagColor() {
		return memory.read<enum class EMarshalFlagType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLabelTextAndColors
{
public:
	FLabelTextAndColors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	struct FLinearColor GetForegroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrivetrainData
{
public:
	FDrivetrainData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETractionType GetTractionType() {
		return memory.read<enum class ETractionType>(m_addr + 0);
	}
	float GetDriveInertia() {
		return memory.read<float>(m_addr + 4);
	}
	float GetClutchInertia() {
		return memory.read<float>(m_addr + 8);
	}
	float GetGearR() {
		return memory.read<float>(m_addr + 12);
	}
	struct TArray<float> GetGears() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}
	float GetFinalRatio() {
		return memory.read<float>(m_addr + 32);
	}
	struct FDifferentialData GetDifferential() {
		return memory.read<struct FDifferentialData>(m_addr + 36);
	}
	float GetGearUpTimeMS() {
		return memory.read<float>(m_addr + 48);
	}
	float GetGearDnTimeMS() {
		return memory.read<float>(m_addr + 52);
	}
	float GetAutoCutOffTimeMS() {
		return memory.read<float>(m_addr + 56);
	}
	bool GetIsShifterSupported() {
		return memory.read<bool>(m_addr + 60);
	}
	struct FDownshiftProtectionData GetDownshiftProtection() {
		return memory.read<struct FDownshiftProtectionData>(m_addr + 64);
	}
	float GetClutchMaxTorque() {
		return memory.read<float>(m_addr + 76);
	}
	float GetValidShiftRPMWindow() {
		return memory.read<float>(m_addr + 80);
	}
	float GetControlsWindowGain() {
		return memory.read<float>(m_addr + 84);
	}
	float GetDamageRpmWindow() {
		return memory.read<float>(m_addr + 88);
	}
	float GetStiffness() {
		return memory.read<float>(m_addr + 92);
	}
	float GetDampingRatio() {
		return memory.read<float>(m_addr + 96);
	}
	struct FAutoBlipData GetAutoBlip() {
		return memory.read<struct FAutoBlipData>(m_addr + 104);
	}
	struct FAutoClutchData GetautoClutch() {
		return memory.read<struct FAutoClutchData>(m_addr + 120);
	}
	struct FAutoShifterData GetAutoShifter() {
		return memory.read<struct FAutoShifterData>(m_addr + 152);
	}
	struct FDynamicControllerData GetSingleDiffLockController() {
		return memory.read<struct FDynamicControllerData>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FDynamicControllerStage
{
public:
	FDynamicControllerStage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDynamicControllerInput GetInputVar() {
		return memory.read<enum class EDynamicControllerInput>(m_addr + 0);
	}
	enum class EDynamicControllerCombinatorMode GetCombinatorMode() {
		return memory.read<enum class EDynamicControllerCombinatorMode>(m_addr + 1);
	}
	struct UCurveFloat GetLut() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}
	float GetFilter() {
		return memory.read<float>(m_addr + 16);
	}
	float GetUpLimit() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDownLimit() {
		return memory.read<float>(m_addr + 24);
	}
	float GetConstValue() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_PlayVideo
{
public:
	FBP_PlayVideo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsUE4Video() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAutoShifterData
{
public:
	FAutoShifterData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetChangeUpRpm() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetChangeDnRpm() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetSlipThreshold() {
		return memory.read<float>(m_addr + 8);
	}
	float GetGasCutoffTimeS() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FAutoClutchData
{
public:
	FAutoClutchData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveFloat GetUpshiftProfile() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetDownshiftProfile() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}
	bool GetIsForcedOn() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetRpmMin() {
		return memory.read<float>(m_addr + 20);
	}
	float GetRpmMax() {
		return memory.read<float>(m_addr + 24);
	}
	float GetMaxSpeed() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FDownforceData
{
public:
	FDownforceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetdownForceName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector GetPosition() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct UCurveFloat GetlutDownForceRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutDownForceDeltaRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutDragRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutDragDeltaRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UCurveFloat(ptr_addr);
	}
	float GetyawGain() {
		return memory.read<float>(m_addr + 64);
	}
	enum class EAeroElement GetAeroElement() {
		return memory.read<enum class EAeroElement>(m_addr + 68);
	}
	float GetAngle() {
		return memory.read<float>(m_addr + 72);
	}
	float GetLiftPerFrontAngle() {
		return memory.read<float>(m_addr + 76);
	}
	float GetLiftPerRearAngle() {
		return memory.read<float>(m_addr + 80);
	}
	float GetDragPerFrontAngle() {
		return memory.read<float>(m_addr + 84);
	}
	float GetDragPerRearAngle() {
		return memory.read<float>(m_addr + 88);
	}
	float GetDragPerCoolTransfer() {
		return memory.read<float>(m_addr + 92);
	}
	float GetclGain() {
		return memory.read<float>(m_addr + 96);
	}
	float GetcdGain() {
		return memory.read<float>(m_addr + 100);
	}
	float GetdamageCD[5]() {
		return memory.read<float>(m_addr + 104);
	}
	float GetdamageCL[5]() {
		return memory.read<float>(m_addr + 124);
	}
	struct TArray<struct FDynamicDownForceControllerData> GetDFControllerData() {
		return memory.read<struct TArray<struct FDynamicDownForceControllerData>>(m_addr + 144);
	}
	float GetAIReferenceHeightMM() {
		return memory.read<float>(m_addr + 160);
	}
	float GetAIReferenceDeltaHMM() {
		return memory.read<float>(m_addr + 164);
	}

private:
	std::uint64_t m_addr = 0;
};class FDifferentialData
{
public:
	FDifferentialData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getpower() {
		return memory.read<float>(m_addr + 0);
	}
	float GetCoast() {
		return memory.read<float>(m_addr + 4);
	}
	float GetPreload() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FEngineData
{
public:
	FEngineData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInertia() {
		return memory.read<float>(m_addr + 0);
	}
	struct UCurveFloat GetPowerCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetCoastCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UCurveFloat(ptr_addr);
	}
	struct TArray<struct FEngineMapData> GetMaps() {
		return memory.read<struct TArray<struct FEngineMapData>>(m_addr + 24);
	}
	int32_t GetMinimum() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetLimiter() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetLimiterCycles() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct TArray<struct FTurboData> GetTurbos() {
		return memory.read<struct TArray<struct FTurboData>>(m_addr + 56);
	}
	float GetDefaultTurboAdjustment() {
		return memory.read<float>(m_addr + 72);
	}
	struct UCurveFloat GetThrottleResponseCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UCurveFloat(ptr_addr);
	}
	float GetRpmDamageThreshold() {
		return memory.read<float>(m_addr + 88);
	}
	float GetTurboBoostDamageThreshold() {
		return memory.read<float>(m_addr + 92);
	}
	float GetTurboBoostDamageK() {
		return memory.read<float>(m_addr + 96);
	}
	float GetRpmDamageK() {
		return memory.read<float>(m_addr + 100);
	}
	float GetBovThreshold() {
		return memory.read<float>(m_addr + 104);
	}
	float GetIgnitionTime() {
		return memory.read<float>(m_addr + 108);
	}
	float GetEngineDamping() {
		return memory.read<float>(m_addr + 112);
	}
	float GetOmegaN() {
		return memory.read<float>(m_addr + 116);
	}
	float GetOmegaGainRPM() {
		return memory.read<float>(m_addr + 120);
	}
	float GetRpmSuggestedShift() {
		return memory.read<float>(m_addr + 124);
	}
	float GetRpmLimiterAlarm() {
		return memory.read<float>(m_addr + 128);
	}
	struct FStartECUAssistData GetStartECUAssistData() {
		return memory.read<struct FStartECUAssistData>(m_addr + 132);
	}
	float GetStarterEngineTorque() {
		return memory.read<float>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FToggleBlurStrength
{
public:
	FToggleBlurStrength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisStrong() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDynamicDownForceControllerData
{
public:
	FDynamicDownForceControllerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECombinatorModeDF GetCombinatorMode() {
		return memory.read<enum class ECombinatorModeDF>(m_addr + 0);
	}
	enum class EInputVarDF GetInputVar() {
		return memory.read<enum class EInputVarDF>(m_addr + 1);
	}
	struct UCurveFloat GetLut() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}
	float GetFilter() {
		return memory.read<float>(m_addr + 16);
	}
	float GetUpLimit() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDownLimit() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartECUAssistData
{
public:
	FStartECUAssistData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRpmRange() {
		return memory.read<float>(m_addr + 0);
	}
	float GetGain() {
		return memory.read<float>(m_addr + 4);
	}
	float GetSpeedRangeKHM() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMultiplayerCar
{
public:
	FGetMultiplayerCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 0);
	}
	bool Getffa_fallback() {
		return memory.read<bool>(m_addr + 1);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetModelSponsorKeysAsInt
{
public:
	FgetModelSponsorKeysAsInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct TArray<int32_t> GetReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FEngineMapData
{
public:
	FEngineMapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPowerMult() {
		return memory.read<float>(m_addr + 0);
	}
	float GetConsumptionMult() {
		return memory.read<float>(m_addr + 4);
	}
	struct UCurveFloat GetThrottleResponseCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}
	float GetThrottleGammaGainKRPM() {
		return memory.read<float>(m_addr + 16);
	}
	float GetThrottleGammaRefRPM() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSessionStatus
{
public:
	FgetSessionStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESessionStatus GetReturnValue() {
		return memory.read<enum class ESessionStatus>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSteerForUI
{
public:
	FGetSteerForUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBrakesData
{
public:
	FBrakesData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTotalTorque() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrontBias() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinBias() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxBias() {
		return memory.read<float>(m_addr + 12);
	}
	float GetHandBrakeTorque() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetHasCockpitBias() {
		return memory.read<bool>(m_addr + 20);
	}
	float GetCockpitBiasAdjustStep() {
		return memory.read<float>(m_addr + 24);
	}
	enum class EEBBMode GetEBBMode() {
		return memory.read<enum class EEBBMode>(m_addr + 28);
	}
	float GetEBBFrontShareMultiplier() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetIsBrakeTempActive() {
		return memory.read<bool>(m_addr + 36);
	}
	struct FDynamicControllerData GetebbController() {
		return memory.read<struct FDynamicControllerData>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStickerSet
{
public:
	FGetStickerSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FStickerSet GetDestination() {
		return memory.read<struct FStickerSet>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 368);
	}

private:
	std::uint64_t m_addr = 0;
};class FColliderBoxesData
{
public:
	FColliderBoxesData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCentre() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetSize() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	float GetPitchDeg() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreCompoundSetJson
{
public:
	FTyreCompoundSetJson(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTyreCompoundName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FTyreCompoundData GetFront() {
		return memory.read<struct FTyreCompoundData>(m_addr + 16);
	}
	struct FTyreCompoundData GetRear() {
		return memory.read<struct FTyreCompoundData>(m_addr + 440);
	}
	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 864);
	}

private:
	std::uint64_t m_addr = 0;
};class FisOnline
{
public:
	FisOnline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreCompoundData
{
public:
	FTyreCompoundData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTyreData GetData() {
		return memory.read<struct FTyreData>(m_addr + 0);
	}
	struct FTyreModelData GetmodelData() {
		return memory.read<struct FTyreModelData>(m_addr + 88);
	}
	struct FTyreThermalPatchData GetThermalData() {
		return memory.read<struct FTyreThermalPatchData>(m_addr + 320);
	}

private:
	std::uint64_t m_addr = 0;
};class FFileItem
{
public:
	FFileItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetfileDisplayName() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FDateTime GetfileDate() {
		return memory.read<struct FDateTime>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreThermalPatchData
{
public:
	FTyreThermalPatchData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrictionK() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRollingK() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRollingSurfaceK() {
		return memory.read<float>(m_addr + 8);
	}
	float GetsurfaceTransfer() {
		return memory.read<float>(m_addr + 12);
	}
	float GetpatchTransfer() {
		return memory.read<float>(m_addr + 16);
	}
	float GetpatchCoreTransfer() {
		return memory.read<float>(m_addr + 20);
	}
	float GetinternalCoreTransfer() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCoolFactorBASE() {
		return memory.read<float>(m_addr + 28);
	}
	float GetCoolFactor() {
		return memory.read<float>(m_addr + 32);
	}
	float GetCoolFactorRain() {
		return memory.read<float>(m_addr + 36);
	}
	float GetCoolFactorPhase() {
		return memory.read<float>(m_addr + 40);
	}
	float GetCoolFactorPhaseTRef() {
		return memory.read<float>(m_addr + 44);
	}
	float GetgrainGain() {
		return memory.read<float>(m_addr + 48);
	}
	float GetgrainGamma() {
		return memory.read<float>(m_addr + 52);
	}
	float GetgrainSlipAngleGain() {
		return memory.read<float>(m_addr + 56);
	}
	float GetgrainSlipAngleGamma() {
		return memory.read<float>(m_addr + 60);
	}
	float GetgrainSlipAngleThreshold() {
		return memory.read<float>(m_addr + 64);
	}
	float GetblisterGain() {
		return memory.read<float>(m_addr + 68);
	}
	float GetblisterGamma() {
		return memory.read<float>(m_addr + 72);
	}
	float GetpracticalTempSource() {
		return memory.read<float>(m_addr + 76);
	}
	float GetBrakeTransferFactor() {
		return memory.read<float>(m_addr + 80);
	}
	struct UCurveFloat GetPerformanceCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UCurveFloat(ptr_addr);
	}
	float GetAngularSpeedToSpeedK() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFlexIMO() {
		return memory.read<float>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreModelData
{
public:
	FTyreModelData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDy0() {
		return memory.read<float>(m_addr + 0);
	}
	float GetDx0() {
		return memory.read<float>(m_addr + 4);
	}
	float GetlsExpY() {
		return memory.read<float>(m_addr + 8);
	}
	float GetlsExpX() {
		return memory.read<float>(m_addr + 12);
	}
	float GetFalloffLevel() {
		return memory.read<float>(m_addr + 16);
	}
	float GetFalloffLevelX() {
		return memory.read<float>(m_addr + 20);
	}
	float GetFalloffSpeed() {
		return memory.read<float>(m_addr + 24);
	}
	float GetFalloffSpeedX() {
		return memory.read<float>(m_addr + 28);
	}
	float GetFz0() {
		return memory.read<float>(m_addr + 32);
	}
	float GetFrictionLimitAngle() {
		return memory.read<float>(m_addr + 36);
	}
	float GetFlexGain() {
		return memory.read<float>(m_addr + 40);
	}
	float GetrelaxationLength() {
		return memory.read<float>(m_addr + 44);
	}
	float GetcamberGain() {
		return memory.read<float>(m_addr + 48);
	}
	float Getdcamber0() {
		return memory.read<float>(m_addr + 52);
	}
	float Getdcamber1() {
		return memory.read<float>(m_addr + 56);
	}
	float Getdcamber2() {
		return memory.read<float>(m_addr + 60);
	}
	float GetmaxPositiveCamberDEG() {
		return memory.read<float>(m_addr + 64);
	}
	float GetcfXmult() {
		return memory.read<float>(m_addr + 68);
	}
	float GetbrakeDXMod() {
		return memory.read<float>(m_addr + 72);
	}
	float GetGrooveFactor() {
		return memory.read<float>(m_addr + 76);
	}
	float GetGrooveSAFactor() {
		return memory.read<float>(m_addr + 80);
	}
	float GetCombinedFactor() {
		return memory.read<float>(m_addr + 84);
	}
	float GetSrFyCombined() {
		return memory.read<float>(m_addr + 88);
	}
	float GetSaFxCombined() {
		return memory.read<float>(m_addr + 92);
	}
	float GetGripSlipFactor() {
		return memory.read<float>(m_addr + 96);
	}
	struct UCurveFloat GetwearCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UCurveFloat(ptr_addr);
	}
	struct FRollingResistanceData GetRollingResistance() {
		return memory.read<struct FRollingResistanceData>(m_addr + 112);
	}
	struct FTyrePressureData GetPressureData() {
		return memory.read<struct FTyrePressureData>(m_addr + 128);
	}
	float GetThermalVerticalSpringK() {
		return memory.read<float>(m_addr + 160);
	}
	float GetThermalVerticalDampK() {
		return memory.read<float>(m_addr + 164);
	}
	float GetCamberVerticalKRangeDEG() {
		return memory.read<float>(m_addr + 168);
	}
	float GetCamberVerticalKGain() {
		return memory.read<float>(m_addr + 172);
	}
	float GetThermalWearMult() {
		return memory.read<float>(m_addr + 176);
	}
	float GetRRWearMult() {
		return memory.read<float>(m_addr + 180);
	}
	float GetMZTweakMult() {
		return memory.read<float>(m_addr + 184);
	}
	float GetgrainFactor() {
		return memory.read<float>(m_addr + 188);
	}
	float GettrailRemap() {
		return memory.read<float>(m_addr + 192);
	}
	float GettrailReductionNdSlip() {
		return memory.read<float>(m_addr + 196);
	}
	float GetMzScale() {
		return memory.read<float>(m_addr + 200);
	}
	float Getmu0T() {
		return memory.read<float>(m_addr + 204);
	}
	float GetmuTSensitivity() {
		return memory.read<float>(m_addr + 208);
	}
	float GetTrefMuT() {
		return memory.read<float>(m_addr + 212);
	}
	float GetTrefFrictionLimitAngle() {
		return memory.read<float>(m_addr + 216);
	}
	float GetSpeedSensitivity() {
		return memory.read<float>(m_addr + 220);
	}
	float GetfrictionLimitAngleTSensitivity() {
		return memory.read<float>(m_addr + 224);
	}
	float GetFlexWearIMO() {
		return memory.read<float>(m_addr + 228);
	}

private:
	std::uint64_t m_addr = 0;
};class FTyreData
{
public:
	FTyreData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWidth() {
		return memory.read<float>(m_addr + 0);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDamperRate() {
		return memory.read<float>(m_addr + 8);
	}
	float GetangularInertia() {
		return memory.read<float>(m_addr + 12);
	}
	float GetrimRadius() {
		return memory.read<float>(m_addr + 16);
	}
	float GetradiusRaiseK() {
		return memory.read<float>(m_addr + 20);
	}
	float GettreadHeightMM() {
		return memory.read<float>(m_addr + 24);
	}
	float GettreadConsumptionK() {
		return memory.read<float>(m_addr + 28);
	}
	float GetTyreMass() {
		return memory.read<float>(m_addr + 32);
	}
	float GetflexC() {
		return memory.read<float>(m_addr + 36);
	}
	float GetflexK() {
		return memory.read<float>(m_addr + 40);
	}
	float GetLongitudinalFlexC() {
		return memory.read<float>(m_addr + 44);
	}
	float GetLongitudinalFlexK() {
		return memory.read<float>(m_addr + 48);
	}
	float GetBlanketTemp() {
		return memory.read<float>(m_addr + 52);
	}
	float GetFlatSpotK() {
		return memory.read<float>(m_addr + 56);
	}
	float GetNormalToFlexRatio() {
		return memory.read<float>(m_addr + 60);
	}
	float GetSlipVibrationsThresholdMS() {
		return memory.read<float>(m_addr + 64);
	}
	float GetSlipVibrationsScale() {
		return memory.read<float>(m_addr + 68);
	}
	float GetSlipVibrationsFallOff() {
		return memory.read<float>(m_addr + 72);
	}
	bool GetSlipVibrationOnlyFFB() {
		return memory.read<bool>(m_addr + 76);
	}
	float GetSlipVibrationFrequency() {
		return memory.read<float>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompoundSet
{
public:
	FCompoundSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetShortName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FTyreCompoundData GetFront() {
		return memory.read<struct FTyreCompoundData>(m_addr + 32);
	}
	struct FTyreCompoundData GetRear() {
		return memory.read<struct FTyreCompoundData>(m_addr + 456);
	}

private:
	std::uint64_t m_addr = 0;
};class FpitstopMFDchanged
{
public:
	FpitstopMFDchanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMfdChangeType GetType() {
		return memory.read<enum class EMfdChangeType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBrakeDiscData
{
public:
	FBrakeDiscData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCoolTransfer() {
		return memory.read<float>(m_addr + 0);
	}
	float GetTorqueK() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCoolSpeedFactor() {
		return memory.read<float>(m_addr + 8);
	}
	float GetRainCoolFactor() {
		return memory.read<float>(m_addr + 12);
	}
	float GetEmissivity() {
		return memory.read<float>(m_addr + 16);
	}
	float GetSurface() {
		return memory.read<float>(m_addr + 20);
	}
	float GetThermalCapacity() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCoreThermalCapacity() {
		return memory.read<float>(m_addr + 28);
	}
	float GetThermalConductivity() {
		return memory.read<float>(m_addr + 32);
	}
	float GetConductionThickness() {
		return memory.read<float>(m_addr + 36);
	}
	float GetCDisk() {
		return memory.read<float>(m_addr + 40);
	}
	float GetCPad() {
		return memory.read<float>(m_addr + 44);
	}
	float GetHDisk() {
		return memory.read<float>(m_addr + 48);
	}
	float GetHPad() {
		return memory.read<float>(m_addr + 52);
	}
	float GetPerformanceDecreaseAtmm() {
		return memory.read<float>(m_addr + 56);
	}
	float GetGammaCorrectionmm() {
		return memory.read<float>(m_addr + 60);
	}
	float GetMuReductionmm() {
		return memory.read<float>(m_addr + 64);
	}
	float GetareaReductionmm() {
		return memory.read<float>(m_addr + 68);
	}
	struct UCurveFloat GetPerfCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBackground
{
public:
	FSetBackground(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FtoggleDirectionLights
{
public:
	FtoggleDirectionLights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisLeft() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerSeasonResult
{
public:
	FCareerSeasonResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetcareerPoints() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetRaceWins() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetPodium() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GettotalBonusPoints() {
		return memory.read<int32_t>(m_addr + 12);
	}
	enum class EMedalType GetoverallMedal() {
		return memory.read<enum class EMedalType>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FForceHudOverlayByCaption
{
public:
	FForceHudOverlayByCaption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getcaption() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUndoChanges
{
public:
	FUndoChanges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGroup() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerEventResult
{
public:
	FCareerEventResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetseasonNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EMedalType GetmedalGained() {
		return memory.read<enum class EMedalType>(m_addr + 4);
	}
	int32_t GetmedalPoints() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GettotalBonusPoints() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetfirstPlaceHunter() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GettopQualifier() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetovertakeMachine() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GethammerTime() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t Getprofessionality() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GeteventNumber() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetfinalPosition() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetqualifyFinalPosition() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GettotalTime() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetbestLap() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerRealism
{
public:
	FCareerRealism(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetdamageRate() {
		return memory.read<float>(m_addr + 0);
	}
	bool GettyreFuelWear() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetPenalties() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetunlimitedTyreSet() {
		return memory.read<bool>(m_addr + 6);
	}
	bool GetbrakeFading() {
		return memory.read<bool>(m_addr + 7);
	}
	bool GetfastRollingStart() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetpitSpeedingPenalty() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputActionFromKeyEvent
{
public:
	FGetInputActionFromKeyEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKeyEvent GetKeyEvent() {
		return memory.read<struct FKeyEvent>(m_addr + 0);
	}
	struct FInputAction GetReturnValue() {
		return memory.read<struct FInputAction>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOutside
{
public:
	FSetOutside(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPitstopCarOutside GetValue() {
		return memory.read<enum class EPitstopCarOutside>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerEventPreset
{
public:
	FCareerEventPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct FText GetInfoText() {
		return memory.read<struct FText>(m_addr + 32);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 56);
	}
	struct FText GetLoadingInfoLine() {
		return memory.read<struct FText>(m_addr + 64);
	}
	struct FText GetobjectiveText() {
		return memory.read<struct FText>(m_addr + 88);
	}
	struct TSoftObjectPtr<UTexture2D> GetPoster() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 112);
	}
	struct FCareerEventData GetEventDetails() {
		return memory.read<struct FCareerEventData>(m_addr + 152);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetSeasonType
{
public:
	FsetSeasonType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	bool Getset_menustate() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerVictoryCondition
{
public:
	FCareerVictoryCondition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDifficultyLevel GetdifficultyLevel() {
		return memory.read<enum class EDifficultyLevel>(m_addr + 0);
	}
	int32_t GetlapCountGold() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetlapCountSilver() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetlapCountBronze() {
		return memory.read<int32_t>(m_addr + 12);
	}
	double GettotalTimeGold() {
		return memory.read<double>(m_addr + 16);
	}
	double GettotalTimeSilver() {
		return memory.read<double>(m_addr + 24);
	}
	double GettotalTimeBronze() {
		return memory.read<double>(m_addr + 32);
	}
	double GetbestLapGold() {
		return memory.read<double>(m_addr + 40);
	}
	double GetbestLapSilver() {
		return memory.read<double>(m_addr + 48);
	}
	double GetbestLapBronze() {
		return memory.read<double>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTextVisibility
{
public:
	FSetTextVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Gettext_visibility() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAxisPressDetailedEvent
{
public:
	FOnAxisPressDetailedEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char Get_deviceIndex() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t Get_axisIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float Get_value() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRimMaterialType
{
public:
	FGetRimMaterialType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FRimMaterialType GetDestination() {
		return memory.read<struct FRimMaterialType>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGas
{
public:
	FGetGas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCareerSessionData
{
public:
	FCareerSessionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESessionType GetsessionType() {
		return memory.read<enum class ESessionType>(m_addr + 0);
	}
	int32_t GetsessionDurationS() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GettimeOfDayRound1() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GettimeOfDayRound2() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetPositionOnGrid() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTimeMultiplier() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct FTrackStatus GetTrackStatus() {
		return memory.read<struct FTrackStatus>(m_addr + 24);
	}
	float GetdynamicTrackMultiplier() {
		return memory.read<float>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetBronzeMedalPoints
{
public:
	FgetBronzeMedalPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampEventPreset
{
public:
	FChampEventPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct FText GetInfoText() {
		return memory.read<struct FText>(m_addr + 32);
	}
	struct FText GetLoadingInfoLine() {
		return memory.read<struct FText>(m_addr + 56);
	}
	struct FText GetobjectiveText() {
		return memory.read<struct FText>(m_addr + 80);
	}
	struct TSoftObjectPtr<UTexture2D> GetPoster() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 104);
	}
	struct FChampEventData GeteventData() {
		return memory.read<struct FChampEventData>(m_addr + 144);
	}
	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 456);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampSaveData
{
public:
	FChampSaveData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetcurrentEvent() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EChampType GetchampType() {
		return memory.read<enum class EChampType>(m_addr + 4);
	}
	bool GetuseGuids() {
		return memory.read<bool>(m_addr + 5);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 6);
	}
	enum class EChampWeather GetweatherType() {
		return memory.read<enum class EChampWeather>(m_addr + 7);
	}
	struct FCarInfoJson GetplayerCarInfo() {
		return memory.read<struct FCarInfoJson>(m_addr + 8);
	}
	struct FName GetCarName() {
		return memory.read<struct FName>(m_addr + 192);
	}
	struct FChampSettings GetSettings() {
		return memory.read<struct FChampSettings>(m_addr + 200);
	}
	struct FChampEventData GeteventSetting() {
		return memory.read<struct FChampEventData>(m_addr + 320);
	}
	struct TMap<enum class ERaceEventType, struct FChampEventData> GetsavedEventSettings() {
		return memory.read<struct TMap<enum class ERaceEventType, struct FChampEventData>>(m_addr + 632);
	}
	bool GetisCarinfoSet() {
		return memory.read<bool>(m_addr + 712);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetChampEventPreset
{
public:
	FgetChampEventPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getevent_id() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 4);
	}
	bool Getis_custom() {
		return memory.read<bool>(m_addr + 5);
	}
	struct FChampEventPreset GetReturnValue() {
		return memory.read<struct FChampEventPreset>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampLeaderboard
{
public:
	FChampLeaderboard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class ECupCategory, struct FChampCupCategoryLeaderboard> Getcups() {
		return memory.read<struct TMap<enum class ECupCategory, struct FChampCupCategoryLeaderboard>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisIgnitionOn
{
public:
	FisIgnitionOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChampCupCategoryLeaderboard
{
public:
	FChampCupCategoryLeaderboard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChampLeaderboardLine> Getlines() {
		return memory.read<struct TArray<struct FChampLeaderboardLine>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommsMessageKey
{
public:
	FCommsMessageKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECommsCategory GetCategory() {
		return memory.read<enum class ECommsCategory>(m_addr + 8);
	}
	enum class ECommsPriority GetPriority() {
		return memory.read<enum class ECommsPriority>(m_addr + 9);
	}
	struct FString GetStringTableKey() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetText
{
public:
	FSetText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetRaceNumber() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetPosition() {
		return memory.read<struct FText>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveUserPreset
{
public:
	FSaveUserPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FCommandConfiguration GetCommandConfiguration() {
		return memory.read<struct FCommandConfiguration>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCPServerRegions
{
public:
	FGetCPServerRegions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCompetitionServerRegion> GetReturnValue() {
		return memory.read<struct TArray<struct FCompetitionServerRegion>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTCCutLevel
{
public:
	FGetTCCutLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FProjectWorldToScreen
{
public:
	FProjectWorldToScreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct FVector GetWorldPosition() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector2D GetScreenPosition() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadingInfo
{
public:
	FLoadingInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetRaceLength() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FText GetTimeOfDay() {
		return memory.read<struct FText>(m_addr + 24);
	}
	struct FText GetOpponents() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FText GetOpponentsStrength() {
		return memory.read<struct FText>(m_addr + 72);
	}
	struct FText GetOpponentsAbility() {
		return memory.read<struct FText>(m_addr + 96);
	}
	struct FText GetTrackTemp() {
		return memory.read<struct FText>(m_addr + 120);
	}
	struct FText GetAirTemp() {
		return memory.read<struct FText>(m_addr + 144);
	}
	struct FText GetWeatherIcon() {
		return memory.read<struct FText>(m_addr + 168);
	}
	struct FText Getrealism() {
		return memory.read<struct FText>(m_addr + 192);
	}
	struct FText GettyreWear() {
		return memory.read<struct FText>(m_addr + 216);
	}
	struct FText GetFuel() {
		return memory.read<struct FText>(m_addr + 240);
	}
	struct FText Getdamage() {
		return memory.read<struct FText>(m_addr + 264);
	}
	struct FText GettxtTeamName() {
		return memory.read<struct FText>(m_addr + 288);
	}
	struct FVector GetWeatherValues() {
		return memory.read<struct FVector>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDriverInfoBySeason
{
public:
	FGetDriverInfoBySeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 8);
	}
	struct FDriverInfo GetDestination() {
		return memory.read<struct FDriverInfo>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaceWidgetLayout
{
public:
	FRaceWidgetLayout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWigetAnchor GetwidgetAnchor() {
		return memory.read<enum class EWigetAnchor>(m_addr + 64);
	}
	float GetoffsetX() {
		return memory.read<float>(m_addr + 68);
	}
	float GetoffsetY() {
		return memory.read<float>(m_addr + 72);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 76);
	}
	float GetminimumScale() {
		return memory.read<float>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FMapMaterial
{
public:
	FMapMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterialInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInterface(ptr_addr);
	}
	float Getorthowidth() {
		return memory.read<float>(m_addr + 16);
	}
	struct FVector2D GetcapturePos() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FACGfxPreset
{
public:
	FACGfxPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetResolutionQuality() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetViewDistanceQuality() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetAntiAliasingQuality() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetShadowQuality() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetPostProcessQuality() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTextureQuality() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetEffectsQuality() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetFoliageQuality() {
		return memory.read<int32_t>(m_addr + 28);
	}
	char GetMirrorQualityLevel() {
		return memory.read<char>(m_addr + 32);
	}
	int32_t GetMirrorFramerateCap() {
		return memory.read<int32_t>(m_addr + 36);
	}
	char GetMaxCarsVisible() {
		return memory.read<char>(m_addr + 40);
	}
	bool GetisAATemporal() {
		return memory.read<bool>(m_addr + 41);
	}
	char GetAACustom() {
		return memory.read<char>(m_addr + 42);
	}
	float GetPixelDensity() {
		return memory.read<float>(m_addr + 44);
	}
	int32_t GetMirrorDistance() {
		return memory.read<int32_t>(m_addr + 48);
	}
	bool GetAdvancedSharpenFilter() {
		return memory.read<bool>(m_addr + 52);
	}
	char GetMaterialsQuality() {
		return memory.read<char>(m_addr + 53);
	}
	bool GetTemporalUpsampling() {
		return memory.read<bool>(m_addr + 54);
	}
	char GetVolumetricFog() {
		return memory.read<char>(m_addr + 55);
	}
	float GetBloomLevel() {
		return memory.read<float>(m_addr + 56);
	}
	char GetBloomQuality() {
		return memory.read<char>(m_addr + 60);
	}
	char GetMirrorsResolution() {
		return memory.read<char>(m_addr + 61);
	}
	float GetFoliageLodQuality() {
		return memory.read<float>(m_addr + 64);
	}
	char GetCarLODSet() {
		return memory.read<char>(m_addr + 68);
	}
	bool GetHLODEnabled() {
		return memory.read<bool>(m_addr + 69);
	}
	char GetShadowDistanceQuality() {
		return memory.read<char>(m_addr + 70);
	}
	float GetFrameLimit() {
		return memory.read<float>(m_addr + 72);
	}
	char GetisMBlurEnabled() {
		return memory.read<char>(m_addr + 76);
	}
	float GetColorSaturation() {
		return memory.read<float>(m_addr + 80);
	}
	float GetSharpen() {
		return memory.read<float>(m_addr + 84);
	}
	float GetCameraDirtLevel() {
		return memory.read<float>(m_addr + 88);
	}
	float GetWhiteBalance() {
		return memory.read<float>(m_addr + 92);
	}
	float GetImageExposureGain() {
		return memory.read<float>(m_addr + 96);
	}
	float GetImageContrast() {
		return memory.read<float>(m_addr + 100);
	}
	float GetHmdWorldToMeters() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetFpsCapUI() {
		return memory.read<bool>(m_addr + 108);
	}
	bool GetuseLegacyTonemapper() {
		return memory.read<bool>(m_addr + 109);
	}
	int32_t GetHDRColorGamut() {
		return memory.read<int32_t>(m_addr + 112);
	}
	float GetHDRUILevel() {
		return memory.read<float>(m_addr + 116);
	}
	int32_t GetContactShadows() {
		return memory.read<int32_t>(m_addr + 120);
	}
	bool GetDLSSEnable() {
		return memory.read<bool>(m_addr + 124);
	}
	int32_t GetDLSSQuality() {
		return memory.read<int32_t>(m_addr + 128);
	}
	float GetDLSSSharpness() {
		return memory.read<float>(m_addr + 132);
	}
	bool GetTAAGen5() {
		return memory.read<bool>(m_addr + 136);
	}
	bool GetAMDFSREnable() {
		return memory.read<bool>(m_addr + 137);
	}
	int32_t GetAMDFSRQuality() {
		return memory.read<int32_t>(m_addr + 140);
	}
	float GetAMDFSRSharpness() {
		return memory.read<float>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGuiGameMode
{
public:
	FSetGuiGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	enum class EGuiGameModes Getgame_mode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGraphicOptions
{
public:
	FGraphicOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLastLoadedPresetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FIntPoint GetResolution() {
		return memory.read<struct FIntPoint>(m_addr + 16);
	}
	bool GetUseFullscreen() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetUseTripleScreen() {
		return memory.read<bool>(m_addr + 25);
	}
	float GetHmdWorldToMeters() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetUseHDROutput() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetFpsCapUI() {
		return memory.read<bool>(m_addr + 33);
	}
	int32_t GetMirrorFramerateCap() {
		return memory.read<int32_t>(m_addr + 36);
	}
	char GetMirrorQualityLevel() {
		return memory.read<char>(m_addr + 40);
	}
	char GetMaxCarsVisible() {
		return memory.read<char>(m_addr + 41);
	}
	char GetisMBlurEnabled() {
		return memory.read<char>(m_addr + 42);
	}
	char GetMotionBlurLevel() {
		return memory.read<char>(m_addr + 43);
	}
	bool GetisAATemporal() {
		return memory.read<bool>(m_addr + 44);
	}
	char GetAACustom() {
		return memory.read<char>(m_addr + 45);
	}
	float GetColorSaturation() {
		return memory.read<float>(m_addr + 48);
	}
	float GetSharpen() {
		return memory.read<float>(m_addr + 52);
	}
	float GetPixelDensity() {
		return memory.read<float>(m_addr + 56);
	}
	int32_t GetHDROverride() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetHDROutputDevice() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetHDRColorGamut() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetHDRUICompositeMode() {
		return memory.read<int32_t>(m_addr + 72);
	}
	float GetHDRUILevel() {
		return memory.read<float>(m_addr + 76);
	}
	float GetHDRImageContrastOffset() {
		return memory.read<float>(m_addr + 80);
	}
	float GetHDRExposureGainOffset() {
		return memory.read<float>(m_addr + 84);
	}
	int32_t GetMirrorDistance() {
		return memory.read<int32_t>(m_addr + 88);
	}
	bool GetAdvancedSharpenFilter() {
		return memory.read<bool>(m_addr + 92);
	}
	char GetMaterialsQuality() {
		return memory.read<char>(m_addr + 93);
	}
	bool GetTemporalUpsampling() {
		return memory.read<bool>(m_addr + 94);
	}
	char GetVolumetricFog() {
		return memory.read<char>(m_addr + 95);
	}
	float GetBloomLevel() {
		return memory.read<float>(m_addr + 96);
	}
	char GetBloomQuality() {
		return memory.read<char>(m_addr + 100);
	}
	char GetMirrorsResolution() {
		return memory.read<char>(m_addr + 101);
	}
	float GetCameraDirtLevel() {
		return memory.read<float>(m_addr + 104);
	}
	float GetFoliageLodQuality() {
		return memory.read<float>(m_addr + 108);
	}
	float GetWhiteBalance() {
		return memory.read<float>(m_addr + 112);
	}
	char GetCarLODSet() {
		return memory.read<char>(m_addr + 116);
	}
	bool GetHLODEnabled() {
		return memory.read<bool>(m_addr + 117);
	}
	char GetColorScheme() {
		return memory.read<char>(m_addr + 118);
	}
	float GetImageExposureGain() {
		return memory.read<float>(m_addr + 120);
	}
	float GetImageContrast() {
		return memory.read<float>(m_addr + 124);
	}
	bool GetuseTriplePP() {
		return memory.read<bool>(m_addr + 128);
	}
	bool GetuseTripleViewRect() {
		return memory.read<bool>(m_addr + 129);
	}
	bool GetuseLegacyTonemapper() {
		return memory.read<bool>(m_addr + 130);
	}
	char GetShadowDistanceQuality() {
		return memory.read<char>(m_addr + 131);
	}
	bool GetContactShadows() {
		return memory.read<bool>(m_addr + 132);
	}
	bool GetDLSSEnable() {
		return memory.read<bool>(m_addr + 133);
	}
	int32_t GetDLSSQuality() {
		return memory.read<int32_t>(m_addr + 136);
	}
	float GetDLSSSharpness() {
		return memory.read<float>(m_addr + 140);
	}
	bool GetDLSSAutoExposure() {
		return memory.read<bool>(m_addr + 144);
	}
	bool GetTAAGen5() {
		return memory.read<bool>(m_addr + 145);
	}
	bool GetAMDFSREnable() {
		return memory.read<bool>(m_addr + 146);
	}
	int32_t GetAMDFSRQuality() {
		return memory.read<int32_t>(m_addr + 148);
	}
	float GetAMDFSRSharpness() {
		return memory.read<float>(m_addr + 152);
	}
	char GetGfxPreset() {
		return memory.read<char>(m_addr + 156);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNationality
{
public:
	FSetNationality(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENationality Getnation() {
		return memory.read<enum class ENationality>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBackendSpecialEvent
{
public:
	FBackendSpecialEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEventSortOrder() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetOnlineEventRefId() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetEventSeason() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 16);
	}
	bool GetIsOldSE() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FName GetTrackFName() {
		return memory.read<struct FName>(m_addr + 44);
	}
	struct FName GetCarKey() {
		return memory.read<struct FName>(m_addr + 52);
	}
	struct FName GetDriverKey() {
		return memory.read<struct FName>(m_addr + 60);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 68);
	}
	enum class EGuiGameModes GetEventGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 69);
	}
	enum class ERaceEventType GetRaceEventType() {
		return memory.read<enum class ERaceEventType>(m_addr + 70);
	}
	bool GetLockedSetup() {
		return memory.read<bool>(m_addr + 71);
	}
	enum class EContentType GetContentId() {
		return memory.read<enum class EContentType>(m_addr + 72);
	}
	int32_t GetDurationMinutes() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetTimeOfDay() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetRaceDay() {
		return memory.read<int32_t>(m_addr + 84);
	}
	int32_t GetAmbientTemp() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetRoadTemp() {
		return memory.read<int32_t>(m_addr + 92);
	}
	float GetTimeMultiplier() {
		return memory.read<float>(m_addr + 96);
	}
	float GetCloudLevel() {
		return memory.read<float>(m_addr + 100);
	}
	float GetRain() {
		return memory.read<float>(m_addr + 104);
	}
	float GetIdealLineGrip() {
		return memory.read<float>(m_addr + 108);
	}
	float GetDryLineWetness() {
		return memory.read<float>(m_addr + 112);
	}
	float GetWetness() {
		return memory.read<float>(m_addr + 116);
	}
	float Getpuddles() {
		return memory.read<float>(m_addr + 120);
	}
	int32_t GetSeed() {
		return memory.read<int32_t>(m_addr + 124);
	}
	float Getvariability() {
		return memory.read<float>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetPitLimiter
{
public:
	FsetPitLimiter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisOn() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetanimEnable() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesTrackRecord
{
public:
	FOnlineServicesTrackRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 4);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 5);
	}
	int32_t GetLapTime() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetStintTime() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTryGetKeyboardFocus
{
public:
	FOnTryGetKeyboardFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpeedKMH
{
public:
	FGetSpeedKMH(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRatingIncidentAnalysisEvaluation
{
public:
	FRatingIncidentAnalysisEvaluation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FCornerSectionLapData
{
public:
	FCornerSectionLapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCarIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	char GetSectionsCompleted() {
		return memory.read<char>(m_addr + 4);
	}
	char GetSectionsTotal() {
		return memory.read<char>(m_addr + 5);
	}
	float GetTrafficPercent() {
		return memory.read<float>(m_addr + 8);
	}
	char GetCuts() {
		return memory.read<char>(m_addr + 12);
	}
	int32_t GetCutAdvantage() {
		return memory.read<int32_t>(m_addr + 16);
	}
	char GetMinorMistakes() {
		return memory.read<char>(m_addr + 20);
	}
	char GetMajorMistakes() {
		return memory.read<char>(m_addr + 21);
	}
	float GetConsistencyLapRating() {
		return memory.read<float>(m_addr + 24);
	}
	float GetConsistencyLastLapReferences() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FRatingIncidentOutcomeEvaluation
{
public:
	FRatingIncidentOutcomeEvaluation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetKeysForAction
{
public:
	FGetKeysForAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController Getplayer_controller() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	enum class EControllerActionType Getaction_type() {
		return memory.read<enum class EControllerActionType>(m_addr + 8);
	}
	struct TArray<struct FInputActionKeyMapping> GetReturnValue() {
		return memory.read<struct TArray<struct FInputActionKeyMapping>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesCarStates
{
public:
	FOnlineServicesCarStates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCarControlCurrentNdSlipThreshold() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetCarControlIsInNdSlipActionTime() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnlineServicesMPMatchmakingRequest
{
public:
	FOnlineServicesMPMatchmakingRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FgetCarAvatar
{
public:
	FgetCarAvatar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACarAvatar GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ACarAvatar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFakeSteamAchievement
{
public:
	FFakeSteamAchievement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetachievementId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetfakeTitle() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetfakeMessage() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplayInfo
{
public:
	FReplayInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTrackId() {
		return memory.read<int32_t>(m_addr + 20);
	}
	enum class ESessionType GetsessionType() {
		return memory.read<enum class ESessionType>(m_addr + 24);
	}
	float GetLength() {
		return memory.read<float>(m_addr + 28);
	}
	int32_t GetcarModelTypeId() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FDateTime GetcreationDate() {
		return memory.read<struct FDateTime>(m_addr + 40);
	}
	enum class EReplayStore Getstore() {
		return memory.read<enum class EReplayStore>(m_addr + 48);
	}
	enum class EReplayType GetType() {
		return memory.read<enum class EReplayType>(m_addr + 49);
	}
	enum class EReplayCategory GetCategory() {
		return memory.read<enum class EReplayCategory>(m_addr + 50);
	}
	struct FString GetServerName() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FHighlightInfo
{
public:
	FHighlightInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHighLightsEventType GethighLightType() {
		return memory.read<enum class EHighLightsEventType>(m_addr + 0);
	}
	struct FString GetFirstName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetLastName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FString GetfirstNameOpponent() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetlastNameOpponent() {
		return memory.read<struct FString>(m_addr + 56);
	}
	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetRaceNumber() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetraceNumberOpponent() {
		return memory.read<int32_t>(m_addr + 80);
	}
	struct FString GetcarDisplayName() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetcarDisplayNameOpponent() {
		return memory.read<struct FString>(m_addr + 104);
	}
	int32_t GetPosition() {
		return memory.read<int32_t>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FDamperLut
{
public:
	FDamperLut(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetScreenName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct UCurveFloat GetDamperLut() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupStrategyLimits
{
public:
	FSetupStrategyLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetFuel() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}
	struct FSetupSelectorLimits GetFuelToAdd() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 56);
	}
	struct FSetupSelectorLimits GetCompound() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 112);
	}
	struct FSetupSelectorLimits GetTyreSet() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupSelectorLimits
{
public:
	FSetupSelectorLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMin() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetStep() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetMax() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 12);
	}
	struct UCurveFloat GetCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UCurveFloat(ptr_addr);
	}
	bool GetShowValue() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetisZeroBased() {
		return memory.read<bool>(m_addr + 25);
	}
	struct FString GetUnit() {
		return memory.read<struct FString>(m_addr + 32);
	}
	int32_t GetFractionalDigits() {
		return memory.read<int32_t>(m_addr + 48);
	}
	bool GetisNegative() {
		return memory.read<bool>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupTyresLimits
{
public:
	FSetupTyresLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetTyreSetLimits() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}
	struct FSetupSelectorLimits Getpressure[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMenuManager
{
public:
	FGetMenuManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMenuManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMenuManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupDifferentialLimits
{
public:
	FSetupDifferentialLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetPreload() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupDamperLimits
{
public:
	FSetupDamperLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetBumpSlow[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}
	struct FSetupSelectorLimits GetReboundSlow[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 224);
	}
	struct FSetupSelectorLimits GetBumpFast[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 448);
	}
	struct FSetupSelectorLimits GetReboundFast[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 672);
	}
	int32_t GetSlowClickSetup() {
		return memory.read<int32_t>(m_addr + 896);
	}
	int32_t GetFastClickSetup() {
		return memory.read<int32_t>(m_addr + 900);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupAlignmentLimits
{
public:
	FSetupAlignmentLimits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSetupSelectorLimits GetCamber[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 0);
	}
	struct FSetupSelectorLimits GetToe[4]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 224);
	}
	struct FSetupSelectorLimits GetCaster[2]() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 448);
	}
	struct FSetupSelectorLimits GetSteerRatio() {
		return memory.read<struct FSetupSelectorLimits>(m_addr + 560);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetupCarPreviews
{
public:
	FSetupCarPreviews(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetTopView() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetSideView() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetThirdView() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateHUDOptions
{
public:
	FUpdateHUDOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHUDOptions GetHUDOptions() {
		return memory.read<struct FHUDOptions>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPlayerCarLocation
{
public:
	FOnPlayerCarLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarLocation GetCarLocation() {
		return memory.read<enum class ECarLocation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpecialEventUIData
{
public:
	FSpecialEventUIData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 0);
	}
	bool GetshowSeason() {
		return memory.read<bool>(m_addr + 24);
	}
	int32_t GetEventSeason() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GeteventId() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetOnlineEventRefId() {
		return memory.read<int32_t>(m_addr + 36);
	}
	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 48);
	}
	enum class ERaceEventType GetEventType() {
		return memory.read<enum class ERaceEventType>(m_addr + 49);
	}
	enum class EContentType GetContentId() {
		return memory.read<enum class EContentType>(m_addr + 50);
	}
	enum class EGuiGameModes GetGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 51);
	}
	struct FName GetCarName() {
		return memory.read<struct FName>(m_addr + 52);
	}
	struct FText GetmodelDisplayName() {
		return memory.read<struct FText>(m_addr + 64);
	}
	struct TSoftObjectPtr<UTexture2D> GetteamLogo() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 88);
	}
	struct FText GetcircuitDisplayName() {
		return memory.read<struct FText>(m_addr + 128);
	}
	struct FText GetgameModeDisplayName() {
		return memory.read<struct FText>(m_addr + 152);
	}
	struct FText GettrackStatusText() {
		return memory.read<struct FText>(m_addr + 176);
	}
	struct FText GettimeOfDayText() {
		return memory.read<struct FText>(m_addr + 200);
	}
	struct FText GetMeteoText() {
		return memory.read<struct FText>(m_addr + 224);
	}
	struct FText GetmeteoIconText() {
		return memory.read<struct FText>(m_addr + 248);
	}
	struct FText GetdurationText() {
		return memory.read<struct FText>(m_addr + 272);
	}
	bool GetisWet() {
		return memory.read<bool>(m_addr + 296);
	}
	bool GetisNight() {
		return memory.read<bool>(m_addr + 297);
	}
	bool GetisRaining() {
		return memory.read<bool>(m_addr + 298);
	}
	bool GetshowDuration() {
		return memory.read<bool>(m_addr + 299);
	}
	bool GetLockedSetup() {
		return memory.read<bool>(m_addr + 300);
	}
	int32_t GetTimeOfDay() {
		return memory.read<int32_t>(m_addr + 304);
	}
	int32_t GetDuration() {
		return memory.read<int32_t>(m_addr + 308);
	}
	enum class EWeatherPresetType GetweatherType() {
		return memory.read<enum class EWeatherPresetType>(m_addr + 312);
	}
	enum class ESpecialEventImageType GetImageType() {
		return memory.read<enum class ESpecialEventImageType>(m_addr + 313);
	}
	struct FCarInfo GetCarInfo() {
		return memory.read<struct FCarInfo>(m_addr + 320);
	}
	struct FTeamInfo GetTeamInfo() {
		return memory.read<struct FTeamInfo>(m_addr + 544);
	}
	struct FCircuitInfo GetCircuitInfo() {
		return memory.read<struct FCircuitInfo>(m_addr + 600);
	}
	struct FModelInfo GetModelInfo() {
		return memory.read<struct FModelInfo>(m_addr + 1096);
	}
	struct FMeteoInfos GetmeteoInfo() {
		return memory.read<struct FMeteoInfos>(m_addr + 1520);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubtitleRow
{
public:
	FSubtitleRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetsubtitleName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct TArray<struct FSubText> Getsubs() {
		return memory.read<struct TArray<struct FSubText>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestLeaderboardEntryLaps
{
public:
	FRequestLeaderboardEntryLaps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char Getsession_index() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t Getcar_id() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetModelInfoByType
{
public:
	FGetModelInfoByType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getcar_id() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct FModelInfo GetReturnValue() {
		return memory.read<struct FModelInfo>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubText
{
public:
	FSubText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetSubText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	int32_t GetintervalStartMS() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetintervalEndMS() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDirectionLeftBlinkOn
{
public:
	FIsDirectionLeftBlinkOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGraphicArray
{
public:
	FGraphicArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector2D> GetgraphValues() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeTableEntry
{
public:
	FTimeTableEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetPosition() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t GetCarIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetdriverIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSessionIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetActiveDriverIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetActiveDriverIndexInternal() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct TArray<struct FString> GetDriverNames() {
		return memory.read<struct TArray<struct FString>>(m_addr + 24);
	}
	struct FString GetCarModel() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetTeamName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetCarNumber() {
		return memory.read<struct FString>(m_addr + 72);
	}
	char GetCarCup() {
		return memory.read<char>(m_addr + 88);
	}
	struct FLinearColor GetCupColor() {
		return memory.read<struct FLinearColor>(m_addr + 92);
	}
	struct FString GetSectorOne() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetSectorTwo() {
		return memory.read<struct FString>(m_addr + 128);
	}
	struct FString GetSectorThree() {
		return memory.read<struct FString>(m_addr + 144);
	}
	struct FString GetLapTime() {
		return memory.read<struct FString>(m_addr + 160);
	}
	struct FString GetLapNumber() {
		return memory.read<struct FString>(m_addr + 176);
	}
	struct FString GetDeltaToFirst() {
		return memory.read<struct FString>(m_addr + 192);
	}
	struct FString GetDeltaToFastest() {
		return memory.read<struct FString>(m_addr + 208);
	}
	struct UTexture2D GetBrandLogo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UTexture2D(ptr_addr);
	}
	int32_t GetMandatoryPitStopsLeft() {
		return memory.read<int32_t>(m_addr + 232);
	}
	bool GetIsPitted() {
		return memory.read<bool>(m_addr + 236);
	}
	bool GetHasFinished() {
		return memory.read<bool>(m_addr + 237);
	}
	bool GetIsDimmed() {
		return memory.read<bool>(m_addr + 238);
	}
	bool GetIsBest() {
		return memory.read<bool>(m_addr + 239);
	}
	bool GetIsOverallBest() {
		return memory.read<bool>(m_addr + 240);
	}
	bool GetIsSectorOneBest() {
		return memory.read<bool>(m_addr + 241);
	}
	bool GetIsSectorTwoBest() {
		return memory.read<bool>(m_addr + 242);
	}
	bool GetIsSectorThreeBest() {
		return memory.read<bool>(m_addr + 243);
	}
	bool GetCollapseDelta() {
		return memory.read<bool>(m_addr + 244);
	}
	bool GetCollapseSectors() {
		return memory.read<bool>(m_addr + 245);
	}
	bool GetHideSectors() {
		return memory.read<bool>(m_addr + 246);
	}
	bool GetIsPlayer() {
		return memory.read<bool>(m_addr + 247);
	}
	bool GetIsInvalid() {
		return memory.read<bool>(m_addr + 248);
	}
	bool GetIsDNF() {
		return memory.read<bool>(m_addr + 249);
	}
	bool GetIsDSQ() {
		return memory.read<bool>(m_addr + 250);
	}
	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 252);
	}
	int32_t GetBallastKg() {
		return memory.read<int32_t>(m_addr + 256);
	}
	float GetRestrictor() {
		return memory.read<float>(m_addr + 260);
	}
	bool GetisGt4() {
		return memory.read<bool>(m_addr + 264);
	}
	enum class ECarGroup GetCarGroup() {
		return memory.read<enum class ECarGroup>(m_addr + 265);
	}
	enum class EPenaltyType GetPenalty() {
		return memory.read<enum class EPenaltyType>(m_addr + 266);
	}
	char GetPenaltyWeight() {
		return memory.read<char>(m_addr + 267);
	}

private:
	std::uint64_t m_addr = 0;
};class FPadNumberWithZeroesAlways
{
public:
	FPadNumberWithZeroesAlways(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInputNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetPaddingSize() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDriver
{
public:
	FSetDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getdriver_name() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimeTableItemCarCup
{
public:
	FTimeTableItemCarCup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	struct FLinearColor GetForegroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FWingData
{
public:
	FWingData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetwingName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FVector GetPosition() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetSpan() {
		return memory.read<float>(m_addr + 28);
	}
	float GetChord() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetIsFin() {
		return memory.read<bool>(m_addr + 36);
	}
	struct UCurveFloat GetlutAOA_CL() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutAOA_CD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutGH_CL() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutGH_CD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UCurveFloat(ptr_addr);
	}
	float GetclGain() {
		return memory.read<float>(m_addr + 72);
	}
	float GetcdGain() {
		return memory.read<float>(m_addr + 76);
	}
	float GetyawGain() {
		return memory.read<float>(m_addr + 80);
	}
	float GetdefaultAngle() {
		return memory.read<float>(m_addr + 84);
	}
	float GetdamageCL[5]() {
		return memory.read<float>(m_addr + 88);
	}
	float GetdamageCD[5]() {
		return memory.read<float>(m_addr + 108);
	}
	struct TArray<struct FDynamicWingControllerData> GetWingControllerData() {
		return memory.read<struct TArray<struct FDynamicWingControllerData>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_AddMessage
{
public:
	Facc_AddMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECommsCategory GetCategory() {
		return memory.read<enum class ECommsCategory>(m_addr + 0);
	}
	enum class ECommsPriority GetPriority() {
		return memory.read<enum class ECommsPriority>(m_addr + 1);
	}
	struct FString GetMessage() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool Getis_local_player() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FDynamicWingControllerData
{
public:
	FDynamicWingControllerData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECombinatorModeW GetCombinatorMode() {
		return memory.read<enum class ECombinatorModeW>(m_addr + 0);
	}
	enum class EInputVarW GetInputVar() {
		return memory.read<enum class EInputVarW>(m_addr + 1);
	}
	struct UCurveFloat GetLut() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCurveFloat(ptr_addr);
	}
	float GetFilter() {
		return memory.read<float>(m_addr + 16);
	}
	float GetUpLimit() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDownLimit() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentSessionRemainingTime
{
public:
	FgetCurrentSessionRemainingTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCarModelChanged
{
public:
	FOnCarModelChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACarAvatar Getin_carAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ACarAvatar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FforceLeftDoor
{
public:
	FforceLeftDoor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_open() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMeteoIcon
{
public:
	FGetMeteoIcon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWeatherPresetType GetMeteoType() {
		return memory.read<enum class EWeatherPresetType>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FforceRightDoor
{
public:
	FforceRightDoor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_open() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetForcedOnFlatPlane
{
public:
	FSetForcedOnFlatPlane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getmode() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWiperPosition
{
public:
	FGetWiperPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetWiperIndex() {
		return memory.read<char>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWipersCount
{
public:
	FGetWipersCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAILevels
{
public:
	FSetAILevels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getaggro() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWipersMaxLevel
{
public:
	FGetWipersMaxLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGForce
{
public:
	FGetGForce(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlackMask
{
public:
	FGetBlackMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCarAvatar
{
public:
	FSetCarAvatar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACarAvatar GetCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ACarAvatar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FListCars
{
public:
	FListCars(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetReturnValue() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDirectInputPressEvent
{
public:
	FOnDirectInputPressEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType GetActionType() {
		return memory.read<enum class EControllerActionType>(m_addr + 0);
	}
	bool Getis_repeat() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetAllColors
{
public:
	FgetAllColors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSkinColor> GetReturnValue() {
		return memory.read<struct TArray<struct FSkinColor>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSelectorType
{
public:
	FSetSelectorType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiGenericSelectorType GetNewType() {
		return memory.read<enum class EGuiGenericSelectorType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAuxLightMesh
{
public:
	FGetAuxLightMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FAuxLightMesh GetDestination() {
		return memory.read<struct FAuxLightMesh>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarAndModelInfoByName
{
public:
	FGetCarAndModelInfoByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getcar_name() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FModelInfo Getmodel_info() {
		return memory.read<struct FModelInfo>(m_addr + 8);
	}
	struct FCarInfo Getcar_info() {
		return memory.read<struct FCarInfo>(m_addr + 432);
	}
	struct FTeamInfo Getteam_info() {
		return memory.read<struct FTeamInfo>(m_addr + 656);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 712);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCarType
{
public:
	FgetCarType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarType GetReturnValue() {
		return memory.read<enum class ECarType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBannerTemplate
{
public:
	FGetBannerTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FBannerTemplate GetDestination() {
		return memory.read<struct FBannerTemplate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearButton
{
public:
	FClearButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandConfiguration GetCommandConfiguration() {
		return memory.read<struct FCommandConfiguration>(m_addr + 0);
	}
	struct FCommandButton Getsource_button() {
		return memory.read<struct FCommandButton>(m_addr + 216);
	}
	bool Getis_race_command() {
		return memory.read<bool>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetColorTable
{
public:
	FGetColorTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FSkinColor GetDestination() {
		return memory.read<struct FSkinColor>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 360);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPitExitLaneEnd
{
public:
	FOnPitExitLaneEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOverlappedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCustomHelmetTemplates
{
public:
	FgetCustomHelmetTemplates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getallow_official() {
		return memory.read<bool>(m_addr + 0);
	}
	struct TArray<struct FDriverHelmetTemplate> GetReturnValue() {
		return memory.read<struct TArray<struct FDriverHelmetTemplate>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetGloveTemplates
{
public:
	FgetGloveTemplates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FDriverGlovesTemplate> GetReturnValue() {
		return memory.read<struct TArray<struct FDriverGlovesTemplate>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteUserPreset
{
public:
	FDeleteUserPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHelmetTable
{
public:
	FGetHelmetTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FDriverHelmetTemplate GetDestination() {
		return memory.read<struct FDriverHelmetTemplate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplySkin
{
public:
	FApplySkin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSkin() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDirectionLeftOn
{
public:
	FIsDirectionLeftOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetModelAuxLightKeys
{
public:
	FgetModelAuxLightKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct TArray<char> GetReturnValue() {
		return memory.read<struct TArray<char>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSeasonTypeSortWeight
{
public:
	FgetSeasonTypeSortWeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentTimeMultiplier
{
public:
	FgetCurrentTimeMultiplier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGameViewportSize
{
public:
	FGetGameViewportSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetModelAuxLightKeysAsInt
{
public:
	FgetModelAuxLightKeysAsInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct TArray<int32_t> GetReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetModelBannerKeysAsInt
{
public:
	FgetModelBannerKeysAsInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct TArray<int32_t> GetReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumberPanelMesh
{
public:
	FGetNumberPanelMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FNumberPanelMesh GetDestination() {
		return memory.read<struct FNumberPanelMesh>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetRimMaterialTypes
{
public:
	FgetRimMaterialTypes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRimMaterialType> GetReturnValue() {
		return memory.read<struct TArray<struct FRimMaterialType>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFilterCurrentDataByCup
{
public:
	FFilterCurrentDataByCup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECupCategory Getcup() {
		return memory.read<enum class ECupCategory>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetRimMaterialTypesWithNames
{
public:
	FgetRimMaterialTypesWithNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FRimMaterialType> GetReturnValue() {
		return memory.read<struct TMap<struct FName, struct FRimMaterialType>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSkinColors
{
public:
	FgetSkinColors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSkinColor> GetReturnValue() {
		return memory.read<struct TArray<struct FSkinColor>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSkinMaterialTypesWithNames
{
public:
	FgetSkinMaterialTypesWithNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FSkinMaterialType> GetReturnValue() {
		return memory.read<struct TMap<struct FName, struct FSkinMaterialType>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRatingCornerSectionCompleted
{
public:
	FOnRatingCornerSectionCompleted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getsection_index() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FstarterButton
{
public:
	FstarterButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsPressed() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAcVisibilityChanged
{
public:
	FOnAcVisibilityChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_visible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSkinTemplate
{
public:
	FGetSkinTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FSkinTemplate GetDestination() {
		return memory.read<struct FSkinTemplate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSponsorTexture
{
public:
	FGetSponsorTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FSponsorTexture GetDestination() {
		return memory.read<struct FSponsorTexture>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSuitTable
{
public:
	FGetSuitTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FDriverSuitTemplate GetDestination() {
		return memory.read<struct FDriverSuitTemplate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetModelTypeByName
{
public:
	FGetModelTypeByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getcar_name() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 8);
	}
	enum class ECarModelType GetReturnValue() {
		return memory.read<enum class ECarModelType>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetFocusedCarDriverStintTotalTimeLeftMs
{
public:
	FgetFocusedCarDriverStintTotalTimeLeftMs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSuspPos
{
public:
	FGetSuspPos(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FisLogiTrueForceWheel
{
public:
	FisLogiTrueForceWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBrake
{
public:
	FGetBrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateAnimation
{
public:
	FUpdateAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInt32ToLaptime
{
public:
	FInt32ToLaptime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLapTime() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ELaptimeFormat GetFormat() {
		return memory.read<enum class ELaptimeFormat>(m_addr + 4);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSinglePlayer
{
public:
	FGetSinglePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAcSaveGameHeader> Getheaders() {
		return memory.read<struct TArray<struct FAcSaveGameHeader>>(m_addr + 0);
	}
	struct TArray<struct FAcSaveGameHeader> GetReturnValue() {
		return memory.read<struct TArray<struct FAcSaveGameHeader>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRaceEvent
{
public:
	FGetRaceEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiGameModes GetGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 0);
	}
	bool GetoverrideTrack() {
		return memory.read<bool>(m_addr + 1);
	}
	struct FGuiRaceEventData GetReturnValue() {
		return memory.read<struct FGuiRaceEventData>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FisSetupChangeAllowed
{
public:
	FisSetupChangeAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSwitchToStage
{
public:
	FSwitchToStage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarLightStage GetNewStage() {
		return memory.read<enum class ECarLightStage>(m_addr + 0);
	}
	bool GetRaiseEvent() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetAvoidEndurance() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPitBridge1End
{
public:
	FOnPitBridge1End(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOverlappedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPitBridge1Start
{
public:
	FOnPitBridge1Start(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOverlappedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPitEntryLaneSide
{
public:
	FOnPitEntryLaneSide(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOverlappedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPitLaneExit
{
public:
	FOnPitLaneExit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetOverlappedActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeTextBlockColorByCanvas
{
public:
	FChangeTextBlockColorByCanvas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCanvasPanel GetCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCanvasPanel(ptr_addr);
	}
	enum class EGuiColors GetColor() {
		return memory.read<enum class EGuiColors>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleDisplayPage
{
public:
	FcycleDisplayPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetDisplayIndex() {
		return memory.read<char>(m_addr + 0);
	}
	bool GetisUp() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetanimEnable() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FisReplayGalleryGame
{
public:
	FisReplayGalleryGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddRatingValue
{
public:
	FAddRatingValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetisColumnNavigable() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FCycleWiperLevel
{
public:
	FCycleWiperLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisUp() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FenableDriverDoor
{
public:
	FenableDriverDoor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisOpening() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBrandInfo
{
public:
	FGetBrandInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBrandType GetBrand() {
		return memory.read<enum class EBrandType>(m_addr + 0);
	}
	struct FBrandInfo GetDestination() {
		return memory.read<struct FBrandInfo>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FsaveChampState
{
public:
	FsaveChampState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetDisplayPage
{
public:
	FgetDisplayPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetDisplayIndex() {
		return memory.read<char>(m_addr + 0);
	}
	enum class ECarDigitalDisplayPages GetReturnValue() {
		return memory.read<enum class ECarDigitalDisplayPages>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetWeatherDataForUI
{
public:
	FgetWeatherDataForUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FWeatherData GetReturnValue() {
		return memory.read<struct FWeatherData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDirectionLightLeftOn
{
public:
	FIsDirectionLightLeftOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDirectionLightRightOn
{
public:
	FIsDirectionLightRightOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsFlashingLightOn
{
public:
	FIsFlashingLightOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisStarterOff
{
public:
	FisStarterOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisStarterOn
{
public:
	FisStarterOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDirectInputReleaseEvent
{
public:
	FOnDirectInputReleaseEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType GetActionType() {
		return memory.read<enum class EControllerActionType>(m_addr + 0);
	}
	float GetTimePressed() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetStarterStatus
{
public:
	FsetStarterStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisStarterPressed() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetisStarted() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetLastLapTime
{
public:
	FgetLastLapTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetHubBolt
{
public:
	FgetHubBolt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GethubPosition() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_Shot
{
public:
	Facc_Shot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetSizeX() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetSizeY() {
		return memory.read<uint32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetPredictedLapTime
{
public:
	FgetPredictedLapTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_SetMouseVisibility
{
public:
	FBP_SetMouseVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSpeedDiff
{
public:
	FgetSpeedDiff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMirrorDistance
{
public:
	FGetMirrorDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_DOF1
{
public:
	Facc_DOF1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFOV() {
		return memory.read<float>(m_addr + 0);
	}
	float Getfstop() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 8);
	}
	float Getregion() {
		return memory.read<float>(m_addr + 12);
	}
	float GetnearBlur() {
		return memory.read<float>(m_addr + 16);
	}
	float GetfarBlur() {
		return memory.read<float>(m_addr + 20);
	}
	float GetnearTrans() {
		return memory.read<float>(m_addr + 24);
	}
	float GetfarTrans() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FActivateFlames
{
public:
	FActivateFlames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBackFireType GetValue() {
		return memory.read<enum class EBackFireType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentRaceEvent
{
public:
	FGetCurrentRaceEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetoverrideTrack() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FGuiRaceEventData GetReturnValue() {
		return memory.read<struct FGuiRaceEventData>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDebugSound
{
public:
	FDebugSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBackFireType GetValue() {
		return memory.read<enum class EBackFireType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDriverNameAdaptive
{
public:
	FGetDriverNameAdaptive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFirstName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetSecondName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetLastName() {
		return memory.read<struct FString>(m_addr + 32);
	}
	int32_t GetmaxCharacters() {
		return memory.read<int32_t>(m_addr + 48);
	}
	bool Getchop() {
		return memory.read<bool>(m_addr + 52);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FSliderValueChanged
{
public:
	FSliderValueChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInt32ToLaptimeDeltaText
{
public:
	FInt32ToLaptimeDeltaText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDelta() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ELaptimeDeltaFormat GetFormat() {
		return memory.read<enum class ELaptimeDeltaFormat>(m_addr + 4);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMirrorFramerateCap
{
public:
	FGetMirrorFramerateCap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputAxisFromKeyEvent
{
public:
	FGetInputAxisFromKeyEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKeyEvent GetKeyEvent() {
		return memory.read<struct FKeyEvent>(m_addr + 0);
	}
	struct FInputAxis GetReturnValue() {
		return memory.read<struct FInputAxis>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FInt32ToLaptimeText
{
public:
	FInt32ToLaptimeText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLapTime() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ELaptimeFormat GetFormat() {
		return memory.read<enum class ELaptimeFormat>(m_addr + 4);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioManager
{
public:
	FGetAudioManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAudioManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAudioManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentCircuitInfo
{
public:
	FgetCurrentCircuitInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCircuitInfo GetReturnValue() {
		return memory.read<struct FCircuitInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetTimeOfDayAsSecondsUI
{
public:
	FgetTimeOfDayAsSecondsUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWheelTransform
{
public:
	FGetWheelTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentGameVersion
{
public:
	FGetCurrentGameVersion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGamePlatformPlayerID
{
public:
	FGetGamePlatformPlayerID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGamePlatformServices
{
public:
	FGetGamePlatformServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGamePlatformServices GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGamePlatformServices(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSeasonUnavailable
{
public:
	FOnSeasonUnavailable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EContentType Getcontent_type() {
		return memory.read<enum class EContentType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetLastVRMousePosition
{
public:
	FgetLastVRMousePosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMirrorDistance
{
public:
	FSetMirrorDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSeasonContentType
{
public:
	FgetSeasonContentType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EContentType GetReturnValue() {
		return memory.read<enum class EContentType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetServerName
{
public:
	FGetServerName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetCurrentCarSkin
{
public:
	FsetCurrentCarSkin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCarName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ERaceEventType Getforced_event_type() {
		return memory.read<enum class ERaceEventType>(m_addr + 8);
	}
	bool Getallow_override() {
		return memory.read<bool>(m_addr + 9);
	}
	bool Getfollow_gameinstance_season() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 11);
	}

private:
	std::uint64_t m_addr = 0;
};class FFilterCurrentDataByCarGroup
{
public:
	FFilterCurrentDataByCarGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup GetCarGroup() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetWeatherStatusForUI
{
public:
	FgetWeatherStatusForUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FWeatherStatus GetReturnValue() {
		return memory.read<struct FWeatherStatus>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisCareer
{
public:
	FisCareer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsHMDEnabled
{
public:
	FIsHMDEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddActionBinding
{
public:
	FAddActionBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputAction GetNewBinding() {
		return memory.read<struct FInputAction>(m_addr + 0);
	}
	struct FInputAction GetCurrentBinding() {
		return memory.read<struct FInputAction>(m_addr + 64);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSpeedUnitMph
{
public:
	FIsSpeedUnitMph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsUserDeveloper
{
public:
	FIsUserDeveloper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsUserDevOrTester
{
public:
	FIsUserDevOrTester(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsUserTester
{
public:
	FIsUserTester(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveCommandConfiguration
{
public:
	FSaveCommandConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandConfiguration GetConfiguration() {
		return memory.read<struct FCommandConfiguration>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsaveCustomDriver
{
public:
	FsaveCustomDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FDriverInfo Getdriver_info() {
		return memory.read<struct FDriverInfo>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetRelativeWindDir
{
public:
	FgetRelativeWindDir(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsendChatMessage
{
public:
	FsendChatMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Getchat_text() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetIsCareer
{
public:
	FsetIsCareer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetIsChamp
{
public:
	FsetIsChamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLoadingScreen
{
public:
	FSetLoadingScreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiLoadingScreens GetLoadingType() {
		return memory.read<enum class EGuiLoadingScreens>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetReplayToLoad
{
public:
	FsetReplayToLoad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTargetUI
{
public:
	FSetTargetUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetTrackStatusFromUI
{
public:
	FsetTrackStatusFromUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTrackStatus Gettrack_status() {
		return memory.read<struct FTrackStatus>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayEvent
{
public:
	FPlayEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAudioGUIEvent GetEvent() {
		return memory.read<enum class EAudioGUIEvent>(m_addr + 0);
	}
	float GetmusicFadingTime() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_useFullFreqFF
{
public:
	Facc_useFullFreqFF(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetWeatherStatusFromUI
{
public:
	FsetWeatherStatusFromUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FWeatherStatus Getweather_status() {
		return memory.read<struct FWeatherStatus>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUseGamepadAndSave
{
public:
	FUseGamepadAndSave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllCarInfoBySeasonAndModeltype
{
public:
	FGetAllCarInfoBySeasonAndModeltype(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	enum class ECarModelType GetmodelType() {
		return memory.read<enum class ECarModelType>(m_addr + 1);
	}
	struct TArray<struct FCarInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FCarInfo>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllCircuitInfos
{
public:
	FGetAllCircuitInfos(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	bool Getis_developer() {
		return memory.read<bool>(m_addr + 1);
	}
	struct TArray<struct FCircuitInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FCircuitInfo>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCameraFOVH
{
public:
	FGetCurrentCameraFOVH(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllModelInfos
{
public:
	FGetAllModelInfos(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_developer() {
		return memory.read<bool>(m_addr + 0);
	}
	bool Getalpha_sort() {
		return memory.read<bool>(m_addr + 1);
	}
	struct TArray<struct FModelInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FModelInfo>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarGroup
{
public:
	FGetCarGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getmodel_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	enum class ECarGroup GetReturnValue() {
		return memory.read<enum class ECarGroup>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FMPCarGroupToCarGroups
{
public:
	FMPCarGroupToCarGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 0);
	}
	struct TSet<enum class ECarGroup> GetReturnValue() {
		return memory.read<struct TSet<enum class ECarGroup>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPadNumberWithZeroes
{
public:
	FPadNumberWithZeroes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInputNumber() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetPaddingSize() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarGroupName
{
public:
	FGetCarGroupName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup Getcar_group() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateCalendarLine
{
public:
	FCreateCalendarLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}
	bool GetisCurrentEventLine() {
		return memory.read<bool>(m_addr + 24);
	}
	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 25);
	}
	struct FText Getevent_type() {
		return memory.read<struct FText>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveCustomEntries
{
public:
	FRemoveCustomEntries(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool Getrebuild() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCarGroupSortWeight
{
public:
	FgetCarGroupSortWeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup GetGroup() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarInfoAndNameBySeasonAndModelType
{
public:
	FGetCarInfoAndNameBySeasonAndModelType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	enum class ECarModelType GetmodelType() {
		return memory.read<enum class ECarModelType>(m_addr + 1);
	}
	enum class ERaceEventType GetraceType() {
		return memory.read<enum class ERaceEventType>(m_addr + 2);
	}
	struct FCarInfo GetDestination() {
		return memory.read<struct FCarInfo>(m_addr + 8);
	}
	struct FName GetDestinationName() {
		return memory.read<struct FName>(m_addr + 232);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarInfoAndNameBySeasonTeamAndModelType
{
public:
	FGetCarInfoAndNameBySeasonTeamAndModelType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	enum class ECarModelType GetmodelType() {
		return memory.read<enum class ECarModelType>(m_addr + 1);
	}
	int32_t GetTeamGuid() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class ERaceEventType GetraceType() {
		return memory.read<enum class ERaceEventType>(m_addr + 8);
	}
	struct FCarInfo GetDestination() {
		return memory.read<struct FCarInfo>(m_addr + 16);
	}
	struct FName GetDestinationName() {
		return memory.read<struct FName>(m_addr + 240);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarInfoByName
{
public:
	FGetCarInfoByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FCarInfo GetDestination() {
		return memory.read<struct FCarInfo>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarInfoBySeason
{
public:
	FGetCarInfoBySeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 8);
	}
	struct FCarInfo GetDestination() {
		return memory.read<struct FCarInfo>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarInfoBySeasonAndRaceNumber
{
public:
	FGetCarInfoBySeasonAndRaceNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	int32_t GetRaceNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class ERaceEventType GetraceType() {
		return memory.read<enum class ERaceEventType>(m_addr + 8);
	}
	struct FCarInfo GetDestination() {
		return memory.read<struct FCarInfo>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCircuitInfo
{
public:
	FGetCircuitInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FCircuitInfo GetDestination() {
		return memory.read<struct FCircuitInfo>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 504);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinRange
{
public:
	FSetMinRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCommonTexts
{
public:
	FGetCommonTexts(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FCommonTexts GetDestination() {
		return memory.read<struct FCommonTexts>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCarGroups
{
public:
	FSetCarGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class ECarGroup, float> Getcar_groups() {
		return memory.read<struct TMap<enum class ECarGroup, float>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInfoListBySeason
{
public:
	FGetInfoListBySeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EInfoType GetInfoType() {
		return memory.read<enum class EInfoType>(m_addr + 0);
	}
	struct TArray<struct FName> GetList() {
		return memory.read<struct TArray<struct FName>>(m_addr + 8);
	}
	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMeteoInfo
{
public:
	FGetMeteoInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWeatherPresetType GetMeteoType() {
		return memory.read<enum class EWeatherPresetType>(m_addr + 0);
	}
	struct FMeteoInfos GetDestination() {
		return memory.read<struct FMeteoInfos>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleABS
{
public:
	FcycleABS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveActionBinding
{
public:
	FRemoveActionBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputAction GetBindingToRemove() {
		return memory.read<struct FInputAction>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetModelInfo
{
public:
	FGetModelInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct FModelInfo GetDestination() {
		return memory.read<struct FModelInfo>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 432);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetModelsInCompetitionList
{
public:
	FGetModelsInCompetitionList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCompetitionList GetList() {
		return memory.read<struct FCompetitionList>(m_addr + 0);
	}
	bool Getis_developer() {
		return memory.read<bool>(m_addr + 32);
	}
	bool Getalpha_sort() {
		return memory.read<bool>(m_addr + 33);
	}
	struct TArray<struct FModelInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FModelInfo>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCustomCar
{
public:
	FAddCustomCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModelInfo GetModel() {
		return memory.read<struct FModelInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_printChampionshipPointsByDriver
{
public:
	Facc_printChampionshipPointsByDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getchamp_type() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getcup_category() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class ECarGroup Getcar_category() {
		return memory.read<enum class ECarGroup>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_addCutPenalty
{
public:
	Facc_addCutPenalty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	float Getestimated_gain_seconds() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveWidgetIndex
{
public:
	FGetActiveWidgetIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasReverse
{
public:
	FHasReverse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNationalityInfo
{
public:
	FGetNationalityInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENationality GetNationality() {
		return memory.read<enum class ENationality>(m_addr + 0);
	}
	struct FNationality GetDestination() {
		return memory.read<struct FNationality>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTimeMultiplier
{
public:
	FSetTimeMultiplier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMultiplier() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSeasonByEntry
{
public:
	FgetSeasonByEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCarName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ESeasonType GetReturnValue() {
		return memory.read<enum class ESeasonType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FcyclePitstopDriverSwap
{
public:
	FcyclePitstopDriverSwap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisNext() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEloRatingForDriver
{
public:
	FGetEloRatingForDriver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getcar_id() {
		return memory.read<int32_t>(m_addr + 0);
	}
	char Getdriver_index() {
		return memory.read<char>(m_addr + 4);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackBopType
{
public:
	FGetTrackBopType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Gettrack_name() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 8);
	}
	enum class ECarModelType Getcar_model() {
		return memory.read<enum class ECarModelType>(m_addr + 9);
	}
	enum class ETrackBopType GetReturnValue() {
		return memory.read<enum class ETrackBopType>(m_addr + 10);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsCarGroupEligibleForSeason
{
public:
	FIsCarGroupEligibleForSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup Getcar_group() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}
	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 1);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsCarModelEligibleForSeason
{
public:
	FIsCarModelEligibleForSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getcar_model() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 1);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetProjectVersion
{
public:
	FGetProjectVersion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisChlCar
{
public:
	FisChlCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getcar_model_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsModelMPCarGroup
{
public:
	FIsModelMPCarGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModelInfo GetModel() {
		return memory.read<struct FModelInfo>(m_addr + 0);
	}
	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 424);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 425);
	}

private:
	std::uint64_t m_addr = 0;
};class FisSTCar
{
public:
	FisSTCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getcar_model_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FisTcxCar
{
public:
	FisTcxCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getcar_model_type() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetEnum
{
public:
	FgetEnum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class GraphicsOptions GetReturnValue() {
		return memory.read<enum class GraphicsOptions>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGamepadPreset
{
public:
	FGetGamepadPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPresetManager GetPresetManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPresetManager(ptr_addr);
	}
	struct FCommandDevice GetReturnValue() {
		return memory.read<struct FCommandDevice>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_carForceFuel
{
public:
	Facc_carForceFuel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	float Getnew_fuel_amount() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCommandConfiguration
{
public:
	FSetCommandConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandConfiguration GetCommandConfiguration() {
		return memory.read<struct FCommandConfiguration>(m_addr + 0);
	}
	bool Getread_commandconfig() {
		return memory.read<bool>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableAnimation
{
public:
	FEnableAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EMarshalFlagType GetflagColor() {
		return memory.read<enum class EMarshalFlagType>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLookLeftRight
{
public:
	FSetLookLeftRight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveWidget
{
public:
	FGetActiveWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcRaceWidgetBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcRaceWidgetBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActionText
{
public:
	FGetActionText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FGuiActionCategory GetDestination() {
		return memory.read<struct FGuiActionCategory>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetColor
{
public:
	FGetColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiColors GetcolorToGet() {
		return memory.read<enum class EGuiColors>(m_addr + 0);
	}
	struct FSlateColor GetReturnValue() {
		return memory.read<struct FSlateColor>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMinRange
{
public:
	FGetMinRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyDriverTemplate
{
public:
	FApplyDriverTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct ADriverAvatar GetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct ADriverAvatar(ptr_addr);
	}
	struct FDriverInfo GetDriverInfo() {
		return memory.read<struct FDriverInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGameModeChanged
{
public:
	FOnGameModeChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiGameModes GetnewGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FchangeCameraFov
{
public:
	FchangeCameraFov(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraComponent Getcam_comp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCameraComponent(ptr_addr);
	}
	float Getaspect() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FfindPlaybleCarForEventType
{
public:
	FfindPlaybleCarForEventType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getbase_car_selection() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName Getbase_driver_selection() {
		return memory.read<struct FName>(m_addr + 8);
	}
	bool Getmatch_driver() {
		return memory.read<bool>(m_addr + 16);
	}
	bool Getskipimmediate() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 18);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCircuitInfoById
{
public:
	FGetCircuitInfoById(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Gettrack_id() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 4);
	}
	struct FCircuitInfo GetReturnValue() {
		return memory.read<struct FCircuitInfo>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentReplayCurrentTimeInSeconds
{
public:
	FGetCurrentReplayCurrentTimeInSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxOpponents
{
public:
	FGetMaxOpponents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConvertInt32ToFormattedTimeText
{
public:
	FConvertInt32ToFormattedTimeText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInputTime() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetHideMillisecs() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMultiplayerCarInfo
{
public:
	FGetMultiplayerCarInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 0);
	}
	struct FCarInfo GetReturnValue() {
		return memory.read<struct FCarInfo>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRaceEventGenerator
{
public:
	FGetRaceEventGenerator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcRaceEventGenerator GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcRaceEventGenerator(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FisCareerInProgress
{
public:
	FisCareerInProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetViewLibrary
{
public:
	FgetViewLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UViewOptionsLibrary GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UViewOptionsLibrary(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsModelAvailable
{
public:
	FIsModelAvailable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadSaveGame
{
public:
	FLoadSaveGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAcSaveGameHeader Getsave_game() {
		return memory.read<struct FAcSaveGameHeader>(m_addr + 0);
	}
	struct UAcPageBase Getcalling_page() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct UAcPageBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenLevel
{
public:
	FOpenLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMapName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShowPosition
{
public:
	FSetShowPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getvisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEntryListSeason
{
public:
	FOnEntryListSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWeatherData
{
public:
	FGetWeatherData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWeatherPresetType GetPresetName() {
		return memory.read<enum class EWeatherPresetType>(m_addr + 0);
	}
	struct FWeatherData GetDestination() {
		return memory.read<struct FWeatherData>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCareerMedalText
{
public:
	FgetCareerMedalText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMedalType Getmedal() {
		return memory.read<enum class EMedalType>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FrecalculateFov
{
public:
	FrecalculateFov(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getcurrent_fov() {
		return memory.read<float>(m_addr + 0);
	}
	float Getaspect() {
		return memory.read<float>(m_addr + 4);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCareerEventPreset
{
public:
	FGetCareerEventPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FCareerEventPreset GetDestination() {
		return memory.read<struct FCareerEventPreset>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCameraViewByTag
{
public:
	FSetCameraViewByTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Gettag_name() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct ACameraActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ACameraActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCarPosition
{
public:
	FSetCarPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetisShowroom() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetuseEnduranceKit() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllBindedInputAxis
{
public:
	FGetAllBindedInputAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInputAxis> GetInputAxis() {
		return memory.read<struct TArray<struct FInputAxis>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMultiplayerCar
{
public:
	FSetMultiplayerCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getcar_name() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSetup
{
public:
	FGetSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FCarSetup GetDestination() {
		return memory.read<struct FCarSetup>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 424);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackFlagLightStatusUI
{
public:
	FGetTrackFlagLightStatusUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETrackFlagLights GetReturnValue() {
		return memory.read<enum class ETrackFlagLights>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FupdateInfoBySeason
{
public:
	FupdateInfoBySeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	bool Getclear_entries() {
		return memory.read<bool>(m_addr + 1);
	}
	bool Getupdate_custom_cars() {
		return memory.read<bool>(m_addr + 2);
	}
	bool Getconstrain_custom_cars_to_season() {
		return memory.read<bool>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_OnMenuNavigation
{
public:
	FBP_OnMenuNavigation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType GetInput() {
		return memory.read<enum class EControllerActionType>(m_addr + 0);
	}
	bool GetisReleased() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_OnMenuNavigationPreview
{
public:
	FBP_OnMenuNavigationPreview(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType GetInput() {
		return memory.read<enum class EControllerActionType>(m_addr + 0);
	}
	bool GetisReleased() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCustomCarSaved
{
public:
	FOnCustomCarSaved(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetResult() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetFirstFocusableUserWidget
{
public:
	FgetFirstFocusableUserWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFocusOnCurrentPanel
{
public:
	FSetFocusOnCurrentPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_MouseFocus
{
public:
	FBP_MouseFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getmouse_enter() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeTextBlockColorBySlot
{
public:
	FChangeTextBlockColorBySlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNamedSlot GetSlotName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNamedSlot(ptr_addr);
	}
	enum class EGuiColors GetColor() {
		return memory.read<enum class EGuiColors>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentSessionCountdown
{
public:
	FgetCurrentSessionCountdown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScreenResolution
{
public:
	FSetScreenResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool Getfullscreen() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeTextBlockVisiblityBySlot
{
public:
	FChangeTextBlockVisiblityBySlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNamedSlot GetSlotName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNamedSlot(ptr_addr);
	}
	enum class ESlateVisibility GetValue() {
		return memory.read<enum class ESlateVisibility>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHandleKeyReleased
{
public:
	FHandleKeyReleased(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType GetInput() {
		return memory.read<enum class EControllerActionType>(m_addr + 0);
	}
	bool GetisReleased() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FConvertInt32ToFormattedTimeAMPM
{
public:
	FConvertInt32ToFormattedTimeAMPM(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInputTime() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetAmPmFormat() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReIndexPanels
{
public:
	FReIndexPanels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetGroupName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool Gethorizontal() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetfocusFirst() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetActive
{
public:
	FSetActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisPanelActive() {
		return memory.read<bool>(m_addr + 0);
	}
	bool Getset_is_enabled() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FisSessionOver
{
public:
	FisSessionOver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWidgetFocus
{
public:
	FSetWidgetFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GethasFocus() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAllowMouse
{
public:
	FAllowMouse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSmokeDirtCurves
{
public:
	FGetSmokeDirtCurves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FSmokeDirtCurves GetDestination() {
		return memory.read<struct FSmokeDirtCurves>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatePanel
{
public:
	FOnUpdatePanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarInfo GetCarInfo() {
		return memory.read<struct FCarInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnVariantUpdate
{
public:
	FOnVariantUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getvariant_key() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSmokeDirtParticles
{
public:
	FGetSmokeDirtParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FSmokeDirtParticles GetDestination() {
		return memory.read<struct FSmokeDirtParticles>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetPassedTime
{
public:
	FgetPassedTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAnimSequenceBase Getpassed_anim_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase Getpassed_anim_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase Getpassed_anim_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase Getpassed_anim_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase Getpassed_anim_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FContentCheck
{
public:
	FContentCheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EContentType GetID() {
		return memory.read<enum class EContentType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDashInHudWidthLimit
{
public:
	FSetDashInHudWidthLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetLimit() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetPitlane
{
public:
	FgetPitlane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAcTrackSpline GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAcTrackSpline(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentTyreIndex
{
public:
	FgetCurrentTyreIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCameraFOV
{
public:
	FGetCurrentCameraFOV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCameraOffset
{
public:
	FGetCurrentCameraOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldForcePitstopMFDVisible
{
public:
	FShouldForcePitstopMFDVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentCameraType
{
public:
	FGetCurrentCameraType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCameraType GetReturnValue() {
		return memory.read<struct FCameraType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDashInHud
{
public:
	FGetDashInHud(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getcheck_playercar() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDashInHudOpacity
{
public:
	FGetDashInHudOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTexture
{
public:
	FSetTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetInTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDashInHudWidthLimit
{
public:
	FGetDashInHudWidthLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimerSliderValue
{
public:
	FGetTimerSliderValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFreeCamera
{
public:
	FGetFreeCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCameraComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UCameraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTVCameraSetIndex
{
public:
	FGetTVCameraSetIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasTVCameras
{
public:
	FHasTVCameras(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentCockpitVisMode
{
public:
	FSetCurrentCockpitVisMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECockpitVisMode Getvis_mode() {
		return memory.read<enum class ECockpitVisMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEntry
{
public:
	FSetEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getcar_key() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDashInHud
{
public:
	FSetDashInHud(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getin_hud() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDashInHudOpacity
{
public:
	FSetDashInHudOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getin_opacity() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNewTargetUIState
{
public:
	FSetNewTargetUIState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERatingWidgetUIState GettargetUIState() {
		return memory.read<enum class ERatingWidgetUIState>(m_addr + 0);
	}
	int32_t GetrecursionCounter() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChampionshipEventPresetById
{
public:
	FGetChampionshipEventPresetById(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	int32_t Getevent_id() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool Getis_custom() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FChampEventPreset GetDestination() {
		return memory.read<struct FChampEventPreset>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 488);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDataTable
{
public:
	FGetDataTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPresetType GetDataTable() {
		return memory.read<enum class EPresetType>(m_addr + 0);
	}
	struct UDataTable GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPresetList
{
public:
	FGetPresetList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPresetType GetPresetType() {
		return memory.read<enum class EPresetType>(m_addr + 0);
	}
	struct TArray<struct FName> GetList() {
		return memory.read<struct TArray<struct FName>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLabelOpacity
{
public:
	FSetLabelOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetOpacity() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFirstValue
{
public:
	FGetFirstValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnStartWidget
{
public:
	FOnStartWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AAcRaceGameMode(ptr_addr);
	}
	struct ACarAvatar GetCarAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ACarAvatar(ptr_addr);
	}
	struct FHUDOptions GetHUDOptions() {
		return memory.read<struct FHUDOptions>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackStatus
{
public:
	FGetTrackStatus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETrackStatusPresetType GetPresetName() {
		return memory.read<enum class ETrackStatusPresetType>(m_addr + 0);
	}
	struct FTrackStatus GetDestination() {
		return memory.read<struct FTrackStatus>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWeatherSettings
{
public:
	FGetWeatherSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWeatherPresetType GetPresetName() {
		return memory.read<enum class EWeatherPresetType>(m_addr + 0);
	}
	struct FWeatherStatus GetDestination() {
		return memory.read<struct FWeatherStatus>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_GetPlayerCarAvatar
{
public:
	FBP_GetPlayerCarAvatar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACarAvatar GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ACarAvatar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCarDamage
{
public:
	FgetCarDamage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarDamage GetReturnValue() {
		return memory.read<struct FCarDamage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInstantJoinInfoVisible
{
public:
	FSetInstantJoinInfoVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetdesiredVisibility() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBPPhysicsPause
{
public:
	FBPPhysicsPause(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPause() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FfocusCameraOnCarByID
{
public:
	FfocusCameraOnCarByID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getcar_id() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSliderOnValueChange
{
public:
	FSliderOnValueChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCarCount
{
public:
	FgetCarCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSessionName
{
public:
	FGetCurrentSessionName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSessionPhaseUI
{
public:
	FGetCurrentSessionPhaseUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERaceSessionPhase GetReturnValue() {
		return memory.read<enum class ERaceSessionPhase>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEventInfoUI
{
public:
	FGetEventInfoUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSessionInfoUI> GetReturnValue() {
		return memory.read<struct TArray<struct FSessionInfoUI>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEngineMapUI
{
public:
	FGetEngineMapUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveCustomEntryByValue
{
public:
	FRemoveCustomEntryByValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool Getrebuild() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetFocusedCarDriverStintMs
{
public:
	FgetFocusedCarDriverStintMs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTemporalAAEnabled
{
public:
	FSetTemporalAAEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetPitStopType
{
public:
	FgetPitStopType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERaceMandatoryPitstopType GetReturnValue() {
		return memory.read<enum class ERaceMandatoryPitstopType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetPitWindowTimeInfo
{
public:
	FgetPitWindowTimeInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFillEmtpyColumns
{
public:
	FFillEmtpyColumns(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetminColumnCount() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPitWindowTimeLeft
{
public:
	FGetPitWindowTimeLeft(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetText
{
public:
	FGetText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetPlayerPitNumber
{
public:
	FgetPlayerPitNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRaceRatingsManager
{
public:
	FGetRaceRatingsManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URaceRatingsManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct URaceRatingsManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMfdMode
{
public:
	FSetMfdMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetPressed() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EMfdMode Getmode() {
		return memory.read<enum class EMfdMode>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetRollingStartMessage
{
public:
	FgetRollingStartMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRollingStartMessage GetReturnValue() {
		return memory.read<struct FRollingStartMessage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateItem
{
public:
	FUpdateItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	int32_t Getcar_id() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetisFocused() {
		return memory.read<bool>(m_addr + 12);
	}
	int32_t GetlapAhead() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetisInPit() {
		return memory.read<bool>(m_addr + 20);
	}
	int32_t GetPosition() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetRaceNumber() {
		return memory.read<int32_t>(m_addr + 28);
	}
	char GetCupCategory() {
		return memory.read<char>(m_addr + 32);
	}
	struct UTexture2D GetBrandLogo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UTexture2D(ptr_addr);
	}
	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FText GettimeInText() {
		return memory.read<struct FText>(m_addr + 72);
	}
	bool GetisPlayerCar() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class EPenaltyType GetPenalty() {
		return memory.read<enum class EPenaltyType>(m_addr + 97);
	}
	char GetPenaltyWeight() {
		return memory.read<char>(m_addr + 98);
	}
	int32_t GetpitStopsLeft() {
		return memory.read<int32_t>(m_addr + 100);
	}
	bool GetHasFinished() {
		return memory.read<bool>(m_addr + 104);
	}
	float GetpingRate() {
		return memory.read<float>(m_addr + 108);
	}
	enum class ECarGroup Getcar_group() {
		return memory.read<enum class ECarGroup>(m_addr + 112);
	}
	bool GethasFastestLap() {
		return memory.read<bool>(m_addr + 113);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSunPitch
{
public:
	FGetSunPitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetWeekendWeatherForecast
{
public:
	FgetWeekendWeatherForecast(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRaceWeekendForecast GetReturnValue() {
		return memory.read<struct FRaceWeekendForecast>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_disqualifyCar
{
public:
	Facc_disqualifyCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FhasPlayerCarSessionOver
{
public:
	FhasPlayerCarSessionOver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FhasShownPodium
{
public:
	FhasShownPodium(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisDriveAllowed
{
public:
	FisDriveAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisInReplay
{
public:
	FisInReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSDec
{
public:
	FSDec(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetS() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FisInReplayHUD
{
public:
	FisInReplayHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_setTC
{
public:
	Facc_setTC(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetLevel() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxRange
{
public:
	FSetMaxRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisInSetupPage
{
public:
	FisInSetupPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCustomDisplayText
{
public:
	FAddCustomDisplayText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisNextSessionAllowed
{
public:
	FisNextSessionAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisPitWindowOpen
{
public:
	FisPitWindowOpen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FListSkinsForCar
{
public:
	FListSkinsForCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCar() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FString> GetReturnValue() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FisReplayAllowed
{
public:
	FisReplayAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisRestartAllowed
{
public:
	FisRestartAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisSaveAllowed
{
public:
	FisSaveAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAISteerSmoothing
{
public:
	FSetAISteerSmoothing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestLeaderboardTimeTable
{
public:
	FRequestLeaderboardTimeTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char Getsession_index() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisSequenceActive
{
public:
	FisSequenceActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRPMS
{
public:
	FGetRPMS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSessionMultiCarGroup
{
public:
	FIsSessionMultiCarGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FmovePlayerCarToNextPitBox
{
public:
	FmovePlayerCarToNextPitBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDelta() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddSecondsToTimeOfday
{
public:
	FAddSecondsToTimeOfday(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetsecondsToAdd() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioVCA
{
public:
	FGetAudioVCA(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAudioVCA GetVca() {
		return memory.read<enum class EAudioVCA>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCloudGlobalLevel
{
public:
	FGetCloudGlobalLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAudioVCA
{
public:
	FSetAudioVCA(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAudioVCA GetVca() {
		return memory.read<enum class EAudioVCA>(m_addr + 0);
	}
	float GetVolume() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsWidgetInitialized
{
public:
	FGetIsWidgetInitialized(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsWidgetDefinitionEnabled
{
public:
	FIsWidgetDefinitionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct FHUDOptions GetHUDOptions() {
		return memory.read<struct FHUDOptions>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_carTeleportCarToSpawn
{
public:
	Facc_carTeleportCarToSpawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsWidgetEnabled
{
public:
	FIsWidgetEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct FHUDOptions GetHUDOptions() {
		return memory.read<struct FHUDOptions>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCycleMode
{
public:
	FOnCycleMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetPressed() {
		return memory.read<bool>(m_addr + 0);
	}
	bool Getdirection_next() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHudTick
{
public:
	FOnHudTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRaceHUDState GetState() {
		return memory.read<struct FRaceHUDState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHudVisibility
{
public:
	FOnHudVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsWidgetVisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateOfficialPositionEvent
{
public:
	FOnUpdateOfficialPositionEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCarIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetNewPosition() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdateUI
{
public:
	FOnUpdateUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRaceHUDState GetState() {
		return memory.read<struct FRaceHUDState>(m_addr + 0);
	}
	struct TSet<enum class EUpdateUIEventType> Getevent_types() {
		return memory.read<struct TSet<enum class EUpdateUIEventType>>(m_addr + 992);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllBindedInputActions
{
public:
	FGetAllBindedInputActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInputAction> GetActions() {
		return memory.read<struct TArray<struct FInputAction>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldOverrideSessionDefinition
{
public:
	FShouldOverrideSessionDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartWidget
{
public:
	FStartWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct AAcRaceGameMode Getrace_game_mode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AAcRaceGameMode(ptr_addr);
	}
	struct ACarAvatar GetCarAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct ACarAvatar(ptr_addr);
	}
	struct FHUDOptions GetHUDOptions() {
		return memory.read<struct FHUDOptions>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnServerDisconnection
{
public:
	FOnServerDisconnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDisconnectionReason Getreason() {
		return memory.read<enum class EDisconnectionReason>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnBeforeStartWidget
{
public:
	FOnBeforeStartWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACarAvatar GetCarAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ACarAvatar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCarInfoUI
{
public:
	FgetCarInfoUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarInfo GetReturnValue() {
		return memory.read<struct FCarInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPageChanged
{
public:
	FOnPageChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPageIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetGearState
{
public:
	FResetGearState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_setAILevel
{
public:
	Facc_setAILevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getlvl() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPriority
{
public:
	FGetPriority(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplaceCustomEntryByValue
{
public:
	FReplaceCustomEntryByValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getvalue_to_find() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText Getnew_text() {
		return memory.read<struct FText>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTexture
{
public:
	FGetTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetQuadSize
{
public:
	FSetQuadSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInQuadSize() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUVRect
{
public:
	FSetUVRect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBox2D GetInUVRect() {
		return memory.read<struct FBox2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FForceCommitText
{
public:
	FForceCommitText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETextCommit GetcommitType() {
		return memory.read<enum class ETextCommit>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTextChangedInternal
{
public:
	FOnTextChangedInternal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommitDescription
{
public:
	FCommitDescription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInternalFocus
{
public:
	FSetInternalFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisTextBoxFocused() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_UpdateState
{
public:
	FBP_UpdateState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsElementActive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPrintStringToLog
{
public:
	FPrintStringToLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getlog_message() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpline
{
public:
	FGetSpline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USplineComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USplineComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FisCurrentF7Camera
{
public:
	FisCurrentF7Camera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameter
{
public:
	FSetParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class GraphicsOptions GetType() {
		return memory.read<enum class GraphicsOptions>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FBroadcastAnimation
{
public:
	FBroadcastAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarAnimation GetCarAnimation() {
		return memory.read<enum class ECarAnimation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleBrakeBias
{
public:
	FcycleBrakeBias(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FcycleTCCut
{
public:
	FcycleTCCut(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOffset() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetABSLevel
{
public:
	FGetABSLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputActionFromMouseButtonEvent
{
public:
	FGetInputActionFromMouseButtonEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}
	struct FInputAction GetReturnValue() {
		return memory.read<struct FInputAction>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAIState
{
public:
	FGetAIState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAIState GetReturnValue() {
		return memory.read<struct FAIState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBrakeBiasUI
{
public:
	FGetBrakeBiasUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCarLocation
{
public:
	FgetCarLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarLocation GetReturnValue() {
		return memory.read<enum class ECarLocation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentFlag
{
public:
	FgetCurrentFlag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMarshalFlagType GetReturnValue() {
		return memory.read<enum class EMarshalFlagType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentFuel
{
public:
	FgetCurrentFuel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConvertInt32ToFormattedTime
{
public:
	FConvertInt32ToFormattedTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInputTime() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetHideMillisecs() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentTyreSetWearState
{
public:
	FgetCurrentTyreSetWearState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETyreSetWearState GetReturnValue() {
		return memory.read<enum class ETyreSetWearState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDisplayBrakeBias
{
public:
	FGetDisplayBrakeBias(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDisplaysPage
{
public:
	FGetDisplaysPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetDriverInfoUI
{
public:
	FgetDriverInfoUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDriverInfo GetReturnValue() {
		return memory.read<struct FDriverInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGearAsIndex
{
public:
	FGetGearAsIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShowLabel
{
public:
	FSetShowLabel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getvisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxRPMS
{
public:
	FGetMaxRPMS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNormalizedSplinePosition
{
public:
	FGetNormalizedSplinePosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPing
{
public:
	FGetPing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTOE
{
public:
	FGetTOE(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetTyreSetWearState
{
public:
	FgetTyreSetWearState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Gettyre_set_index() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ETyreSetWearState GetReturnValue() {
		return memory.read<enum class ETyreSetWearState>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetWarningsReceivedCountUI
{
public:
	FgetWarningsReceivedCountUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FResolutionCancel
{
public:
	FResolutionCancel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPageBase Getpopup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPageBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsABS_InAction
{
public:
	FIsABS_InAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisTyreSetNew
{
public:
	FisTyreSetNew(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAccessToSeason
{
public:
	FHasAccessToSeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FLockCarAvatarForPitstop
{
public:
	FLockCarAvatarForPitstop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FprepareForShowroom
{
public:
	FprepareForShowroom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetresetLightsAndDoors() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemForwardSingleCar
{
public:
	FOnItemForwardSingleCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTimeTableItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTimeTableItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FsetBeltAndNetVisibility
{
public:
	FsetBeltAndNetVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsVisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsReverse
{
public:
	FIsReverse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTyreTemperature
{
public:
	FSetTyreTemperature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GettyreIndex() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t GetnewTemperature() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FisSaveStatePresent
{
public:
	FisSaveStatePresent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FresumeSavedGame
{
public:
	FresumeSavedGame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentCareerEventPreset
{
public:
	FgetCurrentCareerEventPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCareerEventPreset GetReturnValue() {
		return memory.read<struct FCareerEventPreset>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetLastResult
{
public:
	FgetLastResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCareerEventResult GetReturnValue() {
		return memory.read<struct FCareerEventResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetSilverMedalPoints
{
public:
	FgetSilverMedalPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetTestTypeText
{
public:
	FgetTestTypeText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECareerEventType GetEventType() {
		return memory.read<enum class ECareerEventType>(m_addr + 0);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FisEndOfSeason2
{
public:
	FisEndOfSeason2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMPCarGroupToContentId
{
public:
	FMPCarGroupToContentId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 0);
	}
	enum class EContentType GetReturnValue() {
		return memory.read<enum class EContentType>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FloadCareerState
{
public:
	FloadCareerState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FJumpStep
{
public:
	FJumpStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getstep_time() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FsaveCareerState
{
public:
	FsaveCareerState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInvertLabel
{
public:
	FInvertLabel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getinvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIndexByValue
{
public:
	FSetIndexByValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLeaderStateChanged
{
public:
	FLeaderStateChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_leader() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCarUpdate
{
public:
	FOnCarUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarInfo GetCarInfo() {
		return memory.read<struct FCarInfo>(m_addr + 0);
	}
	struct FName GetCarKey() {
		return memory.read<struct FName>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrand
{
public:
	FSetBrand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBrandType GetBrand() {
		return memory.read<enum class EBrandType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHotlapData
{
public:
	FOnHotlapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesHotlapUpdate GetrankUpdate() {
		return memory.read<struct FOnlineServicesHotlapUpdate>(m_addr + 0);
	}
	struct TArray<struct FOnlineServicesHotlapEntry> Getentries() {
		return memory.read<struct TArray<struct FOnlineServicesHotlapEntry>>(m_addr + 64);
	}
	bool GetignoreMe() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemForward
{
public:
	FOnItemForward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTimeTableItem GetSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTimeTableItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChildrenForward
{
public:
	FOnChildrenForward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPanelBase GetChild() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPanelBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPopupResponse
{
public:
	FOnPopupResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReIndexMenu
{
public:
	FReIndexMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetGroupName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool Gethorizontal() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetfocusFirst() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCarGroupFilterApplied
{
public:
	FOnCarGroupFilterApplied(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup Getcar_group() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSeasonSelected
{
public:
	FOnSeasonSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetSeason() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentChampEventPreset
{
public:
	FGetCurrentChampEventPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChampEventPreset GetReturnValue() {
		return memory.read<struct FChampEventPreset>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisChampionshipEventInProgress
{
public:
	FisChampionshipEventInProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getevent_id() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDelMessageById
{
public:
	FDelMessageById(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetmessageGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetItemByMessageId
{
public:
	FGetItemByMessageId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetmessageGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	struct UVerticalBox GettargetList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UVerticalBox(ptr_addr);
	}
	struct UCommunicationPanelItemBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCommunicationPanelItemBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitCommsPanel
{
public:
	FInitCommsPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct AAcRaceGameMode Getrace_game_mode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AAcRaceGameMode(ptr_addr);
	}
	struct FHUDOptions GetHUDOptions() {
		return memory.read<struct FHUDOptions>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHUDOptionsChanged
{
public:
	FOnHUDOptionsChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHUDOptions GetHUDOptions() {
		return memory.read<struct FHUDOptions>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMessage
{
public:
	FGetMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommsMessage GetReturnValue() {
		return memory.read<struct FCommsMessage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMessageSet
{
public:
	FOnMessageSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommsMessage GetMessage() {
		return memory.read<struct FCommsMessage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwnedContentTypes
{
public:
	FGetOwnedContentTypes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<enum class EContentType> GetReturnValue() {
		return memory.read<struct TArray<enum class EContentType>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMessage
{
public:
	FSetMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommsMessage GetMessage() {
		return memory.read<struct FCommsMessage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearInput
{
public:
	FClearInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGenericInputItem GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGenericInputItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAreCommandConfigurationsEqual
{
public:
	FAreCommandConfigurationsEqual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandConfiguration Getfirst_config() {
		return memory.read<struct FCommandConfiguration>(m_addr + 0);
	}
	struct FCommandConfiguration Getsecond_config() {
		return memory.read<struct FCommandConfiguration>(m_addr + 216);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 432);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearAction
{
public:
	FClearAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandConfiguration GetCommandConfiguration() {
		return memory.read<struct FCommandConfiguration>(m_addr + 0);
	}
	enum class EControllerActionType Getaction_type() {
		return memory.read<enum class EControllerActionType>(m_addr + 216);
	}
	bool Getis_race_command() {
		return memory.read<bool>(m_addr + 217);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLeaderboardRequested
{
public:
	FOnLeaderboardRequested(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getref_id() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearKey
{
public:
	FClearKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandConfiguration GetCommandConfiguration() {
		return memory.read<struct FCommandConfiguration>(m_addr + 0);
	}
	enum class EControllerActionType GetAction() {
		return memory.read<enum class EControllerActionType>(m_addr + 216);
	}
	bool Getis_race_command() {
		return memory.read<bool>(m_addr + 217);
	}
	bool Getis_gamepad() {
		return memory.read<bool>(m_addr + 218);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveActionTypeFromCommandButton
{
public:
	FRemoveActionTypeFromCommandButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCommandButton GetTarget() {
		return memory.read<struct FCommandButton>(m_addr + 0);
	}
	enum class EControllerActionType Getaction_type() {
		return memory.read<enum class EControllerActionType>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FShowBestLapTime
{
public:
	FShowBestLapTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getvisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateBrand
{
public:
	FUpdateBrand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBrandType GetBrand() {
		return memory.read<enum class EBrandType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDriverSummary
{
public:
	FOnDriverSummary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesDriverSummary Getsummary() {
		return memory.read<struct FOnlineServicesDriverSummary>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEncrypt
{
public:
	FEncrypt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInputString() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRatingCap
{
public:
	FSetRatingCap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetdesiredCap() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFont
{
public:
	FSetFont(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FExplosion
{
public:
	FExplosion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFireWorkType GetType() {
		return memory.read<enum class EFireWorkType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeIntroPage
{
public:
	FChangeIntroPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsNextPage() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetIsSkip() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnVideoEnd
{
public:
	FOnVideoEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLength() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTestConfirmResolution
{
public:
	FTestConfirmResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisConfirmed() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHoverAnimation
{
public:
	FHoverAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_over() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitItem
{
public:
	FInitItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControllerOptionsPage GetP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControllerOptionsPage(ptr_addr);
	}
	enum class EControllerActionType Get_actionType() {
		return memory.read<enum class EControllerActionType>(m_addr + 8);
	}
	bool Get_bIsUI() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMapIndex
{
public:
	FSetMapIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetIndex() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddCustomValue
{
public:
	FAddCustomValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_OnSelectorchanged
{
public:
	FBP_OnSelectorchanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FTestSetScreenResolution
{
public:
	FTestSetScreenResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool Getfullscreen() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIndex
{
public:
	FGetIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValue
{
public:
	FGetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddRatingValueWithColor
{
public:
	FAddRatingValueWithColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 8);
	}
	struct FLinearColor GetBaseColor() {
		return memory.read<struct FLinearColor>(m_addr + 12);
	}
	bool GetisColumnNavigable() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FRebuildSelector
{
public:
	FRebuildSelector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetemptyValueList() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetrefreshLabel() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIndex
{
public:
	FSetIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool Getsupress_event() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FAppendToFText
{
public:
	FAppendToFText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FString GettextToAppend() {
		return memory.read<struct FString>(m_addr + 24);
	}
	bool GetisPostfix() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FDecrypt
{
public:
	FDecrypt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInputString() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControllerActionTypeAsName
{
public:
	FGetControllerActionTypeAsName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType Getaction_type() {
		return memory.read<enum class EControllerActionType>(m_addr + 0);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDriverName
{
public:
	FGetDriverName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDriverInfo GetDriverInfo() {
		return memory.read<struct FDriverInfo>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGameResolution
{
public:
	FGetGameResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAccessToContent
{
public:
	FHasAccessToContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EContentType Getcontent_type() {
		return memory.read<enum class EContentType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSanitizeFloat
{
public:
	FSanitizeFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInput() {
		return memory.read<float>(m_addr + 0);
	}
	float GetPad() {
		return memory.read<float>(m_addr + 4);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSCode
{
public:
	FSCode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetF() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString Getstr() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetK() {
		return memory.read<struct FString>(m_addr + 32);
	}
	bool GetG() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_OnChildrenBackward
{
public:
	FBP_OnChildrenBackward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPanelBase GetChild() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPanelBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_OnChildrenForward
{
public:
	FBP_OnChildrenForward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPanelBase GetChild() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPanelBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitWidget
{
public:
	FInitWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AAcRaceGameMode(ptr_addr);
	}
	bool GetinitInPage() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnNewItemAdded
{
public:
	FOnNewItemAdded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnButtonReleaseDetailedEvent
{
public:
	FOnButtonReleaseDetailedEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char Get_deviceIndex() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t Get_buttonIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t Get_powIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t Get_powValue() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_addPostRacePenalty
{
public:
	Facc_addPostRacePenalty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	char GetWeight() {
		return memory.read<char>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddAxisBinding
{
public:
	FAddAxisBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputAxis GetNewBinding() {
		return memory.read<struct FInputAxis>(m_addr + 0);
	}
	struct FInputAxis GetCurrentBinding() {
		return memory.read<struct FInputAxis>(m_addr + 64);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputAxisFromMouseAxisEvent
{
public:
	FGetInputAxisFromMouseAxisEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}
	struct FInputAxis GetReturnValue() {
		return memory.read<struct FInputAxis>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPresetSet
{
public:
	FOnPresetSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSpecialEventPreset GetPreset() {
		return memory.read<struct FSpecialEventPreset>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputAxisFromMouseButtonEvent
{
public:
	FGetInputAxisFromMouseButtonEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}
	struct FInputAxis GetReturnValue() {
		return memory.read<struct FInputAxis>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateConnectionIndication
{
public:
	FUpdateConnectionIndication(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOnlineServicesConnectionState GetconnState() {
		return memory.read<enum class EOnlineServicesConnectionState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCycleMfd
{
public:
	FCycleMfd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	bool GetPressed() {
		return memory.read<bool>(m_addr + 8);
	}
	bool Getdirection_next() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FCycleNextVirtualDesktop
{
public:
	FCycleNextVirtualDesktop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	bool GetPressed() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetForward() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FforceHudByCaption
{
public:
	FforceHudByCaption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getcaption() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentHudId
{
public:
	FgetCurrentHudId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsVisible
{
public:
	FGetIsVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetLastState
{
public:
	FgetLastState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRaceHUDState GetReturnValue() {
		return memory.read<struct FRaceHUDState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsChatWidgetFocused
{
public:
	FIsChatWidgetFocused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKSONConnectionStateChanged
{
public:
	FOnKSONConnectionStateChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOnlineServicesConnectionState GetConnectionState() {
		return memory.read<enum class EOnlineServicesConnectionState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPhysicsBlendCount
{
public:
	FGetPhysicsBlendCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPlayerCarLocationChanged
{
public:
	FOnPlayerCarLocationChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarLocation Getcar_location() {
		return memory.read<enum class ECarLocation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRange
{
public:
	FSetRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMin() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMax() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpotterAudioComEnded
{
public:
	FOnSpotterAudioComEnded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetaudioEventCounter() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpotterAudioComStarted
{
public:
	FOnSpotterAudioComStarted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAudioCommsData GetaudioEventdata() {
		return memory.read<struct FAudioCommsData>(m_addr + 0);
	}
	int32_t GetaudioEventCounter() {
		return memory.read<int32_t>(m_addr + 208);
	}
	float Getpayload() {
		return memory.read<float>(m_addr + 212);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTemporalAAEnabled
{
public:
	FGetTemporalAAEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FshouldShowHUD
{
public:
	FshouldShowHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAddItem
{
public:
	FOnAddItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcRaceWidgetBase GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcRaceWidgetBase(ptr_addr);
	}
	int32_t Getrow() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t Getcolumn() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetrowSpan() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetcolumnSpan() {
		return memory.read<int32_t>(m_addr + 20);
	}
	bool GetscaleToFitX() {
		return memory.read<bool>(m_addr + 24);
	}
	enum class EHorizontalAlignment GethorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 25);
	}
	enum class EVerticalAlignment GetverticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 26);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHUDOptionsUpdate
{
public:
	FOnHUDOptionsUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FUserOptions GetnewOptions() {
		return memory.read<struct FUserOptions>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnOptionsUpdated
{
public:
	FOnOptionsUpdated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FUserOptions GetnewOptions() {
		return memory.read<struct FUserOptions>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_setSingleMakeRacing
{
public:
	Facc_setSingleMakeRacing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCloseCurtain
{
public:
	FCloseCurtain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getinstant() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCommonSessionTypeText
{
public:
	FGetCommonSessionTypeText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESessionType Getsession_type() {
		return memory.read<enum class ESessionType>(m_addr + 0);
	}
	bool Getlong_form() {
		return memory.read<bool>(m_addr + 1);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSessionTime
{
public:
	FGetCurrentSessionTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentModelType
{
public:
	FGetCurrentModelType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetReturnValue() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPage
{
public:
	FGetCurrentPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPageBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPageBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FupdateControllerSettings
{
public:
	FupdateControllerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarControllerMode Getmode() {
		return memory.read<enum class ECarControllerMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSeasonGuiGameMode
{
public:
	FGetCurrentSeasonGuiGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiGameModes GetReturnValue() {
		return memory.read<enum class EGuiGameModes>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_set_wearMM
{
public:
	Facc_set_wearMM(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float Getmm() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGuiGameMode
{
public:
	FGetGuiGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	enum class EGuiGameModes GetReturnValue() {
		return memory.read<enum class EGuiGameModes>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FGoToCurrentRootPage
{
public:
	FGoToCurrentRootPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteCustomCar
{
public:
	FDeleteCustomCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGoToPage
{
public:
	FGoToPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetpageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}
	bool GetremoveCurrent() {
		return memory.read<bool>(m_addr + 8);
	}
	struct UAcPageBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAcPageBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAccessToCar
{
public:
	FHasAccessToCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getcar_name() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAccessToCarModel
{
public:
	FHasAccessToCarModel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType Getcar_model() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAccessToTrack
{
public:
	FHasAccessToTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Gettrack_name() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSetting
{
public:
	FSetSetting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class GraphicsOptions GetType() {
		return memory.read<enum class GraphicsOptions>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartFade
{
public:
	FStartFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GettimeMult() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsOfficialGameMode
{
public:
	FIsOfficialGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSingleCarGameMode
{
public:
	FIsSingleCarGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHDR
{
public:
	FGetHDR(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadMenuState
{
public:
	FLoadMenuState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemovePage
{
public:
	FRemovePage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPageBase GetPAGE() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcPageBase(ptr_addr);
	}
	bool GetrefreshComingPage() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetclearHMDFocus() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 10);
	}

private:
	std::uint64_t m_addr = 0;
};class FTestSaveVideoModeAndQuality
{
public:
	FTestSaveVideoModeAndQuality(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetActiveSeasonGuiGameMode
{
public:
	FSetActiveSeasonGuiGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiGameModes Getgame_mode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentRaceEventCarGroupWeights
{
public:
	FSetCurrentRaceEventCarGroupWeights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarGroup GetGroup() {
		return memory.read<enum class ECarGroup>(m_addr + 0);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentSeasonGuiGameMode
{
public:
	FSetCurrentSeasonGuiGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiGameModes Getgame_mode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChatMessage
{
public:
	FOnChatMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChatMessage GetchatMsg() {
		return memory.read<struct FChatMessage>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChatMessageCommit
{
public:
	FOnChatMessageCommit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChatMessateTextChange
{
public:
	FOnChatMessateTextChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnServerListReceived
{
public:
	FOnServerListReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesMPMatchmakingResponse GetmatchmakingResponse() {
		return memory.read<struct FOnlineServicesMPMatchmakingResponse>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateCarSelectPanel
{
public:
	FUpdateCarSelectPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsFilteringActive
{
public:
	FIsFilteringActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnServerSearchChanged
{
public:
	FOnServerSearchChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnServerSearchCommited
{
public:
	FOnServerSearchCommited(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPreConnectionCheck
{
public:
	FPreConnectionCheck(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarInfo GetCar() {
		return memory.read<struct FCarInfo>(m_addr + 0);
	}
	struct FCircuitInfo Getcircuit() {
		return memory.read<struct FCircuitInfo>(m_addr + 224);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 720);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerPinged
{
public:
	FServerPinged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getnumber_of_servers_pings() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Gettotal_servers() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetActiveButtons
{
public:
	FSetActiveButtons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsActive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCPInviteClicked
{
public:
	FCPInviteClicked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesCPInvitationState Getcurrent_invite_state() {
		return memory.read<struct FOnlineServicesCPInvitationState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FJoinCompetitionServer
{
public:
	FJoinCompetitionServer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesMPServerInfo Getcompetition_server() {
		return memory.read<struct FOnlineServicesMPServerInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateServerInfo
{
public:
	FUpdateServerInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesMPServerInfo Getlegacy_competition_server() {
		return memory.read<struct FOnlineServicesMPServerInfo>(m_addr + 0);
	}
	struct FOnlineServicesMPQuickjoinPanelInfo Getquickjoin_info() {
		return memory.read<struct FOnlineServicesMPQuickjoinPanelInfo>(m_addr + 176);
	}
	struct FOnlineServicesCPInvitationState Getcompetition_server_invitation() {
		return memory.read<struct FOnlineServicesCPInvitationState>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearStatisticsRecord
{
public:
	FClearStatisticsRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class KsonDriverStatisticSummaryTypeEnum GetFilter() {
		return memory.read<enum class KsonDriverStatisticSummaryTypeEnum>(m_addr + 0);
	}
	int32_t Gettrack_id() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t Getcar_model() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCPInvite
{
public:
	FGetCPInvite(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class BackendCPInvitationType GetType() {
		return memory.read<enum class BackendCPInvitationType>(m_addr + 0);
	}
	struct FOnlineServicesCPInvitationState GetReturnValue() {
		return memory.read<struct FOnlineServicesCPInvitationState>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FfindSelectedEntrySeason
{
public:
	FfindSelectedEntrySeason(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType GetReturnValue() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSteamAchievement
{
public:
	FGetSteamAchievement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FFakeSteamAchievement GetReturnValue() {
		return memory.read<struct FFakeSteamAchievement>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackRecord
{
public:
	FGetTrackRecord(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	int32_t Getcircuit_id() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FOnlineServicesTrackRecord Getout_track_record() {
		return memory.read<struct FOnlineServicesTrackRecord>(m_addr + 8);
	}
	struct FModelInfo Getout_car_model_info() {
		return memory.read<struct FModelInfo>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 448);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackRecordByCar
{
public:
	FGetTrackRecordByCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}
	int32_t Getcircuit_id() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class ECarModelType Getcar_model() {
		return memory.read<enum class ECarModelType>(m_addr + 8);
	}
	struct FOnlineServicesTrackRecord Getout_track_record() {
		return memory.read<struct FOnlineServicesTrackRecord>(m_addr + 12);
	}
	struct FModelInfo Getout_car_model_info() {
		return memory.read<struct FModelInfo>(m_addr + 32);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 456);
	}

private:
	std::uint64_t m_addr = 0;
};class FisSpecialEventEnabled
{
public:
	FisSpecialEventEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getevent_id() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestDriverStatistics
{
public:
	FRequestDriverStatistics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldAllowPanelUp
{
public:
	FShouldAllowPanelUp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestHotlapData
{
public:
	FRequestHotlapData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTrackName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t Gettake() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetSkip() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GeteventId() {
		return memory.read<int32_t>(m_addr + 24);
	}
	float GetminWetness() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetincludeDriver() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetuseCurrentCarModel() {
		return memory.read<bool>(m_addr + 33);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 34);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRequestMPServerList
{
public:
	FRequestMPServerList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetmaxServerCount() {
		return memory.read<char>(m_addr + 0);
	}
	struct FString GetoptionalSearchString() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool Getis_quickjoin_page_request() {
		return memory.read<bool>(m_addr + 24);
	}
	enum class EMPCarGroup Getquickjoin_car_group_filter() {
		return memory.read<enum class EMPCarGroup>(m_addr + 25);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStartReplayTimeInSeconds
{
public:
	FGetStartReplayTimeInSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateDriverAccount
{
public:
	FUpdateDriverAccount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGamePlatformUserAccountData Getaccount() {
		return memory.read<struct FGamePlatformUserAccountData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDebugCollisionInfo
{
public:
	FOnDebugCollisionInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRaceRatingCarRelationshipIncident> Getdebug_collisions() {
		return memory.read<struct TArray<struct FRaceRatingCarRelationshipIncident>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSetFullscreen
{
public:
	FOnSetFullscreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getfullscreen() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSetShowCircuitName
{
public:
	FOnSetShowCircuitName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getfullscreen() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSessionEndTime
{
public:
	FGetSessionEndTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlurStrength
{
public:
	FSetBlurStrength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetblurStrength() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShowCircuitName
{
public:
	FSetShowCircuitName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getshow() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTitleText
{
public:
	FSetTitleText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetTextValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_addCuttingWarning
{
public:
	Facc_addCuttingWarning(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_carForceCommand
{
public:
	Facc_carForceCommand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	char GetValue() {
		return memory.read<char>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_carsSetCompound
{
public:
	Facc_carsSetCompound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcmp() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_carsSetPreset
{
public:
	Facc_carsSetPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPreset() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_carUpdatePitStrategy
{
public:
	Facc_carUpdatePitStrategy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	char Getpitstop_reason() {
		return memory.read<char>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_cleanPenalty
{
public:
	Facc_cleanPenalty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_DrawDebugLine
{
public:
	Facc_DrawDebugLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetP1() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetP2() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_DrawDebugPlane
{
public:
	Facc_DrawDebugPlane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPlane GetPlane() {
		return memory.read<struct FPlane>(m_addr + 0);
	}
	struct FVector GetLoc() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetSize() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_focusCar
{
public:
	Facc_focusCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_KillCar
{
public:
	Facc_KillCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_id() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_lockAIonTrack
{
public:
	Facc_lockAIonTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_pitstop_debug
{
public:
	Facc_pitstop_debug(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getbox_index() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_printSessionTotalPointsByTeam
{
public:
	Facc_printSessionTotalPointsByTeam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getcup_category() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ECarGroup Getcar_category() {
		return memory.read<enum class ECarGroup>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_removeFirstLap
{
public:
	Facc_removeFirstLap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_ReplaySetCurrentTime
{
public:
	Facc_ReplaySetCurrentTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSeconds() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_retireCar
{
public:
	Facc_retireCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t Getcar_number() {
		return memory.read<uint16_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_setABS
{
public:
	Facc_setABS(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetLevel() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_SetCockpitVisMode
{
public:
	Facc_SetCockpitVisMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char Getvis_mode() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_setRestrictor
{
public:
	Facc_setRestrictor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_swap_driver_debug
{
public:
	Facc_swap_driver_debug(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_TestFastLane
{
public:
	Facc_TestFastLane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCarIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Facc_tweakPitstop
{
public:
	Facc_tweakPitstop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint16_t GetCarIndex() {
		return memory.read<uint16_t>(m_addr + 0);
	}
	char GetValue() {
		return memory.read<char>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FForceHudOverlayById
{
public:
	FForceHudOverlayById(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentHudOverlayId
{
public:
	FGetCurrentHudOverlayId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentReplayTotalTimeInSeconds
{
public:
	FGetCurrentReplayTotalTimeInSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentReplayPausedState
{
public:
	FSetCurrentReplayPausedState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDoPause() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentReplayTimeToSeconds
{
public:
	FSetCurrentReplayTimeToSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSeconds() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHUDVisibility
{
public:
	FSetHUDVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetVisibility() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCarAtPosition
{
public:
	FGetCarAtPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetPosition() {
		return memory.read<char>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPixelDensity
{
public:
	FGetPixelDensity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentSessionPhase
{
public:
	FGetCurrentSessionPhase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERaceSessionPhase GetReturnValue() {
		return memory.read<enum class ERaceSessionPhase>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPhysicsCPUOccupancy
{
public:
	FGetPhysicsCPUOccupancy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSessionStartTime
{
public:
	FGetSessionStartTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpeedDelta
{
public:
	FGetSpeedDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsEndlessSession
{
public:
	FIsEndlessSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEloDeltaUpdate
{
public:
	FOnEloDeltaUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKsonEloDataUpdate> Getelo_updates() {
		return memory.read<struct TArray<struct FKsonEloDataUpdate>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEndFade
{
public:
	FEndFade(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GettimeMult() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFocusedItemDetails
{
public:
	FSetFocusedItemDetails(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetselectedIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMedalCount
{
public:
	FSetMedalCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GettrackMedals() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetmaxTrackMedals() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRatingItemCollapsedAnimationEnded
{
public:
	FOnRatingItemCollapsedAnimationEnded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetratingIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetisCollapsed() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetScreenResolution
{
public:
	FGetScreenResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool Getfullscreen() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRatingItemExpandedAnimationEnded
{
public:
	FOnRatingItemExpandedAnimationEnded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetratingIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetisExpanded() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateUIState
{
public:
	FUpdateUIState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetrecursionCounter() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteReplay
{
public:
	FDeleteReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetreplayName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EReplayStore GetreplayStore() {
		return memory.read<enum class EReplayStore>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetReplayList
{
public:
	FGetReplayList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FReplayInfo> GetreplayInfos() {
		return memory.read<struct TArray<struct FReplayInfo>>(m_addr + 0);
	}
	enum class EReplayStore GetreplayStore() {
		return memory.read<enum class EReplayStore>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveTempReplay
{
public:
	FSaveTempReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FReplayInfo GetReplayInfo() {
		return memory.read<struct FReplayInfo>(m_addr + 0);
	}
	enum class EFileOperationResult GetReturnValue() {
		return memory.read<enum class EFileOperationResult>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FCaptureNavInput
{
public:
	FCaptureNavInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getenable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCameraName
{
public:
	FGetCameraName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasHighlights
{
public:
	FHasHighlights(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEntries
{
public:
	FGetEntries(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTeamInfo GetTeam() {
		return memory.read<struct FTeamInfo>(m_addr + 0);
	}
	struct TArray<struct FCarInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FCarInfo>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSavingAllowed
{
public:
	FIsSavingAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFadeTriggered
{
public:
	FOnFadeTriggered(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDuration() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPanelVisibilityChanged
{
public:
	FOnPanelVisibilityChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getvisible() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSaveReplay
{
public:
	FOnSaveReplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetResultCode() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReverseClick
{
public:
	FReverseClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetCurrentHighlightInfo
{
public:
	FgetCurrentHighlightInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHighlightInfo GetReturnValue() {
		return memory.read<struct FHighlightInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRecorderTotalHighlightsTime
{
public:
	FGetRecorderTotalHighlightsTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FhasSessionResult
{
public:
	FhasSessionResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FisHighlight
{
public:
	FisHighlight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteSavegame
{
public:
	FDeleteSavegame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteSpecialSavegame
{
public:
	FDeleteSpecialSavegame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_career() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteSpecialSavegameWithList
{
public:
	FDeleteSpecialSavegameWithList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getis_career() {
		return memory.read<bool>(m_addr + 0);
	}
	struct TArray<struct FAcSaveGameHeader> Getheaders() {
		return memory.read<struct TArray<struct FAcSaveGameHeader>>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCareer
{
public:
	FGetCareer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAcSaveGameHeader> Getheaders() {
		return memory.read<struct TArray<struct FAcSaveGameHeader>>(m_addr + 0);
	}
	struct FAcSaveGameHeader Getcareer() {
		return memory.read<struct FAcSaveGameHeader>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 360);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSavegameList
{
public:
	FGetSavegameList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAcSaveGameHeader> Getheaders() {
		return memory.read<struct TArray<struct FAcSaveGameHeader>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSetServerInfoComplete
{
public:
	FOnSetServerInfoComplete(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesMPServerInfo GetreceivedServerInfo() {
		return memory.read<struct FOnlineServicesMPServerInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDamperLut
{
public:
	FGetDamperLut(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FDamperLut GetDestination() {
		return memory.read<struct FDamperLut>(m_addr + 8);
	}
	int32_t GetAxle() {
		return memory.read<int32_t>(m_addr + 40);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrawLinesThick
{
public:
	FDrawLinesThick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaintContext GetContext() {
		return memory.read<struct FPaintContext>(m_addr + 0);
	}
	struct TArray<struct FVector2D> GetPoints() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 48);
	}
	struct FLinearColor GetTint() {
		return memory.read<struct FLinearColor>(m_addr + 64);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 80);
	}
	bool GetbAntiAlias() {
		return memory.read<bool>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDamperLutList
{
public:
	FGetDamperLutList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetList() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}
	int32_t GetAxle() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteSetup
{
public:
	FDeleteSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getfile_path() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSetups
{
public:
	FGetSetups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFileItem> GetReturnValue() {
		return memory.read<struct TArray<struct FFileItem>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadSetup
{
public:
	FLoadSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getfile_path() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLockedPanelGroups
{
public:
	FSetLockedPanelGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetGroups() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyFilter
{
public:
	FApplyFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EShowroomCarFilterType GetFilter() {
		return memory.read<enum class EShowroomCarFilterType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplySeasonFilter
{
public:
	FApplySeasonFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESeasonType Getseason_type() {
		return memory.read<enum class ESeasonType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllModels
{
public:
	FGetAllModels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FModelInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FModelInfo>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDrivers
{
public:
	FGetDrivers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getcar_key() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FDriverInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FDriverInfo>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetModels
{
public:
	FGetModels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FModelInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FModelInfo>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSkinVariants
{
public:
	FGetSkinVariants(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarInfo Getcar_info() {
		return memory.read<struct FCarInfo>(m_addr + 0);
	}
	struct TArray<struct FSkinTemplate> GetReturnValue() {
		return memory.read<struct TArray<struct FSkinTemplate>>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSponsorKeys
{
public:
	FGetSponsorKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 0);
	}
	struct TArray<int32_t> GetReturnValue() {
		return memory.read<struct TArray<int32_t>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTeams
{
public:
	FGetTeams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModelInfo GetModel() {
		return memory.read<struct FModelInfo>(m_addr + 0);
	}
	struct TArray<struct FTeamInfo> GetReturnValue() {
		return memory.read<struct TArray<struct FTeamInfo>>(m_addr + 424);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsNewCustomCar
{
public:
	FIsNewCustomCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsVariantSelected
{
public:
	FIsVariantSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getvariant_key() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnModelUpdate
{
public:
	FOnModelUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModelInfo GetModelInfo() {
		return memory.read<struct FModelInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTeamUpdate
{
public:
	FOnTeamUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTeamInfo GetTeamInfo() {
		return memory.read<struct FTeamInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLeaderboardError
{
public:
	FOnLeaderboardError(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESpecialEventLeaderboardError Geterror_type() {
		return memory.read<enum class ESpecialEventLeaderboardError>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveEntryFromList
{
public:
	FRemoveEntryFromList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName Getentry_key() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FCompetitionList Getentry_list() {
		return memory.read<struct FCompetitionList>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveCustomCar
{
public:
	FSaveCustomCar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getsave_as_new() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCarModel
{
public:
	FSetCarModel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModelInfo GetModel() {
		return memory.read<struct FModelInfo>(m_addr + 0);
	}
	bool GetforCustom() {
		return memory.read<bool>(m_addr + 424);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTeam
{
public:
	FSetTeam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTeamInfo GetTeam() {
		return memory.read<struct FTeamInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVariant
{
public:
	FSetVariant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getvariant_key() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCppPaint
{
public:
	FOnCppPaint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaintContext GetContext() {
		return memory.read<struct FPaintContext>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMotionBlurEnabled
{
public:
	FSetMotionBlurEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddColumnWithColor
{
public:
	FAddColumnWithColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}
	bool GetisColumnNavigable() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddTotalRatingValue
{
public:
	FAddTotalRatingValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetisColumnNavigable() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FBroadcastSelectedIdChanged
{
public:
	FBroadcastSelectedIdChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetselectedId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadImageAsTexture
{
public:
	FLoadImageAsTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFullFilePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetIsValid() {
		return memory.read<bool>(m_addr + 16);
	}
	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct UTexture2D GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUserOverlay
{
public:
	FSetUserOverlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getfolder() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyGlovesTemplate
{
public:
	FApplyGlovesTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct USkeletalMeshComponent GetsuitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct FDriverInfo GetDriverInfo() {
		return memory.read<struct FDriverInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyHelmetTemplate
{
public:
	FApplyHelmetTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct USkeletalMeshComponent GethelmetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct FDriverInfo GetDriverInfo() {
		return memory.read<struct FDriverInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplySuitTemplate
{
public:
	FApplySuitTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAcGameInstance(ptr_addr);
	}
	struct USkeletalMeshComponent GetsuitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct FDriverInfo GetDriverInfo() {
		return memory.read<struct FDriverInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitEntry
{
public:
	FInitEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getpos() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FText GetName() {
		return memory.read<struct FText>(m_addr + 8);
	}
	int32_t GetLapsTot() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FText GetLapText() {
		return memory.read<struct FText>(m_addr + 40);
	}
	struct FText GetGap() {
		return memory.read<struct FText>(m_addr + 64);
	}
	int32_t GetSector1() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetSector2() {
		return memory.read<int32_t>(m_addr + 92);
	}
	int32_t GetSector3() {
		return memory.read<int32_t>(m_addr + 96);
	}
	bool GetisSector1Record() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetisSector2Record() {
		return memory.read<bool>(m_addr + 101);
	}
	bool GetisSector3Record() {
		return memory.read<bool>(m_addr + 102);
	}
	bool GetIsRecordLap() {
		return memory.read<bool>(m_addr + 103);
	}
	bool GetIsPlayerLap() {
		return memory.read<bool>(m_addr + 104);
	}
	enum class EKunosDriverCategory GetCategory() {
		return memory.read<enum class EKunosDriverCategory>(m_addr + 105);
	}
	bool GetIsHotstint() {
		return memory.read<bool>(m_addr + 106);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLeaderboard
{
public:
	FGetLeaderboard(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getref_id() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHotlapDataReceived
{
public:
	FOnHotlapDataReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FOnlineServicesHotlapUpdate GetrankUpdate() {
		return memory.read<struct FOnlineServicesHotlapUpdate>(m_addr + 0);
	}
	struct TArray<struct FOnlineServicesHotlapEntry> Getentries() {
		return memory.read<struct TArray<struct FOnlineServicesHotlapEntry>>(m_addr + 64);
	}
	bool GetignoreMe() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnLeaderboardReceived
{
public:
	FOnLeaderboardReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FOnlineServicesHotlapEntry> Getentries() {
		return memory.read<struct TArray<struct FOnlineServicesHotlapEntry>>(m_addr + 0);
	}
	struct TArray<struct FText> Getdeltas() {
		return memory.read<struct TArray<struct FText>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSelectEventPreset
{
public:
	FSelectEventPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSpecialEventPreset GetPreset() {
		return memory.read<struct FSpecialEventPreset>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPresetSelected
{
public:
	FOnPresetSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSpecialEventPreset GetPreset() {
		return memory.read<struct FSpecialEventPreset>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubRow
{
public:
	FGetSubRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRowName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FSubtitleRow GetDestination() {
		return memory.read<struct FSubtitleRow>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUpdatePanelMPCarGroup
{
public:
	FOnUpdatePanelMPCarGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMPCarGroup Getcar_group() {
		return memory.read<enum class EMPCarGroup>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInitializeTimeTable
{
public:
	FInitializeTimeTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getauto_singlecar() {
		return memory.read<bool>(m_addr + 0);
	}
	bool Getinit_breakdown() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadCarLapsForSession
{
public:
	FLoadCarLapsForSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getsession_index() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t Getcar_id() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadResultsForSession
{
public:
	FLoadResultsForSession(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getsession_index() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTimeTableItemUpdate
{
public:
	FOnTimeTableItemUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimeTableEntry GetEntry() {
		return memory.read<struct FTimeTableEntry>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFastLaneDistanceToPoint
{
public:
	FGetFastLaneDistanceToPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetPointLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FgetRollingStartMiddle
{
public:
	FgetRollingStartMiddle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAcTrackSpline GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AAcTrackSpline(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnClickedPanel
{
public:
	FOnClickedPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetoverrideTrack() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPanelSelected
{
public:
	FOnPanelSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTrackIdentityPanel Gettarget_panel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTrackIdentityPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteCustomPreset
{
public:
	FDeleteCustomPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCustomPresets
{
public:
	FGetCustomPresets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFileItem> GetReturnValue() {
		return memory.read<struct TArray<struct FFileItem>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveCustomPreset
{
public:
	FSaveCustomPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllScreenResolutions
{
public:
	FGetAllScreenResolutions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetResolutions() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxCarsVisible
{
public:
	FGetMaxCarsVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMirrorQualityLevel
{
public:
	FGetMirrorQualityLevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetReturnValue() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMotionBlurEnabled
{
public:
	FGetMotionBlurEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLaunchConsoleCMD
{
public:
	FLaunchConsoleCMD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCmd() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveSettings
{
public:
	FSaveSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSaveVideoSettings
{
public:
	FSaveVideoSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHDREnabled
{
public:
	FSetHDREnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSharpen
{
public:
	FSetSharpen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTestChangeScreenResolution
{
public:
	FTestChangeScreenResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool Getfullscreen() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FTestRequestResolutionChange
{
public:
	FTestRequestResolutionChange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetX() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetY() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class EWindowMode GetWindow() {
		return memory.read<enum class EWindowMode>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTestRevertVideoSettings
{
public:
	FTestRevertVideoSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateFromFile
{
public:
	FUpdateFromFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetWorld() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}
	struct APlayerController GetController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTemporalEnabled
{
public:
	FGetTemporalEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};