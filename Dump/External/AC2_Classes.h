#pragma once 
#include <AC2_Structs.h>
 
 
 
class UAC2WaterSpray
{
public:
	UAC2WaterSpray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystemComponent GetwaterSprayDrops[2]() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetbackSpray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetwaterSprayDetail[4]() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetwaterSprayFog() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UCurveFloat GetwaterCurveFog() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetWaterCurveFogChase() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetWaterCurveDetail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetFogSpeedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetDetailsSpeedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveVector GetDetailsSpeedVelMinCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct UCurveVector(ptr_addr);
	}
	struct UCurveVector GetDetailsSpeedVelMaxCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UCurveVector(ptr_addr);
	}
	struct UCurveFloat GetDropsSpeedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetChaseSpeedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseFocusedVelMinCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseFocusedVelMaxCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseFocusedAlphaLifeCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseNotFocusedRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseNotFocusedVelMinCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseNotFocusedVelMaxCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 360);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetfogChaseNotFocusedAlphaLifeCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChampLeaderboardItem
{
public:
	UChampLeaderboardItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnTimeTableItemFocused() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1512);
	}
	struct FMulticastInlineDelegate GetOnTimeTableItemForward() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1528);
	}
	struct FMulticastInlineDelegate GetOnTimeTableItemBackward() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1544);
	}
	struct UBorder GetborderMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UBorder(ptr_addr);
	}
	struct UImage GetimgPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPoints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTotalPoints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTeamName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarModelName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgMouseOver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UImage(ptr_addr);
	}
	struct UGenericMappedLabel GetCarCupLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UGenericMappedLabel(ptr_addr);
	}
	char GetCarCup() {
		return memory.read<char>(m_addr + 1640);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarPitstopManager
{
public:
	UAcCarPitstopManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinDistance() {
		return memory.read<float>(m_addr + 180);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 184);
	}
	float GetSecondaryDistance() {
		return memory.read<float>(m_addr + 188);
	}
	float GetMaxAngle() {
		return memory.read<float>(m_addr + 192);
	}
	float GetPushingSpeed() {
		return memory.read<float>(m_addr + 196);
	}
	float GetPushingAngularSpeed() {
		return memory.read<float>(m_addr + 200);
	}
	float GetOnSkateSpeed() {
		return memory.read<float>(m_addr + 204);
	}
	float GetOnSkateAngularSpeed() {
		return memory.read<float>(m_addr + 208);
	}
	float GetFakePitstopTime() {
		return memory.read<float>(m_addr + 212);
	}
	float GetSecondsToExtend() {
		return memory.read<float>(m_addr + 216);
	}
	float GetSecondsToBaseStartProcedure() {
		return memory.read<float>(m_addr + 220);
	}
	float GetSecondsToRaiseProcedure() {
		return memory.read<float>(m_addr + 224);
	}
	float GettargetHeight() {
		return memory.read<float>(m_addr + 228);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVideoOptionsPage
{
public:
	UVideoOptionsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UResolutionPopup Getpopup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UResolutionPopup(ptr_addr);
	}
	struct UScrollBox GetBasicOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UScrollBox(ptr_addr);
	}
	struct UVerticalBox GetMainOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UVerticalBox(ptr_addr);
	}
	struct UGenericSelectorItem GetResolutionItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFullscreenItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTripleScreenItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetVSyncItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetResolutionScaleItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetViewDistanceItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetShadowItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetShadowDistanceItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetShadowContact() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAntialiasingItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetEffectsItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPostProcessingItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFoliageItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTextureItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFrameLimitItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMirrorQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMirrorFramerateCap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsVisibilityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMotionBlurItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMotionBlurLevelItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAntialiasItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetLightAbsorptionItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetImageContrastItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetExposureGainItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetToneMappingItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetHdrColorGamutItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetUIFrameCap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetSaturationItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetSharpenItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPixelDensityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWorldScale() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMirrorDistance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMirrorResolutionItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAdvancedSharpenItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMaterialsQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTemporalUpsampleItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetVolumetricFogItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetBloomLevelItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetBloomQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFoliageLodQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetCameraDirtItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWhiteBalanceItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetCarLodQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetCircuitHlodItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetHdrOutputItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetHdrUiItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UMainSelectorItem GetPresetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UMainSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDLSSEnableItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDLSSQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDLSSSharpnessItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTAAGen5Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAMDFSREnableItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAMDFSRQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAMDFSRSharpnessItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UGenericSelectorItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTyreTemps01Widget
{
public:
	UTyreTemps01Widget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTyreTemps01ItemWidget GetitemTyreLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTyreTemps01ItemWidget(ptr_addr);
	}
	struct UTyreTemps01ItemWidget GetitemTyreLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTyreTemps01ItemWidget(ptr_addr);
	}
	struct UTyreTemps01ItemWidget GetitemTyreRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTyreTemps01ItemWidget(ptr_addr);
	}
	struct UTyreTemps01ItemWidget GetitemTyreRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTyreTemps01ItemWidget(ptr_addr);
	}
	struct UTextBlock GettxtPressureLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPressureLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPressureRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPressureRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTyreComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UTextBlock(ptr_addr);
	}
	float GetidealPressureDry() {
		return memory.read<float>(m_addr + 1696);
	}
	float GetidealPressureWet() {
		return memory.read<float>(m_addr + 1700);
	}
	float GetminPressureDelta() {
		return memory.read<float>(m_addr + 1704);
	}
	float GetmaxPressureDelta() {
		return memory.read<float>(m_addr + 1708);
	}
	float GetmaxScaleOfMiddleBar() {
		return memory.read<float>(m_addr + 1712);
	}
	float GetminScaleOfMiddleBar() {
		return memory.read<float>(m_addr + 1716);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcChildHUD
{
public:
	AAcChildHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ACarAvatar GetCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct ACarAvatar(ptr_addr);
	}
	struct ACarAvatar GetFocusedCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct ACarAvatar(ptr_addr);
	}
	struct ACarAvatar GetPlayerCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct ACarAvatar(ptr_addr);
	}
	struct UFont GetHUDFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UFont(ptr_addr);
	}
	struct UFont GetHUDFontBold() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UFont(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplayManager
{
public:
	UReplayManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReplayHighlightEvents GethighLightManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 4904);
		return struct UReplayHighlightEvents(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAc2TelemHUD
{
public:
	AAc2TelemHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAcAnimInstanceBase
{
public:
	UAcAnimInstanceBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsInitialized() {
		return memory.read<bool>(m_addr + 696);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcExtendedButton
{
public:
	UAcExtendedButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAcPitstopAnimNotify
{
public:
	UAcPitstopAnimNotify(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetNotifyIndex() {
		return memory.read<char>(m_addr + 56);
	}
	char GetNotifyTyreIndex() {
		return memory.read<char>(m_addr + 57);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAC2TyreSmoke
{
public:
	UAC2TyreSmoke(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UParticleSystemComponent> GetSmoke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct TArray<struct UParticleSystemComponent>(ptr_addr);
	}
	struct TArray<struct UParticleSystemComponent> Getdirt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct TArray<struct UParticleSystemComponent>(ptr_addr);
	}
	struct TArray<struct UParticleSystemComponent> Getstone() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct TArray<struct UParticleSystemComponent>(ptr_addr);
	}
	struct UCurveFloat Getrate1Curve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat Getrate2Curve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetsmokeRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetstonesRateCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetsmokeBuildCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetsmokeCoolCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UCurveFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcInputDeviceManager
{
public:
	UAcInputDeviceManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsDetectionMode() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetIsActivityMode() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetShouldTriggerCommands() {
		return memory.read<bool>(m_addr + 42);
	}
	struct FMulticastInlineDelegate GetButtonReleaseEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 512);
	}
	struct FMulticastInlineDelegate GetButtonPressEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 528);
	}
	struct FMulticastInlineDelegate GetDeviceObjectStateChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 544);
	}
	float GetdetectionDeltaThreshold() {
		return memory.read<float>(m_addr + 560);
	}
	bool GethasInit() {
		return memory.read<bool>(m_addr + 564);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCameraTranslator
{
public:
	UAcCameraTranslator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAcAnimNotify
{
public:
	UAcAnimNotify(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECarAnimation GetCarAnimation() {
		return memory.read<enum class ECarAnimation>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcGameInstance
{
public:
	UAcGameInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcInfoManager GetInfoManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 424);
		return struct UAcInfoManager(ptr_addr);
	}
	struct UAcPresetManager GetPresetManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct UAcPresetManager(ptr_addr);
	}
	struct UAcCarGraphicData GetCarGraphicData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 440);
		return struct UAcCarGraphicData(ptr_addr);
	}
	struct USubtitlesManager GetSubtitlesManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 448);
		return struct USubtitlesManager(ptr_addr);
	}
	struct UMenuManager GetMenuManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 456);
		return struct UMenuManager(ptr_addr);
	}
	struct UCareerState GetCareerState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 464);
		return struct UCareerState(ptr_addr);
	}
	struct UChampState GetChampState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 472);
		return struct UChampState(ptr_addr);
	}
	struct FName GetMenuLevel() {
		return memory.read<struct FName>(m_addr + 480);
	}
	UUserWidget GetLoadingWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 488);
		return UUserWidget(ptr_addr);
	}
	struct UTexture2D GetVRSplashLaunchGame() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 496);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetVRSplashStartSessions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetVRSplashReturnToMenu() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct UTexture2D(ptr_addr);
	}
	UUserWidget GetStartSessionsLoadingClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetLaunchGameLoadingClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetReturnToMenuLoadingClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return UUserWidget(ptr_addr);
	}
	UObject GetPageToLoadOnStart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return UObject(ptr_addr);
	}
	struct UUserWidget GetLoadingWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UUserWidget(ptr_addr);
	}
	struct FDebugStruct GetDebugStruct() {
		return memory.read<struct FDebugStruct>(m_addr + 560);
	}
	struct FACVRSettings GetVRSettings() {
		return memory.read<struct FACVRSettings>(m_addr + 1136);
	}
	struct FACNameplateSettings GetNPSettings() {
		return memory.read<struct FACNameplateSettings>(m_addr + 1180);
	}
	struct UTextureRenderTarget2D GetWidgetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	struct UAcStereoLayerComponent GetStereoLayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1224);
		return struct UAcStereoLayerComponent(ptr_addr);
	}
	bool GetIsFirstLaunch() {
		return memory.read<bool>(m_addr + 1232);
	}
	struct UFMODEvent GetguiEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UFMODEvent(ptr_addr);
	}
	struct UFMODEvent GetmusicEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UFMODEvent(ptr_addr);
	}
	struct UAcInputDeviceManager GetInputDeviceManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UAcInputDeviceManager(ptr_addr);
	}
	struct UClientAvatar GetClientAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UClientAvatar(ptr_addr);
	}
	struct FMulticastInlineDelegate GetonChatMessageReceived() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1272);
	}
	struct FString GetsavegameSlot() {
		return memory.read<struct FString>(m_addr + 1400);
	}
	enum class ESeasonType GetSeasonType() {
		return memory.read<enum class ESeasonType>(m_addr + 1760);
	}
	int32_t GettrackYear() {
		return memory.read<int32_t>(m_addr + 1764);
	}
	struct UAcMenuData GetMenuData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2600);
		return struct UAcMenuData(ptr_addr);
	}
	struct UOnlineServices GetOnlineServices() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2608);
		return struct UOnlineServices(ptr_addr);
	}
	struct UAudioManager GetAudioManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2616);
		return struct UAudioManager(ptr_addr);
	}
	struct UFMODBank GetMasterBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2624);
		return struct UFMODBank(ptr_addr);
	}
	struct UFMODBank GetGuiBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2632);
		return struct UFMODBank(ptr_addr);
	}
	struct UFMODBank GetMusicBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2640);
		return struct UFMODBank(ptr_addr);
	}
	struct UAcUserOptionsManager GetUserOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2648);
		return struct UAcUserOptionsManager(ptr_addr);
	}
	struct UGamePlatformServices GetGamePlatformServices() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2656);
		return struct UGamePlatformServices(ptr_addr);
	}
	struct TArray<struct FDriverInfo> GetDefaultCustomDrivers() {
		return memory.read<struct TArray<struct FDriverInfo>>(m_addr + 2664);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailSignalItem
{
public:
	URatingDetailSignalItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtObjective() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgSignal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcAssistController
{
public:
	UAcAssistController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USpecialEvents
{
public:
	USpecialEvents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetrequestedOnlineRefId() {
		return memory.read<int32_t>(m_addr + 1320);
	}
	struct FSpecialEventPreset GetSelectedEvent() {
		return memory.read<struct FSpecialEventPreset>(m_addr + 1328);
	}
	struct FSpecialEventUIData GetSelectedEventUIData() {
		return memory.read<struct FSpecialEventUIData>(m_addr + 1904);
	}
	struct UOnlineServices GetOnlineServices() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3488);
		return struct UOnlineServices(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcSteeringWheelAnimations
{
public:
	UAcSteeringWheelAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsGearUp() {
		return memory.read<bool>(m_addr + 712);
	}
	bool GetbIsGearDown() {
		return memory.read<bool>(m_addr + 713);
	}
	struct TArray<struct FSwitchAnimation> GetSwitches() {
		return memory.read<struct TArray<struct FSwitchAnimation>>(m_addr + 720);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGamePlatformServices
{
public:
	UGamePlatformServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioManager
{
public:
	UAudioManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AFMODAmbientSound> GetAmbientSounds() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct AFMODAmbientSound>(ptr_addr);
	}
	struct TArray<struct AZoneAmbientSound> GetZoneAmbientSounds() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct AZoneAmbientSound>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCameraComponent
{
public:
	UAcCameraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetShadowExponent() {
		return memory.read<float>(m_addr + 1984);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDriverSwapInfoWidget
{
public:
	UDriverSwapInfoWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVerticalBox GetvBoxDrivers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UVerticalBox(ptr_addr);
	}
	UDriverSwapInfoEntry GetChildEntryClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return UDriverSwapInfoEntry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcInfoManager
{
public:
	UAcInfoManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetDriverInfos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetModelInfos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetBrandInfos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetNationalityInfos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetCommonTextsInfos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetMeteoInfos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UDataTable(ptr_addr);
	}
	struct TArray<struct FSeasonDatatable> GetdriverAssets() {
		return memory.read<struct TArray<struct FSeasonDatatable>>(m_addr + 96);
	}
	struct TArray<struct FSeasonDatatable> GetcarEntryAssets() {
		return memory.read<struct TArray<struct FSeasonDatatable>>(m_addr + 112);
	}
	struct TArray<struct FSeasonDatatable> GetcompetitionAssets() {
		return memory.read<struct TArray<struct FSeasonDatatable>>(m_addr + 128);
	}
	struct UDataTable GetcircuitAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetcircuitSpeedDataAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetcircuitDataAssetEx() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetcircuitBopDataAssetEx() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UDataTable(ptr_addr);
	}
	struct TMap<enum class ECarModelType, UObject> GetcarModelObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TMap<enum class ECarModelType, UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URacePageBase
{
public:
	URacePageBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPausePageContainer GetMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UPausePageContainer(ptr_addr);
	}
	float GetLightBackgroundBlur() {
		return memory.read<float>(m_addr + 1328);
	}
	float GetStrongBackgroundBlur() {
		return memory.read<float>(m_addr + 1332);
	}
	bool GetIsStrongBlurInUse() {
		return memory.read<bool>(m_addr + 1336);
	}
	struct FText GetPauseTitleText() {
		return memory.read<struct FText>(m_addr + 1344);
	}
	struct FText GetPreSessionTitleText() {
		return memory.read<struct FText>(m_addr + 1368);
	}
	struct FText GetPostSessionTitleText() {
		return memory.read<struct FText>(m_addr + 1392);
	}
	struct FText GetStartSessionString() {
		return memory.read<struct FText>(m_addr + 1416);
	}
	UGenericBarItem GetWdgMenuItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return UGenericBarItem(ptr_addr);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct AAcRaceGameMode(ptr_addr);
	}
	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct APlayerController(ptr_addr);
	}
	struct UAcPanelBase GetDefaultFocusWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2920);
		return struct UAcPanelBase(ptr_addr);
	}
	bool GetFocusFirstWidgetOnRedraw() {
		return memory.read<bool>(m_addr + 2928);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarDigitalDisplay
{
public:
	UAcCarDigitalDisplay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCarDigitalDisplayPage> GetPages() {
		return memory.read<struct TArray<struct FCarDigitalDisplayPage>>(m_addr + 608);
	}
	bool GetbIsDashboardDisplay() {
		return memory.read<bool>(m_addr + 624);
	}
	struct FVector2D GetDrawSize() {
		return memory.read<struct FVector2D>(m_addr + 628);
	}
	struct ACarAvatar GetCarAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct ACarAvatar(ptr_addr);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct AAcRaceGameMode(ptr_addr);
	}
	char GetDisplayIndex() {
		return memory.read<char>(m_addr + 656);
	}
	struct TArray<struct FCarDigitalDisplayTimeTextBlock> GetTimeTextBlocks() {
		return memory.read<struct TArray<struct FCarDigitalDisplayTimeTextBlock>>(m_addr + 664);
	}
	struct TArray<struct FCarDigitalDisplayNumberTextBlock> GetNumberTextBlocks() {
		return memory.read<struct TArray<struct FCarDigitalDisplayNumberTextBlock>>(m_addr + 680);
	}
	struct TArray<struct FCarDigitalDisplayProgressBar> GetProgressBars() {
		return memory.read<struct TArray<struct FCarDigitalDisplayProgressBar>>(m_addr + 696);
	}
	struct TArray<struct FCarDigitalDisplayProgressMI> GetProgressMI() {
		return memory.read<struct TArray<struct FCarDigitalDisplayProgressMI>>(m_addr + 712);
	}
	struct TArray<struct FCarDigitalDisplayCanvas> GetPopUps() {
		return memory.read<struct TArray<struct FCarDigitalDisplayCanvas>>(m_addr + 728);
	}
	struct TArray<struct FCarDigitalDisplayNeedle> GetNeedles() {
		return memory.read<struct TArray<struct FCarDigitalDisplayNeedle>>(m_addr + 744);
	}
	struct TArray<struct FCarDigitalDisplayLight> Getlights() {
		return memory.read<struct TArray<struct FCarDigitalDisplayLight>>(m_addr + 760);
	}
	struct UImage GetBlack_Mask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UImage(ptr_addr);
	}
	struct FLinearColor GetOffColor() {
		return memory.read<struct FLinearColor>(m_addr + 784);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarAnimations
{
public:
	UAcCarAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnCarAnimationEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 176);
	}
	struct ACarAvatar GetCarAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct ACarAvatar(ptr_addr);
	}
	float GetLeftFootFrameStep() {
		return memory.read<float>(m_addr + 200);
	}
	float GetRightFootFrameStep() {
		return memory.read<float>(m_addr + 204);
	}
	float GetHalfSteerAnimationSeconds() {
		return memory.read<float>(m_addr + 208);
	}
	float GetMaximumSteerAnimationRotation() {
		return memory.read<float>(m_addr + 212);
	}
	float GetHelmetGForceFilter() {
		return memory.read<float>(m_addr + 216);
	}
	struct FVector2D GetHelmetGForceXMaxRange() {
		return memory.read<struct FVector2D>(m_addr + 220);
	}
	struct FVector2D GetHelmetGForceYMaxRange() {
		return memory.read<struct FVector2D>(m_addr + 228);
	}
	float GetFeetFilter() {
		return memory.read<float>(m_addr + 236);
	}
	float GetRightFootPositionForAnimation() {
		return memory.read<float>(m_addr + 240);
	}
	struct FVector2D GetLeftFootPositionForAnimation() {
		return memory.read<struct FVector2D>(m_addr + 244);
	}
	float GetDriverSteerRotation() {
		return memory.read<float>(m_addr + 252);
	}
	struct FVector GetHelmetGForceForAnimation() {
		return memory.read<struct FVector>(m_addr + 256);
	}
	bool GetShiftUpForAnimation() {
		return memory.read<bool>(m_addr + 268);
	}
	bool GetShiftDownForAnimation() {
		return memory.read<bool>(m_addr + 269);
	}
	float GetLeftDoorTime() {
		return memory.read<float>(m_addr + 272);
	}
	float GetRightDoorTime() {
		return memory.read<float>(m_addr + 276);
	}
	struct TArray<struct FVector2D> GetWiperIntervalsAndRate() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 280);
	}
	float GetCarSteerRotation() {
		return memory.read<float>(m_addr + 296);
	}
	float GetClutchPedalPosition() {
		return memory.read<float>(m_addr + 300);
	}
	float GetBrakePedalPosition() {
		return memory.read<float>(m_addr + 304);
	}
	float GetGasPedalPosition() {
		return memory.read<float>(m_addr + 308);
	}
	struct TArray<struct FCarLoosePart> GetCarLooseParts() {
		return memory.read<struct TArray<struct FCarLoosePart>>(m_addr + 312);
	}
	struct TArray<struct FCarWiper> GetWipers() {
		return memory.read<struct TArray<struct FCarWiper>>(m_addr + 328);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarBeltAnimations
{
public:
	UAcCarBeltAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsBeltOn() {
		return memory.read<bool>(m_addr + 712);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcSpotter
{
public:
	AAcSpotter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAudioComms GetAudioComms() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UAudioComms(ptr_addr);
	}
	struct TMap<enum class EAudioCommsDataType, struct FCommLogData> GetaudioPlayedData() {
		return memory.read<struct TMap<enum class EAudioCommsDataType, struct FCommLogData>>(m_addr + 696);
	}
	struct TMap<enum class EAudioCommsLevel, struct FCommLevelValues> GetlevelValues() {
		return memory.read<struct TMap<enum class EAudioCommsLevel, struct FCommLevelValues>>(m_addr + 776);
	}
	struct TMap<enum class EAudioCommsGuidCategory, struct FGuid> GetfGuids() {
		return memory.read<struct TMap<enum class EAudioCommsGuidCategory, struct FGuid>>(m_addr + 856);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTrackSelectionPage
{
public:
	UTrackSelectionPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCircuitName() {
		return memory.read<struct FName>(m_addr + 1328);
	}
	bool GetHorizontalNavigation() {
		return memory.read<bool>(m_addr + 1336);
	}
	struct UTextBlock GettxtCircuitName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCircuitCountry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCircuitLengthValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCornersValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHistory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgCircuitCountryFlag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgTrackMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgPreview01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgPreview02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgPreview03() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgPreview04() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtRealRecord() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPersonalBest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPbCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetCircuitListSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTrackPreviewPanel
{
public:
	UTrackPreviewPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAcGlassDropletsComponent
{
public:
	UAcGlassDropletsComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 176);
	}
	struct FString GetMeshTag() {
		return memory.read<struct FString>(m_addr + 184);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FName GetMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 208);
	}
	bool GetbInternalView() {
		return memory.read<bool>(m_addr + 216);
	}
	int32_t GetMinRandomDrops() {
		return memory.read<int32_t>(m_addr + 220);
	}
	int32_t GetMaxRandomDrops() {
		return memory.read<int32_t>(m_addr + 224);
	}
	struct UCurveFloat GetRainIntensityNewDropsCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetRainIntensityStaticDropsCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UCurveFloat(ptr_addr);
	}
	float GetEvaporationFactor() {
		return memory.read<float>(m_addr + 248);
	}
	float GetEvaporationMaxTime() {
		return memory.read<float>(m_addr + 252);
	}
	float GetGForceMultiplier() {
		return memory.read<float>(m_addr + 256);
	}
	float GetVelocityMultiplier() {
		return memory.read<float>(m_addr + 260);
	}
	float GetGravityMultiplier() {
		return memory.read<float>(m_addr + 264);
	}
	float GetWiperAccumMultiplier() {
		return memory.read<float>(m_addr + 268);
	}
	float GetMassLeavePerc() {
		return memory.read<float>(m_addr + 272);
	}
	float GetMassEnterPerc() {
		return memory.read<float>(m_addr + 276);
	}
	bool GetbFrameLimited() {
		return memory.read<bool>(m_addr + 280);
	}
	int32_t GetFPS() {
		return memory.read<int32_t>(m_addr + 284);
	}
	struct UTexture2D GetAreaMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetNormalsMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UTexture2D(ptr_addr);
	}
	struct UTextureRenderTarget2D GetRTGrid() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	struct UTextureRenderTarget2D GetRTNormals() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	struct UTexture2D GetExtDropsMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetExtStreaksMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UTexture2D(ptr_addr);
	}
	bool GetbLogEnabled() {
		return memory.read<bool>(m_addr + 336);
	}
	struct UTexture2D GetDRSTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct UTexture2D(ptr_addr);
	}
	struct UCurveLinearColor GetDRSCurveBasedOnSunElev() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return struct UCurveLinearColor(ptr_addr);
	}
	struct UCurveLinearColor GetDRSCurveBasedOnCloudDensity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 360);
		return struct UCurveLinearColor(ptr_addr);
	}
	float GetDirtStrength() {
		return memory.read<float>(m_addr + 368);
	}
	float GetReflectionStrength() {
		return memory.read<float>(m_addr + 372);
	}
	float GetScratchesStrength() {
		return memory.read<float>(m_addr + 376);
	}
	float GetSunBehindValue() {
		return memory.read<float>(m_addr + 380);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarDigitalDisplayWrapper
{
public:
	UAcCarDigitalDisplayWrapper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCanvasPanel GetMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UCanvasPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcPanelBase
{
public:
	UAcPanelBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, UAcPageBase> GetPageClasses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct TMap<struct FName, UAcPageBase>(ptr_addr);
	}
	bool GetIsActive() {
		return memory.read<bool>(m_addr + 696);
	}
	bool GetIsNavigable() {
		return memory.read<bool>(m_addr + 697);
	}
	bool GetcanHandleForward() {
		return memory.read<bool>(m_addr + 698);
	}
	bool GetcanHandleBackward() {
		return memory.read<bool>(m_addr + 699);
	}
	bool GetOnlyNavToChildrenWhileHighlighted() {
		return memory.read<bool>(m_addr + 700);
	}
	struct FText GetPageInfo() {
		return memory.read<struct FText>(m_addr + 704);
	}
	struct FString GetPanelGroup() {
		return memory.read<struct FString>(m_addr + 728);
	}
	int32_t GetPanelIndex() {
		return memory.read<int32_t>(m_addr + 744);
	}
	int32_t GetUpDirectionIndex() {
		return memory.read<int32_t>(m_addr + 748);
	}
	int32_t GetLeftDirectionIndex() {
		return memory.read<int32_t>(m_addr + 752);
	}
	int32_t GetRightDirectionIndex() {
		return memory.read<int32_t>(m_addr + 756);
	}
	int32_t GetDownDirectionIndex() {
		return memory.read<int32_t>(m_addr + 760);
	}
	int32_t GetShoulderLeftDirectionIndex() {
		return memory.read<int32_t>(m_addr + 764);
	}
	int32_t GetShoulderRightDirectionIndex() {
		return memory.read<int32_t>(m_addr + 768);
	}
	struct UTexture2D GetNormalImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetHoveredImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UTexture2D(ptr_addr);
	}
	struct UUserWidget GetSetupElement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UUserWidget(ptr_addr);
	}
	struct FName GetSetupElementName() {
		return memory.read<struct FName>(m_addr + 800);
	}
	struct TArray<struct FText> GetHelpInfos() {
		return memory.read<struct TArray<struct FText>>(m_addr + 808);
	}
	bool GetbHasFocus() {
		return memory.read<bool>(m_addr + 828);
	}
	bool GethandleForwardOnRelease() {
		return memory.read<bool>(m_addr + 852);
	}
	bool GetBubbleEventsToParent() {
		return memory.read<bool>(m_addr + 853);
	}
	struct TArray<struct UAcPanelBase> Getpanels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct TArray<struct UAcPanelBase>(ptr_addr);
	}
	struct UUserWidget GetParentWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UUserWidget(ptr_addr);
	}
	struct UAcPanelBase GetParentPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPageBase GetParentPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UAcPageBase(ptr_addr);
	}
	struct UAcPanelBase GetCurrentPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UAcPanelBase(ptr_addr);
	}
	bool GetwasClicked() {
		return memory.read<bool>(m_addr + 1384);
	}
	bool GetfocusOnMouseOver() {
		return memory.read<bool>(m_addr + 1385);
	}
	bool GetaudioOnRollover() {
		return memory.read<bool>(m_addr + 1386);
	}
	bool GetaudioOnForward() {
		return memory.read<bool>(m_addr + 1387);
	}
	struct FMulticastInlineDelegate GetOnForward() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1392);
	}
	struct FMulticastInlineDelegate GetOnBackward() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1408);
	}
	struct FMulticastInlineDelegate GetOnFocus() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1424);
	}
	struct FMulticastInlineDelegate GetOnBlur() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1440);
	}
	struct FMulticastInlineDelegate GetOnMouseFocus() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1456);
	}
	struct FMulticastInlineDelegate GetOnForwardM() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1472);
	}
	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UAcGameInstance(ptr_addr);
	}
	bool GetisHighlighted() {
		return memory.read<bool>(m_addr + 1497);
	}
	bool GetrequireHighlightForInputHandling() {
		return memory.read<bool>(m_addr + 1498);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarExteriorAnimations
{
public:
	UAcCarExteriorAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetCarWiperPositions() {
		return memory.read<struct TArray<float>>(m_addr + 712);
	}
	float GetCarLeftDoor() {
		return memory.read<float>(m_addr + 728);
	}
	float GetCarRightDoor() {
		return memory.read<float>(m_addr + 732);
	}
	struct TArray<struct FTransform> GetWheels() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 736);
	}
	struct TArray<struct FTransform> GetSuspensions() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 752);
	}
	struct TMap<enum class EDamagePart, struct FDamageBone> GetDamageBones() {
		return memory.read<struct TMap<enum class EDamagePart, struct FDamageBone>>(m_addr + 768);
	}
	bool GetbIsPhysicsDriven() {
		return memory.read<bool>(m_addr + 848);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcParticles
{
public:
	AAcParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UProceduralMeshComponent GetTestMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UProceduralMeshComponent(ptr_addr);
	}
	struct UMaterial GetTestMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UMaterial(ptr_addr);
	}
	struct UMaterialExpressionConstant3Vector GetBaseColorFactorNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UMaterialExpressionConstant3Vector(ptr_addr);
	}
	struct TArray<struct UParticleSystemComponent> GetParticlesArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct TArray<struct UParticleSystemComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAIDataAsset
{
public:
	UAIDataAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetGearChangeDownPerc() {
		return memory.read<float>(m_addr + 48);
	}
	float GetsteerGain() {
		return memory.read<float>(m_addr + 52);
	}
	float GetSteerMinLookahead() {
		return memory.read<float>(m_addr + 56);
	}
	float GetUndersteerHint() {
		return memory.read<float>(m_addr + 60);
	}
	float GetTyresHint() {
		return memory.read<float>(m_addr + 64);
	}
	float GetBrakeHint() {
		return memory.read<float>(m_addr + 68);
	}
	float GetAeroHint() {
		return memory.read<float>(m_addr + 72);
	}
	float GetGasHint() {
		return memory.read<float>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarGraphicData
{
public:
	UAcCarGraphicData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetSkinTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetRimTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetAuxLightMeshes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetNumberPanelMeshes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetStickerSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetColorTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetHelmetTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetGlovesTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetSuitTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetHelmetGlassMaterialTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetTeamTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetSkinMaterialTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetRimMaterialTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetSponsorTextures() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetbannerTemplates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UDataTable(ptr_addr);
	}
	struct TArray<struct FSeasonDataAsset> GetSeasonOutfit() {
		return memory.read<struct TArray<struct FSeasonDataAsset>>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiplayerPageBase
{
public:
	UMultiplayerPageBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UAcPageBase GetQuickjoinCallbackClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return UAcPageBase(ptr_addr);
	}
	struct UTeamSelectionColumnPanel GetbtnCarSelection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UTeamSelectionColumnPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcControllerIcon
{
public:
	UAcControllerIcon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EControllerActionType GetUIActionType() {
		return memory.read<enum class EControllerActionType>(m_addr + 528);
	}
	bool GetbIsRacePage() {
		return memory.read<bool>(m_addr + 529);
	}

private:
	std::uint64_t m_addr = 0;
};


class UShowroom
{
public:
	UShowroom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ALevelSequenceActor GetShowroomSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct ALevelSequenceActor(ptr_addr);
	}
	struct FCarInfo GetNewCustomCarDefaults() {
		return memory.read<struct FCarInfo>(m_addr + 1328);
	}
	struct TArray<struct FSkinTemplate> GetSkinTemplatesCache() {
		return memory.read<struct TArray<struct FSkinTemplate>>(m_addr + 1552);
	}
	struct TMap<struct FName, struct FCarInfo> GetEntryMap() {
		return memory.read<struct TMap<struct FName, struct FCarInfo>>(m_addr + 1568);
	}
	struct TMap<struct FName, struct FDriverInfo> GetDriverMap() {
		return memory.read<struct TMap<struct FName, struct FDriverInfo>>(m_addr + 1648);
	}
	struct TArray<struct FModelInfo> GetModelCache() {
		return memory.read<struct TArray<struct FModelInfo>>(m_addr + 1728);
	}
	struct TArray<struct FSkinTemplate> GetVariantCache() {
		return memory.read<struct TArray<struct FSkinTemplate>>(m_addr + 1744);
	}
	struct TArray<int32_t> GetVariantKeys() {
		return memory.read<struct TArray<int32_t>>(m_addr + 1760);
	}
	struct TArray<struct FTeamInfo> GetTeamCache() {
		return memory.read<struct TArray<struct FTeamInfo>>(m_addr + 1776);
	}
	struct TArray<struct FDriverInfo> GetDriverCache() {
		return memory.read<struct TArray<struct FDriverInfo>>(m_addr + 1792);
	}
	struct TArray<struct FName> GetEntryCache() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1808);
	}
	struct TArray<struct FCarInfo> GetCarCache() {
		return memory.read<struct TArray<struct FCarInfo>>(m_addr + 1824);
	}
	struct TArray<enum class ECarGroup> GetAvailableCarGroups() {
		return memory.read<struct TArray<enum class ECarGroup>>(m_addr + 1840);
	}
	struct TArray<enum class ESeasonType> GetAvailableSeasonTypes() {
		return memory.read<struct TArray<enum class ESeasonType>>(m_addr + 1856);
	}
	struct AActor GetShowroomStage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct AActor(ptr_addr);
	}
	struct ACameraActor GetShowroomCam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1880);
		return struct ACameraActor(ptr_addr);
	}
	bool GetisMultiPlayer() {
		return memory.read<bool>(m_addr + 1888);
	}
	bool GetisChamp() {
		return memory.read<bool>(m_addr + 1889);
	}
	bool GetisCustomChamp() {
		return memory.read<bool>(m_addr + 1890);
	}
	bool GetisOpenSeries() {
		return memory.read<bool>(m_addr + 1891);
	}
	bool GetisViewOnly() {
		return memory.read<bool>(m_addr + 1892);
	}
	bool GetnoAutoFilter() {
		return memory.read<bool>(m_addr + 1893);
	}
	bool GetallowCarGroupFilter() {
		return memory.read<bool>(m_addr + 1894);
	}
	bool GetallowSeasonFilter() {
		return memory.read<bool>(m_addr + 1895);
	}
	struct FCompetitionList GetCompetitionList() {
		return memory.read<struct FCompetitionList>(m_addr + 1896);
	}
	struct FCompetitionList GetCustomCompetitionList() {
		return memory.read<struct FCompetitionList>(m_addr + 1928);
	}
	struct FBrandInfo GetcurrentBrandInfo() {
		return memory.read<struct FBrandInfo>(m_addr + 1960);
	}
	struct FModelInfo GetcurrentModelInfo() {
		return memory.read<struct FModelInfo>(m_addr + 2064);
	}
	struct FCarInfo GetcurrentCarInfo() {
		return memory.read<struct FCarInfo>(m_addr + 2488);
	}
	struct FTeamInfo GetcurrentTeamInfo() {
		return memory.read<struct FTeamInfo>(m_addr + 2712);
	}
	struct FDriverInfo GetcurrentDriverInfo() {
		return memory.read<struct FDriverInfo>(m_addr + 2768);
	}
	struct FName GetcurrentCarName() {
		return memory.read<struct FName>(m_addr + 3008);
	}
	struct FName GetcurrentDriverName() {
		return memory.read<struct FName>(m_addr + 3016);
	}
	struct FSkinTemplate GetcurrentSkin() {
		return memory.read<struct FSkinTemplate>(m_addr + 3024);
	}
	struct FName GetoriginalCarName() {
		return memory.read<struct FName>(m_addr + 3096);
	}
	struct FName GetoriginalDriverName() {
		return memory.read<struct FName>(m_addr + 3104);
	}
	enum class EShowroomCarFilterType GetactiveFilter() {
		return memory.read<enum class EShowroomCarFilterType>(m_addr + 3112);
	}
	enum class ECarGroup GetactiveCarGroupFilter() {
		return memory.read<enum class ECarGroup>(m_addr + 3113);
	}
	enum class ESeasonType GetactiveSeasonFilter() {
		return memory.read<enum class ESeasonType>(m_addr + 3114);
	}
	enum class ECarModelType GetcurrentlyVisibleModel() {
		return memory.read<enum class ECarModelType>(m_addr + 3115);
	}
	struct FName GetcurrentlyVisibleEntry() {
		return memory.read<struct FName>(m_addr + 3116);
	}
	struct FCarInfo GetcurrentlyVisibleCarInfo() {
		return memory.read<struct FCarInfo>(m_addr + 3128);
	}
	struct FModelInfo GetcurrentlyVisibleModelInfo() {
		return memory.read<struct FModelInfo>(m_addr + 3352);
	}
	struct TMap<enum class EMPCarGroup, struct FName> GetMPCarGroupMap() {
		return memory.read<struct TMap<enum class EMPCarGroup, struct FName>>(m_addr + 3776);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarInteriorAnimations
{
public:
	UAcCarInteriorAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCarLeftDoor() {
		return memory.read<float>(m_addr + 712);
	}
	float GetCarRightDoor() {
		return memory.read<float>(m_addr + 716);
	}
	float GetGasPressure() {
		return memory.read<float>(m_addr + 720);
	}
	float GetBrakePressure() {
		return memory.read<float>(m_addr + 724);
	}
	float GetClutchPressure() {
		return memory.read<float>(m_addr + 728);
	}
	float GetSteerRotation() {
		return memory.read<float>(m_addr + 732);
	}
	float GetFlipPosition() {
		return memory.read<float>(m_addr + 736);
	}
	float GetIgnitionPosition() {
		return memory.read<float>(m_addr + 740);
	}
	float GetPowerPosition() {
		return memory.read<float>(m_addr + 744);
	}
	float GetRainPosition() {
		return memory.read<float>(m_addr + 748);
	}
	float GetLightPosition() {
		return memory.read<float>(m_addr + 752);
	}
	struct TArray<struct FSwitchAnimation> GetSwitches() {
		return memory.read<struct TArray<struct FSwitchAnimation>>(m_addr + 760);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarLightingSystem
{
public:
	UAcCarLightingSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCarLightStage GetSprintDayLights() {
		return memory.read<struct FCarLightStage>(m_addr + 176);
	}
	struct FCarLightStage GetSprintHighBeam() {
		return memory.read<struct FCarLightStage>(m_addr + 192);
	}
	struct FCarLightStage GetSprintBrakes() {
		return memory.read<struct FCarLightStage>(m_addr + 208);
	}
	struct FCarLightStage GetSprintEndurance() {
		return memory.read<struct FCarLightStage>(m_addr + 224);
	}
	struct FCarLightStage GetSprintFlashing() {
		return memory.read<struct FCarLightStage>(m_addr + 240);
	}
	struct FCarLightStage GetSprintPitLimiter() {
		return memory.read<struct FCarLightStage>(m_addr + 256);
	}
	struct FCarLightStage GetSprintRain() {
		return memory.read<struct FCarLightStage>(m_addr + 272);
	}
	struct FCarLightStage GetSprintDirectionLightLeft() {
		return memory.read<struct FCarLightStage>(m_addr + 288);
	}
	struct FCarLightStage GetSprintDirectionLightRight() {
		return memory.read<struct FCarLightStage>(m_addr + 304);
	}
	struct FCarLightStage GetEnduranceDayLights() {
		return memory.read<struct FCarLightStage>(m_addr + 320);
	}
	struct FCarLightStage GetEnduranceHighBeam() {
		return memory.read<struct FCarLightStage>(m_addr + 336);
	}
	struct FCarLightStage GetEnduranceBrakes() {
		return memory.read<struct FCarLightStage>(m_addr + 352);
	}
	struct FCarLightStage GetEnduranceEndurance() {
		return memory.read<struct FCarLightStage>(m_addr + 368);
	}
	struct FCarLightStage GetEnduranceFlashing() {
		return memory.read<struct FCarLightStage>(m_addr + 384);
	}
	struct FCarLightStage GetEndurancePitLimiter() {
		return memory.read<struct FCarLightStage>(m_addr + 400);
	}
	struct FCarLightStage GetEnduranceRain() {
		return memory.read<struct FCarLightStage>(m_addr + 416);
	}
	struct FCarLightStage GetEnduranceDirectionLightLeft() {
		return memory.read<struct FCarLightStage>(m_addr + 432);
	}
	struct FCarLightStage GetEnduranceDirectionLightRight() {
		return memory.read<struct FCarLightStage>(m_addr + 448);
	}
	struct FCarLightStage GetDayLights() {
		return memory.read<struct FCarLightStage>(m_addr + 464);
	}
	struct FCarLightStage GetHighBeam() {
		return memory.read<struct FCarLightStage>(m_addr + 480);
	}
	struct FCarLightStage GetBrakes() {
		return memory.read<struct FCarLightStage>(m_addr + 496);
	}
	struct FCarLightStage GetEndurance() {
		return memory.read<struct FCarLightStage>(m_addr + 512);
	}
	struct FCarLightStage GetFlashing() {
		return memory.read<struct FCarLightStage>(m_addr + 528);
	}
	struct FCarLightStage GetPitLimiter() {
		return memory.read<struct FCarLightStage>(m_addr + 544);
	}
	struct FCarLightStage GetRain() {
		return memory.read<struct FCarLightStage>(m_addr + 560);
	}
	struct FCarLightStage GetDirectionLightLeft() {
		return memory.read<struct FCarLightStage>(m_addr + 576);
	}
	struct FCarLightStage GetDirectionLightRight() {
		return memory.read<struct FCarLightStage>(m_addr + 592);
	}
	float GetminSpeedDamage() {
		return memory.read<float>(m_addr + 608);
	}
	float GetmaxSpeedDamage() {
		return memory.read<float>(m_addr + 612);
	}
	bool GetuseTimeFlickering() {
		return memory.read<bool>(m_addr + 616);
	}
	float GetminTimeBeetweenFlickeringSeconds() {
		return memory.read<float>(m_addr + 620);
	}
	float GetmaxTimeBeetweenFlickeringSeconds() {
		return memory.read<float>(m_addr + 624);
	}
	float GettriggeringGForceY() {
		return memory.read<float>(m_addr + 628);
	}
	float GettriggeringGForceZ() {
		return memory.read<float>(m_addr + 632);
	}
	float GettriggeringGForceFilter() {
		return memory.read<float>(m_addr + 636);
	}
	float GetminDamageSpeedGlasses() {
		return memory.read<float>(m_addr + 640);
	}
	float GetmaxDamageSpeedGlasses() {
		return memory.read<float>(m_addr + 644);
	}
	struct FName GetFrontMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 648);
	}
	struct FName GetRearMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 656);
	}
	struct FName GetFrontGlassMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 664);
	}
	struct FName GetRearGlassMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 672);
	}
	float GetdamageLeft() {
		return memory.read<float>(m_addr + 680);
	}
	float GetdamageRight() {
		return memory.read<float>(m_addr + 684);
	}
	char GetMaxFlashingCount() {
		return memory.read<char>(m_addr + 688);
	}
	float GetIntAuxLightMaterialEmissive() {
		return memory.read<float>(m_addr + 692);
	}
	float GetIntAuxLightIntensity() {
		return memory.read<float>(m_addr + 696);
	}
	struct UMaterialInstanceDynamic GetFrontMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetRearMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetFrontGlassMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetRearGlassMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetintAuxLightMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcTogglePanel
{
public:
	UAcTogglePanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsPanelSelected() {
		return memory.read<bool>(m_addr + 1504);
	}
	struct UTextBlock GettxtTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetHoverImageBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UImage(ptr_addr);
	}
	struct FText GetTitleText() {
		return memory.read<struct FText>(m_addr + 1528);
	}
	bool GetIsFontRegoular() {
		return memory.read<bool>(m_addr + 1552);
	}
	int32_t GetGroupIndex() {
		return memory.read<int32_t>(m_addr + 1556);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingCPDetail
{
public:
	URatingCPDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USimpleColumnChart GetWDG_ChartCompetitionRating() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct USimpleColumnChart GetWDG_ChartElo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct UCanvasPanel Getpanel_SessionHints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock GettxtHintElo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintCPRating() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintResult() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcRaceWidgetHost
{
public:
	UAcRaceWidgetHost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAcRaceWidgetBase> GetHostedWidgets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct TArray<struct UAcRaceWidgetBase>(ptr_addr);
	}
	struct TMap<UAcRaceWidgetBase, struct FRaceWidgetLayoutBase> GetwidgetDefinitions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct TMap<UAcRaceWidgetBase, struct FRaceWidgetLayoutBase>(ptr_addr);
	}
	struct UWidgetSwitcher GetSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UWidgetSwitcher(ptr_addr);
	}
	bool GetloadLastMfdScreen() {
		return memory.read<bool>(m_addr + 1744);
	}
	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UAcGameInstance(ptr_addr);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct AAcRaceGameMode(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarLoosePartAnimations
{
public:
	UAcCarLoosePartAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetGForces() {
		return memory.read<struct FVector>(m_addr + 712);
	}
	enum class ELoosePartType GetLoosePartType() {
		return memory.read<enum class ELoosePartType>(m_addr + 724);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiplayerPanel
{
public:
	UMultiplayerPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBorder GetborderInstantJoin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UBorder(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcCarLocationManager
{
public:
	AAcCarLocationManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetVersion() {
		return memory.read<char>(m_addr + 544);
	}
	struct ATriggerBox GetPitEntryLaneSideStart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct ATriggerBox(ptr_addr);
	}
	struct ATriggerVolume GetPitEntryLaneSide() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct ATriggerVolume(ptr_addr);
	}
	struct ATriggerBox GetPitLaneEntry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct ATriggerBox(ptr_addr);
	}
	struct ATriggerBox GetPitLaneExit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct ATriggerBox(ptr_addr);
	}
	struct ATriggerVolume GetPitExitLaneSide() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct ATriggerVolume(ptr_addr);
	}
	struct ATriggerBox GetPitExitLaneEnd() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct ATriggerBox(ptr_addr);
	}
	struct FName GetPitEntryLaneStartName() {
		return memory.read<struct FName>(m_addr + 600);
	}
	struct ATriggerBase GetPitEntryLaneStart_v2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct ATriggerBase(ptr_addr);
	}
	struct FName GetPitEntryLaneSideName() {
		return memory.read<struct FName>(m_addr + 616);
	}
	struct TArray<struct ATriggerBase> GetPitEntryLaneSide_v2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct TArray<struct ATriggerBase>(ptr_addr);
	}
	struct FName GetPitLaneEntryName() {
		return memory.read<struct FName>(m_addr + 640);
	}
	struct ATriggerBase GetPitLaneEntry_v2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct ATriggerBase(ptr_addr);
	}
	struct FName GetPitLaneExitName() {
		return memory.read<struct FName>(m_addr + 656);
	}
	struct ATriggerBase GetPitLaneExit_v2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct ATriggerBase(ptr_addr);
	}
	struct FName GetPitExitLaneSideName() {
		return memory.read<struct FName>(m_addr + 672);
	}
	struct TArray<struct ATriggerBase> GetPitExitLaneSide_v2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct TArray<struct ATriggerBase>(ptr_addr);
	}
	struct FName GetPitExitLaneEndName() {
		return memory.read<struct FName>(m_addr + 696);
	}
	struct ATriggerBase GetPitExitLaneEnd_v2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct ATriggerBase(ptr_addr);
	}
	struct FName GetSafetyCarLine1Name() {
		return memory.read<struct FName>(m_addr + 712);
	}
	struct FName GetSafetyCarLine2Name() {
		return memory.read<struct FName>(m_addr + 720);
	}
	struct FName GetPitBridge1StartName() {
		return memory.read<struct FName>(m_addr + 728);
	}
	struct ATriggerBase GetPitBridge1Start() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct ATriggerBase(ptr_addr);
	}
	struct FName GetPitBridge1EndName() {
		return memory.read<struct FName>(m_addr + 744);
	}
	struct ATriggerBase GetPitBridge1End() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct ATriggerBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URacePagePit
{
public:
	URacePagePit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGenericBarItem GetbtnResults() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2944);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnExit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2952);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnReplay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2960);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2968);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnDrive() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2976);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2984);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnNextSession() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2992);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnRestart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3000);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnQuit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3008);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnCareerContinue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3016);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnChampContinue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3024);
		return struct UGenericBarItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCareerMainPage
{
public:
	UCareerMainPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStartSessionPanel GetStartEventItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UStartSessionPanel(ptr_addr);
	}
	struct UStartSessionPanel GetSavedSessionItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UStartSessionPanel(ptr_addr);
	}
	struct UAcPanelBase GetGalleryItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetPastEventsItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetTeamItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetAssistItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetRealismItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UTextBlock GettxtTrackName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWeather() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWeatherIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventDescription() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgCircuitCountryFlag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarProtectionNetAnimations
{
public:
	UAcCarProtectionNetAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetGForces() {
		return memory.read<struct FVector>(m_addr + 712);
	}
	bool GetbIsCarRunning() {
		return memory.read<bool>(m_addr + 724);
	}
	bool GetbDetachNet() {
		return memory.read<bool>(m_addr + 725);
	}
	bool GetbAttachNet() {
		return memory.read<bool>(m_addr + 726);
	}
	float GetDetachSpeed() {
		return memory.read<float>(m_addr + 728);
	}
	float GetAttachSpeed() {
		return memory.read<float>(m_addr + 732);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcParticlesManager
{
public:
	UAcParticlesManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem Getsparks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UParticleSystem(ptr_addr);
	}
	struct UDataTable GetWaterCurves() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetWaterParticles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetSmokeDirtCurves() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetSmokeDirtParticles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkin
{
public:
	USkin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture GetbaseColorOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcCarSystems
{
public:
	UAcCarSystems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAcCarTimingServices
{
public:
	UAcCarTimingServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxDistanceInWrongWayCM() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetMaxDistanceInWrongWayHotstintPrephaseCM() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeneralOptionsPage
{
public:
	UGeneralOptionsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGenericSelectorItem GetLanguageItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetReplayMaxLengthItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetskipIntroSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDBoxItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFanatecLedItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetReplayQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetReplayFarAIQualityItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAutomaticHighlightsItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetUseOnlyPlayerCarHighlights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetManualHighlightsPreTimeItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetManualHighlightsPostTimeItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAutoSaveReplayItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetReplayRaceAutosaveItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetReplayQualifyingAutosaveItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetReplayOtherSessionsAutosaveItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMinReplayTimeAutoSaveItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetBroadcastCameraAR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitcrewAnimationItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitMarkerItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRatingItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStatisticsItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UScrollBox GetScroll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UScrollBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AATimeLine
{
public:
	AATimeLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 544);
	}
	struct UBoxComponent GetLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UBoxComponent(ptr_addr);
	}
	struct UBoxComponent GetRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UBoxComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcController
{
public:
	AAcController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetForwardSpeed() {
		return memory.read<float>(m_addr + 1416);
	}
	float GetLateralSpeed() {
		return memory.read<float>(m_addr + 1420);
	}
	float GetVerticalSpeed() {
		return memory.read<float>(m_addr + 1424);
	}
	float GetYawSpeed() {
		return memory.read<float>(m_addr + 1428);
	}
	float GetPitchSpeed() {
		return memory.read<float>(m_addr + 1432);
	}
	float GetRollSpeed() {
		return memory.read<float>(m_addr + 1436);
	}
	float GetCameraSmoothness() {
		return memory.read<float>(m_addr + 1440);
	}
	float GetCameraSpeed() {
		return memory.read<float>(m_addr + 1444);
	}
	struct FVector GetParticlesOffset() {
		return memory.read<struct FVector>(m_addr + 1448);
	}

private:
	std::uint64_t m_addr = 0;
};


class URealismPanel
{
public:
	URealismPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAcDriverAnimations
{
public:
	UAcDriverAnimations(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSteerAngle() {
		return memory.read<float>(m_addr + 712);
	}
	float GetRightBrakeGas() {
		return memory.read<float>(m_addr + 716);
	}
	float GetClutchBrakePressure() {
		return memory.read<float>(m_addr + 720);
	}
	float GetClutchBrakeSwitch() {
		return memory.read<float>(m_addr + 724);
	}
	float GetLookLeftRight() {
		return memory.read<float>(m_addr + 728);
	}
	float GetGForceOnX() {
		return memory.read<float>(m_addr + 732);
	}
	float GetGForceOnY() {
		return memory.read<float>(m_addr + 736);
	}
	bool GetbSkipAnimations() {
		return memory.read<bool>(m_addr + 740);
	}
	bool GetbIsDriving() {
		return memory.read<bool>(m_addr + 741);
	}
	bool GetbIsOnMarker() {
		return memory.read<bool>(m_addr + 742);
	}
	float GetHeadPitch() {
		return memory.read<float>(m_addr + 744);
	}
	bool GetbGearUp() {
		return memory.read<bool>(m_addr + 748);
	}
	float GetGearUpAlpha() {
		return memory.read<float>(m_addr + 752);
	}
	bool GetbGearDown() {
		return memory.read<bool>(m_addr + 756);
	}
	float GetGearDownAlpha() {
		return memory.read<float>(m_addr + 760);
	}
	bool GetbWiper() {
		return memory.read<bool>(m_addr + 764);
	}
	float GetWiperAlpha() {
		return memory.read<float>(m_addr + 768);
	}
	bool GetbLights() {
		return memory.read<bool>(m_addr + 772);
	}
	float GetLightsAlpha() {
		return memory.read<float>(m_addr + 776);
	}
	bool GetbDisplay() {
		return memory.read<bool>(m_addr + 780);
	}
	float GetDisplayAlpha() {
		return memory.read<float>(m_addr + 784);
	}
	bool GetbFlashingLights() {
		return memory.read<bool>(m_addr + 788);
	}
	float GetFlashingLightsAlpha() {
		return memory.read<float>(m_addr + 792);
	}
	bool GetbPitLimiter() {
		return memory.read<bool>(m_addr + 796);
	}
	float GetPitLimiterAlpha() {
		return memory.read<float>(m_addr + 800);
	}
	bool GetbRadio() {
		return memory.read<bool>(m_addr + 804);
	}
	float GetRadioAlpha() {
		return memory.read<float>(m_addr + 808);
	}
	bool GetbTC() {
		return memory.read<bool>(m_addr + 812);
	}
	float GetTCAlpha() {
		return memory.read<float>(m_addr + 816);
	}
	bool GetbTCCut() {
		return memory.read<bool>(m_addr + 820);
	}
	float GetTCCutAlpha() {
		return memory.read<float>(m_addr + 824);
	}
	bool GetbABS() {
		return memory.read<bool>(m_addr + 828);
	}
	float GetABSAlpha() {
		return memory.read<float>(m_addr + 832);
	}
	bool GetbBrakeBias() {
		return memory.read<bool>(m_addr + 836);
	}
	float GetBrakeBiasAlpha() {
		return memory.read<float>(m_addr + 840);
	}
	bool GetbRainLight() {
		return memory.read<bool>(m_addr + 844);
	}
	float GetRainLightAlpha() {
		return memory.read<float>(m_addr + 848);
	}
	bool GetbIgnitionSequenceOn() {
		return memory.read<bool>(m_addr + 852);
	}
	float GetIgnitionSequenceOnAlpha() {
		return memory.read<float>(m_addr + 856);
	}
	bool GetbEngineMap() {
		return memory.read<bool>(m_addr + 860);
	}
	float GetEngineMapAlpha() {
		return memory.read<float>(m_addr + 864);
	}
	bool GetbDirectionLightLeft() {
		return memory.read<bool>(m_addr + 868);
	}
	float GetDirectionLightLeftAlpha() {
		return memory.read<float>(m_addr + 872);
	}
	bool GetbDirectionLightRight() {
		return memory.read<bool>(m_addr + 876);
	}
	float GetDirectionLightRightAlpha() {
		return memory.read<float>(m_addr + 880);
	}
	bool GetbDirectionLights() {
		return memory.read<bool>(m_addr + 884);
	}
	float GetDirectionLightsAlpha() {
		return memory.read<float>(m_addr + 888);
	}
	bool GetbFuelMixture() {
		return memory.read<bool>(m_addr + 892);
	}
	float GetFuelMixtureAlpha() {
		return memory.read<float>(m_addr + 896);
	}
	bool GetbNeutralGear() {
		return memory.read<bool>(m_addr + 900);
	}
	float GetNeutralGearAlpha() {
		return memory.read<float>(m_addr + 904);
	}
	bool GetbStandardLight() {
		return memory.read<bool>(m_addr + 908);
	}
	float GetStandardLightAlpha() {
		return memory.read<float>(m_addr + 912);
	}
	bool GetbEnduranceLight() {
		return memory.read<bool>(m_addr + 916);
	}
	float GetEnduranceLightAlpha() {
		return memory.read<float>(m_addr + 920);
	}
	bool GetbEngineStarter() {
		return memory.read<bool>(m_addr + 924);
	}
	float GetEngineStarterAlpha() {
		return memory.read<float>(m_addr + 928);
	}
	float GetEngineStarterPlayRate() {
		return memory.read<float>(m_addr + 932);
	}
	bool GetbEngineStarterOff() {
		return memory.read<bool>(m_addr + 937);
	}
	float GetEngineStarterOffAlpha() {
		return memory.read<float>(m_addr + 940);
	}
	bool GetbReverseGear() {
		return memory.read<bool>(m_addr + 944);
	}
	float GetReverseGearAlpha() {
		return memory.read<float>(m_addr + 948);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingCNDetail
{
public:
	URatingCNDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USimpleColumnChart GetWDG_ChartRatings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct UCanvasPanel Getpanel_SessionHints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock GettxtHintCN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintDay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcExhaustComponent
{
public:
	UAcExhaustComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GethasFixedTemperature() {
		return memory.read<bool>(m_addr + 176);
	}
	float GetTGasMin() {
		return memory.read<float>(m_addr + 180);
	}
	float GetTimeConstant() {
		return memory.read<float>(m_addr + 184);
	}
	float GetMinEmissive() {
		return memory.read<float>(m_addr + 188);
	}
	float GetMaxEmissive() {
		return memory.read<float>(m_addr + 192);
	}
	float GetMinTemperature() {
		return memory.read<float>(m_addr + 196);
	}
	float GetMaxTemperature() {
		return memory.read<float>(m_addr + 200);
	}
	struct FName GetMaterialSlot() {
		return memory.read<struct FName>(m_addr + 204);
	}
	float GetbackFireHighRpms() {
		return memory.read<float>(m_addr + 212);
	}
	float GetbackFireLowRpms() {
		return memory.read<float>(m_addr + 216);
	}
	float GetbackFireMinRpms() {
		return memory.read<float>(m_addr + 220);
	}
	float GetbackFireHighRate() {
		return memory.read<float>(m_addr + 224);
	}
	float GetbackFireBlipTime() {
		return memory.read<float>(m_addr + 228);
	}
	float GetbackfireDelay() {
		return memory.read<float>(m_addr + 232);
	}
	float GetbackFireVariation() {
		return memory.read<float>(m_addr + 236);
	}
	float GetbackFireTime() {
		return memory.read<float>(m_addr + 240);
	}
	struct TArray<int32_t> GetBackfireProbability() {
		return memory.read<struct TArray<int32_t>>(m_addr + 248);
	}
	struct FBackfireFlame GetFlame_Type1() {
		return memory.read<struct FBackfireFlame>(m_addr + 264);
	}
	struct FBackfireFlame GetFlame_Type2() {
		return memory.read<struct FBackfireFlame>(m_addr + 266);
	}
	struct FBackfireFlame GetFlame_Type3() {
		return memory.read<struct FBackfireFlame>(m_addr + 268);
	}
	struct FBackfireFlame GetFlame_Type4() {
		return memory.read<struct FBackfireFlame>(m_addr + 270);
	}
	struct FBackfireFlame GetFlame_Type5() {
		return memory.read<struct FBackfireFlame>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcFireworks
{
public:
	AAcFireworks(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct AAcRaceGameMode(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAITestGameMode
{
public:
	AAITestGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnUILogLine() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 704);
	}
	UUserWidget GetGameModeWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return UUserWidget(ptr_addr);
	}
	int32_t GetStepsPerFrame() {
		return memory.read<int32_t>(m_addr + 728);
	}
	float GetMinNSP() {
		return memory.read<float>(m_addr + 732);
	}
	float GetMaxNSP() {
		return memory.read<float>(m_addr + 736);
	}
	int32_t GetCarsActive() {
		return memory.read<int32_t>(m_addr + 740);
	}
	struct FString GetDbgInfo() {
		return memory.read<struct FString>(m_addr + 744);
	}
	struct TArray<struct FAiTestCar> Getcars() {
		return memory.read<struct TArray<struct FAiTestCar>>(m_addr + 776);
	}
	struct UUserWidget GetUiWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcFormatLibrary
{
public:
	UAcFormatLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AAcFreeCameraActor
{
public:
	AAcFreeCameraActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPhotomodeSettings GetPhotoSettings() {
		return memory.read<struct FPhotomodeSettings>(m_addr + 544);
	}
	struct USceneComponent GetSceneComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct USceneComponent(ptr_addr);
	}
	struct UCineCameraComponent GetCameraComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UCineCameraComponent(ptr_addr);
	}
	struct UCameraComponent GetVRCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UCameraComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AReplayActor
{
public:
	AReplayActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AAcIdealLineActor
{
public:
	AAcIdealLineActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIdealLineSpacing() {
		return memory.read<int32_t>(m_addr + 544);
	}
	int32_t GetIdealLineWidth() {
		return memory.read<int32_t>(m_addr + 548);
	}
	float GetGroundOffset() {
		return memory.read<float>(m_addr + 552);
	}
	int32_t GetSecondsToNextPoint() {
		return memory.read<int32_t>(m_addr + 556);
	}
	int32_t GetSpeedLimitOver() {
		return memory.read<int32_t>(m_addr + 560);
	}
	int32_t GetSpeedLimitUnder() {
		return memory.read<int32_t>(m_addr + 564);
	}
	struct FLinearColor GetColorOver() {
		return memory.read<struct FLinearColor>(m_addr + 568);
	}
	struct FLinearColor GetColorUnder() {
		return memory.read<struct FLinearColor>(m_addr + 584);
	}
	struct FLinearColor GetColorMiddle() {
		return memory.read<struct FLinearColor>(m_addr + 600);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UProceduralMeshComponent GetLineMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UProceduralMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcLedSystem
{
public:
	UAcLedSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetLedMaterialSlotName() {
		return memory.read<struct FName>(m_addr + 176);
	}
	struct TArray<struct FLedInstance> GetRpmLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 184);
	}
	struct TArray<struct FLedInstance> GetPitLimiterLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 200);
	}
	struct TArray<struct FLedInstance> GetEngineLimiterLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 216);
	}
	struct TArray<struct FLedInstance> GetFuelLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 232);
	}
	struct TArray<struct FLedInstance> GetSlip_LF_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 248);
	}
	struct TArray<struct FLedInstance> GetSlip_RF_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 264);
	}
	struct TArray<struct FLedInstance> GetSlip_LR_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 280);
	}
	struct TArray<struct FLedInstance> GetSlip_RR_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 296);
	}
	struct TArray<struct FLedInstance> GetSlip_Front_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 312);
	}
	struct TArray<struct FLedInstance> GetSlip_Rear_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 328);
	}
	struct TArray<struct FLedInstance> GetLock_LF_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 344);
	}
	struct TArray<struct FLedInstance> GetLock_RF_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 360);
	}
	struct TArray<struct FLedInstance> GetLock_LR_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 376);
	}
	struct TArray<struct FLedInstance> GetLock_RR_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 392);
	}
	struct TArray<struct FLedInstance> GetLock_Front_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 408);
	}
	struct TArray<struct FLedInstance> GetLock_Rear_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 424);
	}
	struct TArray<struct FLedInstance> GetABS_InAction_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 440);
	}
	struct TArray<struct FLedInstance> GetTC_InAction_Leds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 456);
	}
	struct TArray<struct FLedInstance> GetDayLightStageLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 472);
	}
	struct TArray<struct FLedInstance> GetHighBeamStageLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 488);
	}
	struct TArray<struct FLedInstance> GetEnduranceStageLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 504);
	}
	struct TArray<struct FLedInstance> GetRainLightLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 520);
	}
	struct TArray<struct FLedInstance> GetFlashingLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 536);
	}
	struct TArray<struct FLedInstance> GetDirectionLeftLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 552);
	}
	struct TArray<struct FLedInstance> GetDirectionRightLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 568);
	}
	struct TArray<struct FLedInstance> GetDirectionSharedLeds() {
		return memory.read<struct TArray<struct FLedInstance>>(m_addr + 584);
	}
	float GetRpmTimeOn() {
		return memory.read<float>(m_addr + 600);
	}
	float GetRpmTimeOff() {
		return memory.read<float>(m_addr + 604);
	}
	float GetRpmBlinkMinRpm() {
		return memory.read<float>(m_addr + 616);
	}
	float GetEngineLimiterTimeOn() {
		return memory.read<float>(m_addr + 620);
	}
	float GetEngineLimiterTimeOff() {
		return memory.read<float>(m_addr + 624);
	}
	float GetEngineLimiterMinRpm() {
		return memory.read<float>(m_addr + 640);
	}
	float GetPitLimiterTimeOn() {
		return memory.read<float>(m_addr + 644);
	}
	float GetPitLimiterTimeOff() {
		return memory.read<float>(m_addr + 648);
	}
	float GetFuelTimeOn() {
		return memory.read<float>(m_addr + 664);
	}
	float GetFuelTimeOff() {
		return memory.read<float>(m_addr + 668);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcLumirankComponent
{
public:
	UAcLumirankComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsTwoDigit() {
		return memory.read<bool>(m_addr + 1232);
	}
	struct FLinearColor GetColor_Pro() {
		return memory.read<struct FLinearColor>(m_addr + 1236);
	}
	struct FLinearColor GetColor_ProAm() {
		return memory.read<struct FLinearColor>(m_addr + 1252);
	}
	struct FLinearColor GetColor_Silver() {
		return memory.read<struct FLinearColor>(m_addr + 1268);
	}
	struct FLinearColor GetColor_Am() {
		return memory.read<struct FLinearColor>(m_addr + 1284);
	}
	struct FLinearColor GetColor_Cup() {
		return memory.read<struct FLinearColor>(m_addr + 1300);
	}
	float GetBlinkTime() {
		return memory.read<float>(m_addr + 1316);
	}
	float Getemissive() {
		return memory.read<float>(m_addr + 1320);
	}
	float GetNameBlinkTime() {
		return memory.read<float>(m_addr + 1324);
	}
	float GetFormationPulseTime() {
		return memory.read<float>(m_addr + 1328);
	}
	float GetFormationMinEmissive() {
		return memory.read<float>(m_addr + 1332);
	}
	float GetFormationMaxEmissive() {
		return memory.read<float>(m_addr + 1336);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCountDownTimerWidget
{
public:
	UCountDownTimerWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcPlayerStartManager
{
public:
	AAcPlayerStartManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsPitlaneOnLeft() {
		return memory.read<bool>(m_addr + 560);
	}
	struct USplineComponent GetSplineComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USplineComponent(ptr_addr);
	}
	float GetPitAlignmentRange() {
		return memory.read<float>(m_addr + 576);
	}
	struct FString GetPlayerStartPrefix() {
		return memory.read<struct FString>(m_addr + 584);
	}
	bool GetbIsFirstZero() {
		return memory.read<bool>(m_addr + 600);
	}
	bool GetisPolesitterOnLeft() {
		return memory.read<bool>(m_addr + 601);
	}
	float Getspace_between_car_m() {
		return memory.read<float>(m_addr + 604);
	}
	int32_t Getpit_count() {
		return memory.read<int32_t>(m_addr + 608);
	}
	enum class EAcPlayerStartType GetPlayerStartType() {
		return memory.read<enum class EAcPlayerStartType>(m_addr + 612);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcPitstopProcedure
{
public:
	AAcPitstopProcedure(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPitstopSwitchTyre GetswitchTyre() {
		return memory.read<enum class EPitstopSwitchTyre>(m_addr + 552);
	}
	float GetCurrentAnimationTime() {
		return memory.read<float>(m_addr + 556);
	}
	struct FVector GetpreviousOffsetAirgun() {
		return memory.read<struct FVector>(m_addr + 560);
	}
	struct FVector GetpreviousOffsetA() {
		return memory.read<struct FVector>(m_addr + 572);
	}
	struct FVector GetpreviousOffsetBC() {
		return memory.read<struct FVector>(m_addr + 584);
	}
	struct FVector GetpreviousOffsetD() {
		return memory.read<struct FVector>(m_addr + 596);
	}
	float GetBlendTime() {
		return memory.read<float>(m_addr + 608);
	}
	float GetelapsedBlendTime() {
		return memory.read<float>(m_addr + 612);
	}
	struct USceneComponent GetSceneComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct USceneComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GettyreManComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetairgunManComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetrefuellerManComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetreceiverManComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GettyreA_Component() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GettyreBC_Component() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GettyreD_Component() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetrefuellerSkeletal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetlollipopManLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetlollipopManRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetrefuellerStatic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GettyreSingleStatic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GettyreDoubleStatic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetairGunStatic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetlollipopLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetlollipopRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetpitStart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct USceneComponent(ptr_addr);
	}
	struct TArray<struct UStaticMeshComponent> GetpitTyreComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct TArray<struct UStaticMeshComponent>(ptr_addr);
	}
	struct TArray<struct UStaticMeshComponent> GetcarTyreComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct TArray<struct UStaticMeshComponent>(ptr_addr);
	}
	struct TArray<struct UStaticMeshComponent> GetpitRimComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct TArray<struct UStaticMeshComponent>(ptr_addr);
	}
	struct TArray<struct UStaticMeshComponent> GetcarRimComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct TArray<struct UStaticMeshComponent>(ptr_addr);
	}
	struct TArray<struct UStaticMesh> GetrimMeshes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct TArray<struct UStaticMesh>(ptr_addr);
	}
	struct UArrowComponent GetcarCenterComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UArrowComponent(ptr_addr);
	}
	struct TArray<struct USkeletalMeshSocket> GetpitWheelSockets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct TArray<struct USkeletalMeshSocket>(ptr_addr);
	}
	struct TArray<struct USkeletalMeshSocket> GetcarWheelSockets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct TArray<struct USkeletalMeshSocket>(ptr_addr);
	}
	struct TArray<struct USkeletalMeshComponent> GetwheelComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct TArray<struct USkeletalMeshComponent>(ptr_addr);
	}
	struct TMap<enum class EPitstopSwitchTyre, float> Getswitch_mesh_at_time() {
		return memory.read<struct TMap<enum class EPitstopSwitchTyre, float>>(m_addr + 1008);
	}
	struct TMap<enum class EPitstopSwitchTyre, struct FVector> Getairgun_position_at_time() {
		return memory.read<struct TMap<enum class EPitstopSwitchTyre, struct FVector>>(m_addr + 1088);
	}
	struct TMap<enum class EPitstopCrewPhases, float> Getcrew_phase_start() {
		return memory.read<struct TMap<enum class EPitstopCrewPhases, float>>(m_addr + 1168);
	}
	struct TMap<enum class EPitstopCrewPhases, float> Getcrew_phase_end() {
		return memory.read<struct TMap<enum class EPitstopCrewPhases, float>>(m_addr + 1248);
	}
	struct TArray<struct FTyreAudio> Getaudio_events() {
		return memory.read<struct TArray<struct FTyreAudio>>(m_addr + 1328);
	}
	enum class EPitstopCrewPhases Getphase() {
		return memory.read<enum class EPitstopCrewPhases>(m_addr + 1344);
	}
	struct FVector GetAnimationOffset() {
		return memory.read<struct FVector>(m_addr + 1348);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcMarshal
{
public:
	AAcMarshal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMarshalFlagType GetwinColor() {
		return memory.read<enum class EMarshalFlagType>(m_addr + 544);
	}
	float GetstartAnimationRandom() {
		return memory.read<float>(m_addr + 548);
	}
	float GetStartPosition() {
		return memory.read<float>(m_addr + 552);
	}
	float GetMiddlePosition() {
		return memory.read<float>(m_addr + 556);
	}
	float GetEndPosition() {
		return memory.read<float>(m_addr + 560);
	}
	bool GetbCanDrawLines() {
		return memory.read<bool>(m_addr + 564);
	}
	float GetForcedMiddlePosition() {
		return memory.read<float>(m_addr + 568);
	}
	struct UBoxComponent GetStartBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UBoxComponent(ptr_addr);
	}
	struct UBoxComponent GetMiddleBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UBoxComponent(ptr_addr);
	}
	struct UBoxComponent GetEndBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UBoxComponent(ptr_addr);
	}
	struct UAnimInstance GetanimTest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UAnimInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcMenuData
{
public:
	UAcMenuData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetGuiColorsAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetGuiIconTemplateTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetGuiActionTextTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcMenuGameMode
{
public:
	AAcMenuGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCompetitionList GetCompetitionList() {
		return memory.read<struct FCompetitionList>(m_addr + 712);
	}
	struct FCompetitionList GetCustomCompetitionList() {
		return memory.read<struct FCompetitionList>(m_addr + 744);
	}
	struct TMap<struct FName, struct FCarInfo> Getcars() {
		return memory.read<struct TMap<struct FName, struct FCarInfo>>(m_addr + 776);
	}
	struct TMap<struct FName, struct FDriverInfo> GetDrivers() {
		return memory.read<struct TMap<struct FName, struct FDriverInfo>>(m_addr + 856);
	}
	struct TMap<struct FName, enum class ESeasonType> GetCarSeason() {
		return memory.read<struct TMap<struct FName, enum class ESeasonType>>(m_addr + 936);
	}
	struct TArray<enum class ECarGroup> GetcarGroups() {
		return memory.read<struct TArray<enum class ECarGroup>>(m_addr + 1016);
	}
	struct TMap<enum class ESeasonType, struct FGuiSeasonRaceEventData> GetgameModeDefaults() {
		return memory.read<struct TMap<enum class ESeasonType, struct FGuiSeasonRaceEventData>>(m_addr + 1032);
	}
	enum class ECarModelType GetScreenSaverCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 1112);
	}
	struct FName GetScreenSaverCarName() {
		return memory.read<struct FName>(m_addr + 1116);
	}
	struct FMulticastInlineDelegate GetOnSeasonChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1128);
	}
	struct ACarAvatar GetcurrentShowroomCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct ACarAvatar(ptr_addr);
	}
	struct UCameraComponent GetcurrentCockpitCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UCameraComponent(ptr_addr);
	}
	struct ACameraActor GetcurrentShowroomCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct ACameraActor(ptr_addr);
	}
	struct ACameraActor GetlastSetCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct ACameraActor(ptr_addr);
	}
	struct TMap<struct FString, struct ADriverAvatar> GetcurrentShowroomDrivers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct TMap<struct FString, struct ADriverAvatar>(ptr_addr);
	}
	bool GetallowShowroomInteraction() {
		return memory.read<bool>(m_addr + 1256);
	}
	bool GetisInCockpitCam() {
		return memory.read<bool>(m_addr + 1257);
	}
	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UAcGameInstance(ptr_addr);
	}
	struct UAcInputDeviceManager GetInputDeviceManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct UAcInputDeviceManager(ptr_addr);
	}
	struct FString GetRaceGameModePath() {
		return memory.read<struct FString>(m_addr + 1280);
	}
	struct UViewOptionsLibrary GetViewOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UViewOptionsLibrary(ptr_addr);
	}
	struct TMap<enum class ECarModelType, struct FGuiCar> GetGuiCars() {
		return memory.read<struct TMap<enum class ECarModelType, struct FGuiCar>>(m_addr + 1304);
	}
	struct UAcRaceEventGenerator GetRaceEventGenerator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UAcRaceEventGenerator(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcMenuState
{
public:
	UAcMenuState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EGuiGameModes, struct FGuiRaceEventData> GetRaceEventData() {
		return memory.read<struct TMap<enum class EGuiGameModes, struct FGuiRaceEventData>>(m_addr + 40);
	}
	struct FName GetCarEntryRowName() {
		return memory.read<struct FName>(m_addr + 120);
	}
	struct FName GetDriverRowName() {
		return memory.read<struct FName>(m_addr + 128);
	}
	enum class EGuiGameModes GetGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 136);
	}
	enum class EGuiGameModes GetSPGameMode() {
		return memory.read<enum class EGuiGameModes>(m_addr + 137);
	}
	enum class EGuiSetupSection GetSetupSection() {
		return memory.read<enum class EGuiSetupSection>(m_addr + 138);
	}
	struct FIntPoint GetResolution() {
		return memory.read<struct FIntPoint>(m_addr + 140);
	}
	bool GetUseFullscreen() {
		return memory.read<bool>(m_addr + 148);
	}
	struct FVector Getweather() {
		return memory.read<struct FVector>(m_addr + 152);
	}
	enum class EWeatherPresetType GetweatherType() {
		return memory.read<enum class EWeatherPresetType>(m_addr + 164);
	}
	enum class ECarModelType GetmodelType() {
		return memory.read<enum class ECarModelType>(m_addr + 165);
	}
	bool GetbUseEnduranceKit() {
		return memory.read<bool>(m_addr + 166);
	}
	struct FAudioSave Getaudio() {
		return memory.read<struct FAudioSave>(m_addr + 168);
	}
	struct FGuiLoadingScreenInfo GetLoadingScreenInfo() {
		return memory.read<struct FGuiLoadingScreenInfo>(m_addr + 256);
	}
	enum class EGuiLanguages GetCurrentLanguage() {
		return memory.read<enum class EGuiLanguages>(m_addr + 672);
	}
	struct FGuiServerInfo GetSelectedServer() {
		return memory.read<struct FGuiServerInfo>(m_addr + 680);
	}
	char GetSpecialEventPage() {
		return memory.read<char>(m_addr + 864);
	}
	bool GetIsPrivacyPolicyAccepted() {
		return memory.read<bool>(m_addr + 865);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcRefuelAnimation
{
public:
	UAcRefuelAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCarFromRight() {
		return memory.read<bool>(m_addr + 696);
	}
	float GetLookLeftAndRight() {
		return memory.read<float>(m_addr + 700);
	}
	enum class ECarModelType GetCarModel() {
		return memory.read<enum class ECarModelType>(m_addr + 704);
	}
	float GetCurrentAnimationTime() {
		return memory.read<float>(m_addr + 708);
	}
	float GetFillingTime() {
		return memory.read<float>(m_addr + 712);
	}
	bool GetCanStart() {
		return memory.read<bool>(m_addr + 716);
	}
	bool GetTubeInserted() {
		return memory.read<bool>(m_addr + 717);
	}
	bool GetTubeRemoved() {
		return memory.read<bool>(m_addr + 718);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBOPData
{
public:
	UBOPData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMassKG() {
		return memory.read<float>(m_addr + 48);
	}
	float GetMinimumHeight() {
		return memory.read<float>(m_addr + 52);
	}
	float GetMaxFuel() {
		return memory.read<float>(m_addr + 56);
	}
	struct UCurveFloat GetPowerCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UCurveFloat(ptr_addr);
	}
	struct TArray<struct FTurboData> GetTurbos() {
		return memory.read<struct TArray<struct FTurboData>>(m_addr + 72);
	}
	struct TArray<float> GetGears() {
		return memory.read<struct TArray<float>>(m_addr + 88);
	}
	float GetFinalRatio() {
		return memory.read<float>(m_addr + 104);
	}
	struct TArray<struct FSetupSelectorLimits> GetRideHeight() {
		return memory.read<struct TArray<struct FSetupSelectorLimits>>(m_addr + 112);
	}
	struct TArray<struct FSetupSelectorLimits> GetCamber() {
		return memory.read<struct TArray<struct FSetupSelectorLimits>>(m_addr + 128);
	}
	struct TArray<struct UTyreCompoundSet> GetTyreCompounds() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UTyreCompoundSet>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcPageBase
{
public:
	UAcPageBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetPageTitle() {
		return memory.read<struct FText>(m_addr + 616);
	}
	struct FText GetCallingPageTitle() {
		return memory.read<struct FText>(m_addr + 640);
	}
	UObject GetcallingPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return UObject(ptr_addr);
	}
	UAcPageBase GetCallingPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return UAcPageBase(ptr_addr);
	}
	struct UAcPanelBase GetCurrentPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UAcPanelBase(ptr_addr);
	}
	struct TMap<struct FName, struct UWidgetAnimation> GetAnimations() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct TMap<struct FName, struct UWidgetAnimation>(ptr_addr);
	}
	struct TMap<struct FName, struct UButton> GetButtons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct TMap<struct FName, struct UButton>(ptr_addr);
	}
	struct TMap<struct FName, struct UTextBlock> GetTextBlocks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct TMap<struct FName, struct UTextBlock>(ptr_addr);
	}
	struct TArray<struct UAcPanelBase> GetCurrentPanels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct TArray<struct UAcPanelBase>(ptr_addr);
	}
	bool GetIsPitPage() {
		return memory.read<bool>(m_addr + 1008);
	}
	struct FMulticastInlineDelegate GetOnShowroomStart() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1016);
	}
	struct FMulticastInlineDelegate GetOnShowroomExit() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1032);
	}
	struct UHelpInMenu GetHelpWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UHelpInMenu(ptr_addr);
	}
	bool GetUseNativeNavigation() {
		return memory.read<bool>(m_addr + 1064);
	}
	bool GetcanHandleForward() {
		return memory.read<bool>(m_addr + 1065);
	}
	bool GetcanHandleBackward() {
		return memory.read<bool>(m_addr + 1066);
	}
	bool GetHasShowroomTimer() {
		return memory.read<bool>(m_addr + 1067);
	}
	float GetShowroomTimeOut() {
		return memory.read<float>(m_addr + 1068);
	}
	bool GetrelocateMouseOnNav() {
		return memory.read<bool>(m_addr + 1072);
	}
	struct ALevelSequenceActor GetShowroomLevelSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct ALevelSequenceActor(ptr_addr);
	}
	struct TMap<struct FName, UAcPageBase> GetPageClasses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct TMap<struct FName, UAcPageBase>(ptr_addr);
	}
	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct UAcGameInstance(ptr_addr);
	}
	struct AAcMenuGameMode GetGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1184);
		return struct AAcMenuGameMode(ptr_addr);
	}
	float GetTimeToFirstClick() {
		return memory.read<float>(m_addr + 1196);
	}
	float GetTimeToSecondClick() {
		return memory.read<float>(m_addr + 1200);
	}
	float GetTimeStepFirstClick() {
		return memory.read<float>(m_addr + 1204);
	}
	float GetTimeStepSecondClick() {
		return memory.read<float>(m_addr + 1208);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcPitstopAnimation
{
public:
	UAcPitstopAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsReadyToStart() {
		return memory.read<bool>(m_addr + 696);
	}
	float GetLookLeftAndRight() {
		return memory.read<float>(m_addr + 700);
	}
	float GetCurrentAnimationTime() {
		return memory.read<float>(m_addr + 704);
	}
	bool GetCanProceed() {
		return memory.read<bool>(m_addr + 708);
	}

private:
	std::uint64_t m_addr = 0;
};


class URadarWidget
{
public:
	URadarWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCanvasPanel GetradarPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UImage GetradarImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgSideWarnLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgSideWarnRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UImage(ptr_addr);
	}
	struct TArray<struct UImage> GetcarItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct TArray<struct UImage>(ptr_addr);
	}
	struct UTexture2D GetCenterCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetOtherCars() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UTexture2D(ptr_addr);
	}
	float GetmaxDist() {
		return memory.read<float>(m_addr + 1696);
	}
	float GetmaxOpacityDist() {
		return memory.read<float>(m_addr + 1700);
	}
	float GetoverlapDist() {
		return memory.read<float>(m_addr + 1704);
	}

private:
	std::uint64_t m_addr = 0;
};


class AACPlayerCameraManager
{
public:
	AACPlayerCameraManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnCameraChangeUI() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 10208);
	}
	struct FACPhotomodeSettings GetPhotomodeSettings() {
		return memory.read<struct FACPhotomodeSettings>(m_addr + 10224);
	}
	struct AAcFreeCameraActor GetFreeCameraActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10264);
		return struct AAcFreeCameraActor(ptr_addr);
	}
	struct AHeliCamera GetHelicamActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10272);
		return struct AHeliCamera(ptr_addr);
	}
	struct FACCameraSettings GetCameraSettings() {
		return memory.read<struct FACCameraSettings>(m_addr + 10384);
	}
	struct FACOnboardCameraSettings GetOnboardSettings() {
		return memory.read<struct FACOnboardCameraSettings>(m_addr + 10632);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcPlayerStart
{
public:
	AAcPlayerStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAcPlayerStartType GetStartType() {
		return memory.read<enum class EAcPlayerStartType>(m_addr + 592);
	}
	char GetStartIndex() {
		return memory.read<char>(m_addr + 593);
	}
	enum class ECarLocation GetCarLocation() {
		return memory.read<enum class ECarLocation>(m_addr + 594);
	}
	bool GetIsBetween_SC_Lines() {
		return memory.read<bool>(m_addr + 595);
	}
	bool GetIsSharedZone() {
		return memory.read<bool>(m_addr + 596);
	}
	bool GetIsSecondaryZone() {
		return memory.read<bool>(m_addr + 597);
	}
	char GetSharedWithPosition() {
		return memory.read<char>(m_addr + 598);
	}
	struct UTextRenderComponent GetTextRenderComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UTextRenderComponent(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetPanelPitstopMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGalleryItemPanel
{
public:
	UGalleryItemPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcPresetManager
{
public:
	UAcPresetManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetGraphicTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetDirectInputCommand() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetAudioTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetSpecialEventTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetCareerEventsTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UDataTable(ptr_addr);
	}
	struct TMap<enum class ESeasonType, struct UDataTable> GetChampionshipTables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct TMap<enum class ESeasonType, struct UDataTable>(ptr_addr);
	}
	struct TMap<enum class ESeasonType, struct UDataTable> GetCustomChampionshipTables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct TMap<enum class ESeasonType, struct UDataTable>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcRaceWidgetBase
{
public:
	UAcRaceWidgetBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetwidgetContentSize() {
		return memory.read<struct FVector2D>(m_addr + 608);
	}
	bool GetisAlwaysVisible() {
		return memory.read<bool>(m_addr + 616);
	}
	bool GetSkipForMFD() {
		return memory.read<bool>(m_addr + 617);
	}
	bool GetlistenForUIUpdateEvents() {
		return memory.read<bool>(m_addr + 618);
	}
	int32_t GetKeyboardUserIndex() {
		return memory.read<int32_t>(m_addr + 620);
	}
	struct FRaceHUDState GetlastState() {
		return memory.read<struct FRaceHUDState>(m_addr + 624);
	}
	bool GetIsWidgetInitialized() {
		return memory.read<bool>(m_addr + 1616);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMainCarHUDWidgetHost
{
public:
	UMainCarHUDWidgetHost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCanvasPanel GetrootPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetstickyPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UBorder GetborderRootVisualHelper() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBorder(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcRaceEventGenerator
{
public:
	UAcRaceEventGenerator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPedalInputWidget
{
public:
	UPedalInputWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UProgressBar GetprgGas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UProgressBar(ptr_addr);
	}
	struct UProgressBar GetprgBrake() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UProgressBar(ptr_addr);
	}
	struct UProgressBar GetprgFF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UProgressBar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AMenuController
{
public:
	AMenuController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserWidget GetCareerMainPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetChampMainPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetBlackCurtainClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetMainPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetIntroPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetFirstLaunchClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return UUserWidget(ptr_addr);
	}
	bool GetIsDirectInputListening() {
		return memory.read<bool>(m_addr + 1440);
	}
	struct AAcMenuGameMode GetGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct AAcMenuGameMode(ptr_addr);
	}
	struct UAcGameInstance GetGameInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UAcGameInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcRaceGameMode
{
public:
	AAcRaceGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnLeaderboardEntriesEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 728);
	}
	struct FMulticastInlineDelegate GetOnLeaderboardEntryLapsEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 744);
	}
	struct FMulticastInlineDelegate GetOnPlayerCarCornerSectionCompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 760);
	}
	struct FMulticastInlineDelegate GetOnMultiplayerServerStatsChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 776);
	}
	struct FMulticastInlineDelegate GetonPodiumEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 792);
	}
	struct FVector2D GetAiLightsHighBeamSunAngleLimits() {
		return memory.read<struct FVector2D>(m_addr + 808);
	}
	struct FVector2D GetAiLightsEnduranceBeamSunAngleLimits() {
		return memory.read<struct FVector2D>(m_addr + 816);
	}
	struct FVector2D GetAiRainIntensityLimits() {
		return memory.read<struct FVector2D>(m_addr + 824);
	}
	float GetAiRainIntensityRandomVariation() {
		return memory.read<float>(m_addr + 832);
	}
	URacePageBase GetPitMenu() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return URacePageBase(ptr_addr);
	}
	URacePageBase GetPausePage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return URacePageBase(ptr_addr);
	}
	URacePageBase GetStartPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return URacePageBase(ptr_addr);
	}
	URaceTransitionPage GetTransitionPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return URaceTransitionPage(ptr_addr);
	}
	UAcPageBase GetTransitionPageClassNew() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return UAcPageBase(ptr_addr);
	}
	URaceIntroPage GetIntroPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return URaceIntroPage(ptr_addr);
	}
	URacePageBase GetEndPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return URacePageBase(ptr_addr);
	}
	UAcPageBase GetPostSessionPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return UAcPageBase(ptr_addr);
	}
	UReplayHUD GetReplayPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return UReplayHUD(ptr_addr);
	}
	float GetEndSessionReplayMinSeconds() {
		return memory.read<float>(m_addr + 912);
	}
	float GetEndSessionReplayOffsetSeconds() {
		return memory.read<float>(m_addr + 916);
	}
	struct UDataTable GetAudioComms() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetHighLigthEvents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UDataTable(ptr_addr);
	}
	struct UPhysicsSettingsAC GetPhysicsSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UPhysicsSettingsAC(ptr_addr);
	}
	float GetCarLabelPosZ() {
		return memory.read<float>(m_addr + 944);
	}
	float GetCarLabelSize() {
		return memory.read<float>(m_addr + 948);
	}
	struct UMaterialInstance GetCarLabelMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstance GetCarLabelMaterialTVCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UCurveFloat GetCarLabelSunElevCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 968);
		return struct UCurveFloat(ptr_addr);
	}
	struct UFont GetCarLabelFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct UFont(ptr_addr);
	}
	bool GetbCarLabelFadeOut() {
		return memory.read<bool>(m_addr + 984);
	}
	struct UCurveFloat GetNearPlaneFromFOVCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveLinearColor GetHelicamTransitionCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UCurveLinearColor(ptr_addr);
	}
	struct AAiCarController GetaiTeammate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct AAiCarController(ptr_addr);
	}
	struct UAcParticlesManager GetParticlesManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UAcParticlesManager(ptr_addr);
	}
	struct URaceRatingsManager GetRaceRatingsManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct URaceRatingsManager(ptr_addr);
	}
	struct UMaterialParameterCollection GetMaterialParameterCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UMaterialParameterCollection(ptr_addr);
	}
	AAcPitstopProcedure GetPitstopClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return AAcPitstopProcedure(ptr_addr);
	}
	AActor GetIdealLineClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return AActor(ptr_addr);
	}
	struct UFMODBank Getaccessories() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UFMODBank(ptr_addr);
	}
	struct UFMODBank Getenvironment() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UFMODBank(ptr_addr);
	}
	struct UFMODBank Getdamage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UFMODBank(ptr_addr);
	}
	struct UFMODBank GetAudioCommsBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UFMODBank(ptr_addr);
	}
	AGhostCarManager GetGhostCarManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return AGhostCarManager(ptr_addr);
	}
	AHeliCamera GetHeliCameraClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return AHeliCamera(ptr_addr);
	}
	struct UViewOptionsLibrary GetViewOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UViewOptionsLibrary(ptr_addr);
	}
	struct FVector2D GetyellowFlagLimitSpeeds() {
		return memory.read<struct FVector2D>(m_addr + 1120);
	}
	struct FVector2D GetyellowFlagLimitRelative() {
		return memory.read<struct FVector2D>(m_addr + 1128);
	}
	float GetblueFlagLimit() {
		return memory.read<float>(m_addr + 1136);
	}
	float GetblueFlagDistance() {
		return memory.read<float>(m_addr + 1140);
	}
	float GetfilteredLeaderboardTime() {
		return memory.read<float>(m_addr + 1144);
	}
	struct FMultiplayerServerStats GetserverStats() {
		return memory.read<struct FMultiplayerServerStats>(m_addr + 1152);
	}
	struct TArray<enum class ECarGroup> GetCarGroupsInSession() {
		return memory.read<struct TArray<enum class ECarGroup>>(m_addr + 1232);
	}
	struct UCommunicationManager GetCommunicationManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UCommunicationManager(ptr_addr);
	}
	struct AAudioActor GetAudioActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct AAudioActor(ptr_addr);
	}
	struct AAcSpotter GetspotterActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct AAcSpotter(ptr_addr);
	}
	bool GetshowingPauseMenu() {
		return memory.read<bool>(m_addr + 1527);
	}
	struct TArray<struct AActor> GethotlapCrew() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct TArray<struct AActor>(ptr_addr);
	}
	struct ALevelSequenceActor GetstartSequence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct ALevelSequenceActor(ptr_addr);
	}
	struct UReplayManager GetReplayManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UReplayManager(ptr_addr);
	}
	struct AReplayActor GetReplayActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct AReplayActor(ptr_addr);
	}
	struct UAcPageBase GetnewTransitionPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UAcPageBase(ptr_addr);
	}
	struct UAcPageBase GetnewPostSessionPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UAcPageBase(ptr_addr);
	}
	struct AActor GetpodiumActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct AActor(ptr_addr);
	}
	struct UCameraComponent GetpodiumVRCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UCameraComponent(ptr_addr);
	}
	UObject GetrollingStartWallClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2192);
		return UObject(ptr_addr);
	}
	struct AActor GetrollingStartWall() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2200);
		return struct AActor(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetrollingStartWallMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2208);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcRaceGameState
{
public:
	AAcRaceGameState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxWindSpeed() {
		return memory.read<float>(m_addr + 624);
	}
	ARainBase GetRainActorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return ARainBase(ptr_addr);
	}
	int32_t GetMaxNumCarsCastingShadows() {
		return memory.read<int32_t>(m_addr + 640);
	}
	float GetOpponentCarLightRadius() {
		return memory.read<float>(m_addr + 644);
	}
	float GetReplayCarLightRadius() {
		return memory.read<float>(m_addr + 648);
	}
	float GetReplayCarLightMultiplier() {
		return memory.read<float>(m_addr + 652);
	}
	float GetCarOpponentVisCheckFrequency() {
		return memory.read<float>(m_addr + 656);
	}
	struct UCurveVector GetWetTrackDropsCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UCurveVector(ptr_addr);
	}
	float GetAudioInternalScale() {
		return memory.read<float>(m_addr + 672);
	}
	float GetVolumeFadeInTime() {
		return memory.read<float>(m_addr + 676);
	}
	float GetAudioStartingTime() {
		return memory.read<float>(m_addr + 680);
	}
	float GetCameraStartRampVolume() {
		return memory.read<float>(m_addr + 684);
	}
	float GetPuddleLevelSmoothValue() {
		return memory.read<float>(m_addr + 688);
	}
	float GetPuddleGain() {
		return memory.read<float>(m_addr + 692);
	}
	float GetReverbReduction() {
		return memory.read<float>(m_addr + 696);
	}
	float GetOpponentEngineVolume() {
		return memory.read<float>(m_addr + 700);
	}
	bool GetInvertedScaleBehavior() {
		return memory.read<bool>(m_addr + 704);
	}
	float GetAudioScaleMaxSpeed() {
		return memory.read<float>(m_addr + 708);
	}
	float GetOpponentEngineChaseCamVolume() {
		return memory.read<float>(m_addr + 712);
	}
	int32_t GetAudioFadingCars() {
		return memory.read<int32_t>(m_addr + 716);
	}
	int32_t GetAudioListenerCars() {
		return memory.read<int32_t>(m_addr + 720);
	}
	float GetDistanceFadingCars() {
		return memory.read<float>(m_addr + 724);
	}
	float GetMaxDistanceListenerCars() {
		return memory.read<float>(m_addr + 728);
	}
	float GetEngineExtVolumeSmoothOn() {
		return memory.read<float>(m_addr + 732);
	}
	float GetEngineExtVolumeSmoothOff() {
		return memory.read<float>(m_addr + 736);
	}
	float GetPassByFactorVariation() {
		return memory.read<float>(m_addr + 740);
	}
	float GetDirectionalFactorVariation() {
		return memory.read<float>(m_addr + 744);
	}
	int32_t GetNumOpponentsVolumeReductionInt() {
		return memory.read<int32_t>(m_addr + 748);
	}
	float GetOpponentListenerReductionFactorInt() {
		return memory.read<float>(m_addr + 752);
	}
	float GetOpponentListenerDistanceInt() {
		return memory.read<float>(m_addr + 756);
	}
	int32_t GetNumOpponentsVolumeReductionExt() {
		return memory.read<int32_t>(m_addr + 760);
	}
	float GetOpponentListenerReductionFactorExt() {
		return memory.read<float>(m_addr + 764);
	}
	int32_t GetMaxCarListenerFromDifferentLocation() {
		return memory.read<int32_t>(m_addr + 768);
	}
	float GetMinPressureForDeflationWarning() {
		return memory.read<float>(m_addr + 772);
	}
	float GetStepForDeflationComunication() {
		return memory.read<float>(m_addr + 776);
	}
	int32_t GetAudioEventOffsetTyreInflation() {
		return memory.read<int32_t>(m_addr + 780);
	}
	int32_t GetAudioEventOffsetTyreDeflation() {
		return memory.read<int32_t>(m_addr + 784);
	}
	int32_t GetAudioEventOffsetTyrePressure() {
		return memory.read<int32_t>(m_addr + 788);
	}
	float GetTestMinOpponentDirt() {
		return memory.read<float>(m_addr + 792);
	}
	enum class EAudioLog GetLogAudio() {
		return memory.read<enum class EAudioLog>(m_addr + 796);
	}
	bool GetDebugAudio() {
		return memory.read<bool>(m_addr + 797);
	}
	bool GetEngineExtEnabled() {
		return memory.read<bool>(m_addr + 798);
	}
	bool GetEngineIntEnabled() {
		return memory.read<bool>(m_addr + 799);
	}
	bool GetBodyWorkEnabled() {
		return memory.read<bool>(m_addr + 800);
	}
	bool GetWheelEnabled() {
		return memory.read<bool>(m_addr + 801);
	}
	bool GetWindEnabled() {
		return memory.read<bool>(m_addr + 802);
	}
	struct AWindDirectionalSource GetWindSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct AWindDirectionalSource(ptr_addr);
	}
	struct ARainBase GetRainActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct ARainBase(ptr_addr);
	}
	struct AAcParticles GetParticlesActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct AAcParticles(ptr_addr);
	}
	struct TArray<struct USkeletalMeshComponent> GetSkelMeshCompList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct TArray<struct USkeletalMeshComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcStereoLayerComponent
{
public:
	UAcStereoLayerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbLiveTexture() {
		return memory.read<char>(m_addr + 504);
	}
	char GetbSupportsDepth() {
		return memory.read<char>(m_addr + 504);
	}
	char GetbNoAlphaChannel() {
		return memory.read<char>(m_addr + 504);
	}
	struct UTexture GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct UTexture(ptr_addr);
	}
	struct UTexture GetLeftTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UTexture(ptr_addr);
	}
	char GetbQuadPreserveTextureRatio() {
		return memory.read<char>(m_addr + 528);
	}
	struct FVector2D GetQuadSize() {
		return memory.read<struct FVector2D>(m_addr + 532);
	}
	struct FBox2D GetUVRect() {
		return memory.read<struct FBox2D>(m_addr + 540);
	}
	float GetCylinderRadius() {
		return memory.read<float>(m_addr + 560);
	}
	float GetCylinderOverlayArc() {
		return memory.read<float>(m_addr + 564);
	}
	int32_t GetCylinderHeight() {
		return memory.read<int32_t>(m_addr + 568);
	}
	enum class EAcStereoLayerType GetStereoLayerType() {
		return memory.read<enum class EAcStereoLayerType>(m_addr + 572);
	}
	enum class EAcStereoLayerShape GetStereoLayerShape() {
		return memory.read<enum class EAcStereoLayerShape>(m_addr + 573);
	}
	int32_t GetPriority() {
		return memory.read<int32_t>(m_addr + 576);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcTextInput
{
public:
	UAcTextInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnTextCommited() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1504);
	}
	struct FMulticastInlineDelegate GetOnTextChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1520);
	}
	struct FMulticastInlineDelegate GetOnAborted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1536);
	}
	struct FMulticastInlineDelegate GetOnTextBoxBlur() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1552);
	}
	bool GetShowFilteredTextOnCommit() {
		return memory.read<bool>(m_addr + 1568);
	}
	bool GetFilterTextOnChange() {
		return memory.read<bool>(m_addr + 1569);
	}
	int32_t GetMinimumTextLength() {
		return memory.read<int32_t>(m_addr + 1572);
	}
	int32_t GetMaximumTextLength() {
		return memory.read<int32_t>(m_addr + 1576);
	}
	struct FText GetHintText() {
		return memory.read<struct FText>(m_addr + 1584);
	}
	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 1608);
	}
	struct FText GetHintTextMinimumLength() {
		return memory.read<struct FText>(m_addr + 1632);
	}
	struct FString GetRegularExpressionToStrip() {
		return memory.read<struct FString>(m_addr + 1656);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 1672);
	}
	struct FLinearColor GetMouseOverColor() {
		return memory.read<struct FLinearColor>(m_addr + 1760);
	}
	struct FLinearColor GetFocusedBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 1776);
	}
	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 1792);
	}
	struct UExtendedEditableText GetTextBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UExtendedEditableText(ptr_addr);
	}
	struct UBorder Getbackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UBorder(ptr_addr);
	}
	bool GettriggerChangeEvent() {
		return memory.read<bool>(m_addr + 1824);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcTrackReflectionController
{
public:
	AAcTrackReflectionController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSecondsBetweenTotalRefresh() {
		return memory.read<float>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};


class AGhostCarManager
{
public:
	AGhostCarManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinDistance() {
		return memory.read<float>(m_addr + 544);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 548);
	}
	float GetMaxOpacity() {
		return memory.read<float>(m_addr + 552);
	}
	float GetStartingFadeExtension() {
		return memory.read<float>(m_addr + 556);
	}
	struct FLinearColor GetBaseColor() {
		return memory.read<struct FLinearColor>(m_addr + 560);
	}
	float GetRedVariation() {
		return memory.read<float>(m_addr + 576);
	}
	float GetGreenVariation() {
		return memory.read<float>(m_addr + 580);
	}
	struct ACarAvatar GetghostCarAvatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct ACarAvatar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAcTrackSpline
{
public:
	AAcTrackSpline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USplineComponent GetSplineComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct USplineComponent(ptr_addr);
	}
	bool GetImportFewPoints() {
		return memory.read<bool>(m_addr + 552);
	}
	int32_t GetSplinePointOffset() {
		return memory.read<int32_t>(m_addr + 556);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceRealtimeStandingWidget
{
public:
	URaceRealtimeStandingWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFirstFlipTimer() {
		return memory.read<float>(m_addr + 1624);
	}
	float GetRegoularFlipInterval() {
		return memory.read<float>(m_addr + 1628);
	}
	URaceStandingItems GetWdgStandingItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return URaceStandingItems(ptr_addr);
	}
	struct UVerticalBox GetStandingList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UVerticalBox(ptr_addr);
	}
	struct UTextBlock GettxtStandingPosition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtStandingTotCars() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct URaceStandingItems GetPosition1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct URaceStandingItems(ptr_addr);
	}
	struct URaceStandingItems GetPosition2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct URaceStandingItems(ptr_addr);
	}
	struct URaceStandingItems GetPosition3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct URaceStandingItems(ptr_addr);
	}
	struct URaceStandingItems GetPositionAhead2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct URaceStandingItems(ptr_addr);
	}
	struct URaceStandingItems GetPositionAhead1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct URaceStandingItems(ptr_addr);
	}
	struct URaceStandingItems GetFocusedCarPosition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct URaceStandingItems(ptr_addr);
	}
	struct URaceStandingItems GetPositionBehind1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct URaceStandingItems(ptr_addr);
	}
	struct URaceStandingItems GetPositionBehind2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct URaceStandingItems(ptr_addr);
	}
	struct TArray<struct URaceStandingItems> GetRaceItemsList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct TArray<struct URaceStandingItems>(ptr_addr);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAcUserDocumentManager
{
public:
	UAcUserDocumentManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAcUserOptionsManager
{
public:
	UAcUserOptionsManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnUserOptionsChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnHUDOptionsChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}
	struct FMulticastInlineDelegate GetOnGhostCarOptionsChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 72);
	}
	struct FMulticastInlineDelegate GetOnMatchmakingParametersChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 88);
	}
	struct FMulticastInlineDelegate GetOnReplayOptionsChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}
	struct FMulticastInlineDelegate GetOnModuleOptionsChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}
	struct FUserOptions Getoptions() {
		return memory.read<struct FUserOptions>(m_addr + 184);
	}
	struct FUserOptions GetLastSavedOptions() {
		return memory.read<struct FUserOptions>(m_addr + 912);
	}
	struct FUserOptions GetLastBroadcastedOptions() {
		return memory.read<struct FUserOptions>(m_addr + 1640);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAdvancedScalabilityConfig
{
public:
	AAdvancedScalabilityConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSaveFlag() {
		return memory.read<float>(m_addr + 544);
	}
	float GetLightFunctionQuality() {
		return memory.read<float>(m_addr + 548);
	}
	float GetShadowQuality() {
		return memory.read<float>(m_addr + 552);
	}
	float GetMaxCascades() {
		return memory.read<float>(m_addr + 556);
	}
	float GetShadowMaxResolution() {
		return memory.read<float>(m_addr + 560);
	}
	float GetRadiusThreshold() {
		return memory.read<float>(m_addr + 564);
	}
	float GetDistanceScale() {
		return memory.read<float>(m_addr + 568);
	}
	float GetTransitionScale() {
		return memory.read<float>(m_addr + 572);
	}
	float GetMotionBlurQuality() {
		return memory.read<float>(m_addr + 576);
	}
	float GetBlurGBuffer() {
		return memory.read<float>(m_addr + 580);
	}
	float GetAmbientOcclusionLevels() {
		return memory.read<float>(m_addr + 584);
	}
	float GetAmbientOcclusionRadiusScale() {
		return memory.read<float>(m_addr + 588);
	}
	float GetDepthOfFieldQuality() {
		return memory.read<float>(m_addr + 592);
	}
	float GetRenderTargetPoolMin() {
		return memory.read<float>(m_addr + 596);
	}
	float GetLensFlareQuality() {
		return memory.read<float>(m_addr + 600);
	}
	float GetSceneColorFringeQuality() {
		return memory.read<float>(m_addr + 604);
	}
	float GetEyeAdaptationQuality() {
		return memory.read<float>(m_addr + 608);
	}
	float GetBloomQuality() {
		return memory.read<float>(m_addr + 612);
	}
	float GetFastBlurThreshold() {
		return memory.read<float>(m_addr + 616);
	}
	float GetUpscaleQuality() {
		return memory.read<float>(m_addr + 620);
	}
	float GetGrainQuantization() {
		return memory.read<float>(m_addr + 624);
	}
	float GetTranslucensyVolumeDim() {
		return memory.read<float>(m_addr + 628);
	}
	float GetRefractionQuality() {
		return memory.read<float>(m_addr + 632);
	}
	float GetSSR() {
		return memory.read<float>(m_addr + 636);
	}
	float GetSceneColorFormat() {
		return memory.read<float>(m_addr + 640);
	}
	float GetDetailMode() {
		return memory.read<float>(m_addr + 644);
	}
	float GetTranslucencyVolumeBlur() {
		return memory.read<float>(m_addr + 648);
	}
	float GetMaterialQualityLevel() {
		return memory.read<float>(m_addr + 652);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCommunicationManager
{
public:
	UCommunicationManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnNewMessage() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnDelMessage() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}
	struct TMap<struct FGuid, struct FCommsMessage> Getmessages() {
		return memory.read<struct TMap<struct FGuid, struct FCommsMessage>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAiCarController
{
public:
	AAiCarController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AAIHUD
{
public:
	AAIHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAIHUDWidget
{
public:
	UAIHUDWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AAIInfoHUD
{
public:
	AAIInfoHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAssistsPage
{
public:
	UAssistsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UPresetsPopup GetpresetPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return UPresetsPopup(ptr_addr);
	}
	struct UGenericSelectorItem GetGear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetClutch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetstabilityControl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetEngineStart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWiper() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem Getlights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitLimiter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetshowIdealLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UTextBlock GettxtCallingPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCommunicationPanel
{
public:
	UCommunicationPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UCommunicationPanelItemBase GetDefaultMessageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return UCommunicationPanelItemBase(ptr_addr);
	}
	struct UVerticalBox GetMessageList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetStickyList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetNormalList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UVerticalBox(ptr_addr);
	}
	bool GetIsPaused() {
		return memory.read<bool>(m_addr + 1656);
	}
	struct TMap<enum class ECommsCategory, UCommunicationPanelItemBase> GetMessageTypeMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct TMap<enum class ECommsCategory, UCommunicationPanelItemBase>(ptr_addr);
	}
	int32_t GetMaxVisibleTotal() {
		return memory.read<int32_t>(m_addr + 1744);
	}
	int32_t GetMaxVisibleSticky() {
		return memory.read<int32_t>(m_addr + 1748);
	}
	int32_t GetMaxVisibleNormal() {
		return memory.read<int32_t>(m_addr + 1752);
	}
	struct TMap<struct FGuid, struct UCommunicationPanelItemBase> GetStoredItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct TMap<struct FGuid, struct UCommunicationPanelItemBase>(ptr_addr);
	}
	struct TArray<enum class ECommsPriority> GetAllowedPriorities() {
		return memory.read<struct TArray<enum class ECommsPriority>>(m_addr + 1856);
	}
	struct UCommunicationManager GetCommunicationManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct UCommunicationManager(ptr_addr);
	}
	bool GetPollMessages() {
		return memory.read<bool>(m_addr + 1880);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1888);
		return struct AAcRaceGameMode(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AAudioActor
{
public:
	AAudioActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioComms
{
public:
	UAudioComms(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EAudioCommsDataType, struct FAudioCommsData> GetmapComms() {
		return memory.read<struct TMap<enum class EAudioCommsDataType, struct FAudioCommsData>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class APlayerCarController
{
public:
	APlayerCarController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserWidget GetwReplayHud() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return UUserWidget(ptr_addr);
	}
	struct UUserWidget GetReplayHUD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAudioOptionsPage
{
public:
	UAudioOptionsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCareerTeamCreationPage
{
public:
	UCareerTeamCreationPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcTextInput GetTeamName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UAcTextInput(ptr_addr);
	}
	struct UAcTextInput GetteammateName1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UAcTextInput(ptr_addr);
	}
	struct UAcTextInput GetteammateName2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UAcTextInput(ptr_addr);
	}
	struct UAcTextInput GetteammateLastName1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UAcTextInput(ptr_addr);
	}
	struct UAcTextInput GetteammateLastName2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UAcTextInput(ptr_addr);
	}
	struct UAcTextInput GetCarNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UAcTextInput(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBasicCar01Widget
{
public:
	UBasicCar01Widget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtUnit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRPMS() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSpeed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UProgressBar GetbarRPMS() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UProgressBar(ptr_addr);
	}
	struct UImage GetimgRpms() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtABSSetting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTCSetting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTCCutSetting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtBBSetting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEMSetting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UTextBlock(ptr_addr);
	}
	struct UWidgetAnimation GetfuelIconBlinkAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UTextBlock GettxtFuelLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEstimatedLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtFuelPerLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UTextBlock(ptr_addr);
	}
	struct UProgressBar GetbarThrottle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UProgressBar(ptr_addr);
	}
	struct UProgressBar GetbarBrake() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UProgressBar(ptr_addr);
	}
	struct UProgressBar GetbarFFB() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct UProgressBar(ptr_addr);
	}
	struct UProgressBar GetbarCL() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UProgressBar(ptr_addr);
	}
	struct UBorder GetborderThrottleMinIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderThrottleMaxIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderBrakeMinIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderBrakeMaxIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1824);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderFFBMinIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderFFBMaxIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderCLMinIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1848);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderCLMaxIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1856);
		return struct UBorder(ptr_addr);
	}
	struct FLinearColor GetThrottleIndicatorColor() {
		return memory.read<struct FLinearColor>(m_addr + 1864);
	}
	struct FLinearColor GetBrakeIndicatorColor() {
		return memory.read<struct FLinearColor>(m_addr + 1880);
	}
	struct FLinearColor GetPedalIndicatorAntiColor() {
		return memory.read<struct FLinearColor>(m_addr + 1896);
	}
	struct FLinearColor GetFFIndicatorColor() {
		return memory.read<struct FLinearColor>(m_addr + 1912);
	}
	struct FLinearColor GetFFClippingColor() {
		return memory.read<struct FLinearColor>(m_addr + 1928);
	}
	struct FLinearColor GetClutchIndicatorColor() {
		return memory.read<struct FLinearColor>(m_addr + 1944);
	}
	struct FLinearColor GetClutchClippingColor() {
		return memory.read<struct FLinearColor>(m_addr + 1960);
	}
	struct FLinearColor GetRpmNormalColor() {
		return memory.read<struct FLinearColor>(m_addr + 1976);
	}
	struct FLinearColor GetRpmSuggestedShiftColor() {
		return memory.read<struct FLinearColor>(m_addr + 1992);
	}
	struct FLinearColor GetRpmLimiterColor() {
		return memory.read<struct FLinearColor>(m_addr + 2008);
	}
	float GetStartMaterialArcValue() {
		return memory.read<float>(m_addr + 2024);
	}
	float GetEndMaterialArcValue() {
		return memory.read<float>(m_addr + 2028);
	}
	float GetFFMinLevelDisplay() {
		return memory.read<float>(m_addr + 2032);
	}
	struct UMaterialInstance GetmiRpms() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2040);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetmiRpmDynamic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2048);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlackPage
{
public:
	UBlackPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnFadeAnimationFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1320);
	}
	struct UWidgetAnimation GetFadeAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ACameraDebugHUD
{
public:
	ACameraDebugHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ACameraTV
{
public:
	ACameraTV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBoxComponent GetBoxCollider() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UBoxComponent(ptr_addr);
	}
	struct UCineCameraComponent GetCameraComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UCineCameraComponent(ptr_addr);
	}
	struct UCurveFloat GetFovCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UCurveFloat(ptr_addr);
	}
	int32_t GetSet() {
		return memory.read<int32_t>(m_addr + 568);
	}
	float GetShadowExponent() {
		return memory.read<float>(m_addr + 572);
	}
	float GetShadowDistanceFromFocusedCar() {
		return memory.read<float>(m_addr + 576);
	}
	float GetShadowDistanceWithoutFocusedCar() {
		return memory.read<float>(m_addr + 580);
	}
	struct USplineComponent GetSplineComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct USplineComponent(ptr_addr);
	}
	bool GetbFocusCar() {
		return memory.read<bool>(m_addr + 592);
	}
	bool GetbFollowSpline() {
		return memory.read<bool>(m_addr + 593);
	}
	float GetMovementSpeed() {
		return memory.read<float>(m_addr + 596);
	}
	float GetSwitchTime() {
		return memory.read<float>(m_addr + 600);
	}
	float GetSwitchLerpTime() {
		return memory.read<float>(m_addr + 604);
	}
	float GetActivationDistance() {
		return memory.read<float>(m_addr + 608);
	}
	bool GetbIsFixed() {
		return memory.read<bool>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCarAudio
{
public:
	UCarAudio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKSAudioComponent GetEngineInt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetEngineExt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetEngineReturnTest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetWheelIntRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetWheelIntLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetWheelIntRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetWheelIntLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetWheelExtRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetWheelExtLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetWheelExtRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetWheelExtLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent Getbodywork() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent Getwind() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UKSAudioComponent Getrefuel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKSAudioComponent(ptr_addr);
	}
	struct UFMODBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UFMODBank(ptr_addr);
	}
	float GetRayLength() {
		return memory.read<float>(m_addr + 632);
	}
	float GetEngineReflectionSmooth() {
		return memory.read<float>(m_addr + 636);
	}
	bool GetAudioReflection() {
		return memory.read<bool>(m_addr + 640);
	}
	bool GetdrawTestSphere() {
		return memory.read<bool>(m_addr + 641);
	}
	float GetVolumeMultiplier() {
		return memory.read<float>(m_addr + 644);
	}
	float GetGasAlphaSmooth() {
		return memory.read<float>(m_addr + 648);
	}
	int32_t GetHitNumEvents() {
		return memory.read<int32_t>(m_addr + 652);
	}
	float GetHitMinTime() {
		return memory.read<float>(m_addr + 656);
	}
	float GetHitMaxDistance() {
		return memory.read<float>(m_addr + 660);
	}
	float GetHitReplacingTime() {
		return memory.read<float>(m_addr + 664);
	}
	float GetMinPressure() {
		return memory.read<float>(m_addr + 668);
	}
	float GetMaxPressure() {
		return memory.read<float>(m_addr + 672);
	}
	float GetRechargePressureThreshold() {
		return memory.read<float>(m_addr + 676);
	}
	struct TArray<struct UKSAudioComponent> GetHitSounds() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct TArray<struct UKSAudioComponent>(ptr_addr);
	}
	struct TArray<struct UKSAudioComponent> GetRollingInt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct TArray<struct UKSAudioComponent>(ptr_addr);
	}
	struct TArray<struct UKSAudioComponent> GetRollingExt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct TArray<struct UKSAudioComponent>(ptr_addr);
	}
	struct TArray<struct UKSAudioComponent> GetEngines() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct TArray<struct UKSAudioComponent>(ptr_addr);
	}
	struct TArray<struct UKSAudioComponent> GetHitAudioComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct TArray<struct UKSAudioComponent>(ptr_addr);
	}
	struct TArray<struct FHitAudio> GethitAudios() {
		return memory.read<struct TArray<struct FHitAudio>>(m_addr + 784);
	}
	struct TArray<enum class EObjectTypeQuery> GetObjectTypes() {
		return memory.read<struct TArray<enum class EObjectTypeQuery>>(m_addr + 1048);
	}

private:
	std::uint64_t m_addr = 0;
};


class ACarAvatar
{
public:
	ACarAvatar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCarData GetCarData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UCarData(ptr_addr);
	}
	struct UAIDataAsset GetAIData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UAIDataAsset(ptr_addr);
	}
	struct USetupManager GetSetupManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct USetupManager(ptr_addr);
	}
	struct UAcCarAnimations GetCarAnimations() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UAcCarAnimations(ptr_addr);
	}
	struct UStaticMeshComponent GetColliderMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UAcCarLightingSystem GetCarLightingSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UAcCarLightingSystem(ptr_addr);
	}
	struct UAcCarSystems GetcarSystems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UAcCarSystems(ptr_addr);
	}
	struct UAcLedSystem GetCarLedSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UAcLedSystem(ptr_addr);
	}
	struct UTexture2D GetNumberPlateDigits() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UTexture2D(ptr_addr);
	}
	struct UTextureRenderTarget2D GetNumberPlateRT() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	struct UTextureRenderTarget2D GetNumberTagRT() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	bool GetbIsShowroom() {
		return memory.read<bool>(m_addr + 784);
	}
	struct TArray<struct FTransform> GetShowroomWheels() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 792);
	}
	struct FVector GetshowroomOffset() {
		return memory.read<struct FVector>(m_addr + 848);
	}
	struct FVector GetshowroomRotation() {
		return memory.read<struct FVector>(m_addr + 860);
	}
	struct UCarAudio GetCarAudio() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UCarAudio(ptr_addr);
	}
	struct TArray<struct FTyreCompoundSetDefinition> GetTyreCompounds() {
		return memory.read<struct TArray<struct FTyreCompoundSetDefinition>>(m_addr + 880);
	}
	struct TArray<struct FWingState> Getuwingstate() {
		return memory.read<struct TArray<struct FWingState>>(m_addr + 896);
	}
	struct FModelCockpitCamInfo GetCameraViewInfo() {
		return memory.read<struct FModelCockpitCamInfo>(m_addr + 920);
	}
	bool GetbIsLeftHandedDrive() {
		return memory.read<bool>(m_addr + 1024);
	}
	struct UAcExhaustComponent GetExhaustComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UAcExhaustComponent(ptr_addr);
	}
	struct UAcCarPitstopManager GetPitstopManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UAcCarPitstopManager(ptr_addr);
	}
	float GetTyreBlurMinSpeed() {
		return memory.read<float>(m_addr + 1048);
	}
	float GetTyreBlurMaxSpeed() {
		return memory.read<float>(m_addr + 1052);
	}
	float GetTempSlickRainBase() {
		return memory.read<float>(m_addr + 1056);
	}
	struct TSoftObjectPtr<USkeletalMesh> GetSprintExternalMesh() {
		return memory.read<struct TSoftObjectPtr<USkeletalMesh>>(m_addr + 1064);
	}
	struct TSoftObjectPtr<USkeletalMesh> GetEnduranceExternalMesh() {
		return memory.read<struct TSoftObjectPtr<USkeletalMesh>>(m_addr + 1104);
	}
	struct TArray<struct UStaticMesh> GetStaticRims_LF_RF_LR_RR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct TArray<struct UStaticMesh>(ptr_addr);
	}
	struct FName GetStaticRimSlotName() {
		return memory.read<struct FName>(m_addr + 1160);
	}
	struct FName GetStaticRimDecalsSlotName() {
		return memory.read<struct FName>(m_addr + 1168);
	}
	struct TArray<struct UStaticMesh> GetBlurredRims_LF_RF_LR_RR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct TArray<struct UStaticMesh>(ptr_addr);
	}
	struct FName GetBlurredRimSlotName() {
		return memory.read<struct FName>(m_addr + 1192);
	}
	struct FName GetBlurredRimDecalsSlotName() {
		return memory.read<struct FName>(m_addr + 1200);
	}
	struct FName GetBlurredRimBlurSlotName() {
		return memory.read<struct FName>(m_addr + 1208);
	}
	struct FName GetBannerSlotName() {
		return memory.read<struct FName>(m_addr + 1216);
	}
	struct TArray<struct FDamagePart> GetDamageParts() {
		return memory.read<struct TArray<struct FDamagePart>>(m_addr + 1224);
	}
	float GetminDamageSpeed() {
		return memory.read<float>(m_addr + 1240);
	}
	float GetfullDamageSpeed() {
		return memory.read<float>(m_addr + 1244);
	}
	float GetminDamageSpeedGlasses() {
		return memory.read<float>(m_addr + 1248);
	}
	float GetfullDamageSpeedGlasses() {
		return memory.read<float>(m_addr + 1252);
	}
	float GetSuspGraphicsOffsetFront() {
		return memory.read<float>(m_addr + 1256);
	}
	float GetSuspGraphicsOffsetRear() {
		return memory.read<float>(m_addr + 1260);
	}
	struct FString GetCarName() {
		return memory.read<struct FString>(m_addr + 1264);
	}
	struct FString GetConfigName() {
		return memory.read<struct FString>(m_addr + 1280);
	}
	struct FVector GetGraphicsOffset() {
		return memory.read<struct FVector>(m_addr + 1296);
	}
	float GetGraphicsPitchRotation() {
		return memory.read<float>(m_addr + 1308);
	}
	struct USkidmarks GetSkidmarks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct USkidmarks(ptr_addr);
	}
	struct UCameraComponent GetVRCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UCameraComponent(ptr_addr);
	}
	struct UCameraComponent GetOnboardCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UCameraComponent(ptr_addr);
	}
	struct UAC2WaterSpray Getspray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UAC2WaterSpray(ptr_addr);
	}
	struct UAC2TyreSmoke GetSmoke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UAC2TyreSmoke(ptr_addr);
	}
	struct TArray<struct UStaticMeshComponent> GetTyreMeshComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct TArray<struct UStaticMeshComponent>(ptr_addr);
	}
	struct TArray<struct UStaticMeshComponent> GetStaticRimMeshComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct TArray<struct UStaticMeshComponent>(ptr_addr);
	}
	struct TArray<struct UStaticMeshComponent> GetBlurredRimMeshComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct TArray<struct UStaticMeshComponent>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetStaticRimMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetBLurredRimMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetStaticRimDecalsMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetBlurredRimDecalsMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetBlurredRimBlurMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetBlurredMaterialsExternalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct FName GetBrakeDiskMaterialName() {
		return memory.read<struct FName>(m_addr + 1496);
	}
	struct UMaterialInstanceDynamic GetBrakeDiskMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	bool GetusePhysicsTemp() {
		return memory.read<bool>(m_addr + 1512);
	}
	float GetBrakeDiscEmissiveMult() {
		return memory.read<float>(m_addr + 1516);
	}
	float GetBrakeDiscTemperature() {
		return memory.read<float>(m_addr + 1520);
	}
	struct UCurveLinearColor GetBrakeDiskColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UCurveLinearColor(ptr_addr);
	}
	struct FName GetIntWindowsMaterialName() {
		return memory.read<struct FName>(m_addr + 1536);
	}
	struct UMaterialInstanceDynamic GetIntWindowsMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetRainStreaksSpeedMult() {
		return memory.read<float>(m_addr + 1552);
	}
	struct UCurveLinearColor GetRainStreaksColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UCurveLinearColor(ptr_addr);
	}
	float GetRainStreaksDeltaSpeedFade() {
		return memory.read<float>(m_addr + 1568);
	}
	float GetRainStreaksFadeTime() {
		return memory.read<float>(m_addr + 1572);
	}
	float GetRainStreaksRandRange() {
		return memory.read<float>(m_addr + 1576);
	}
	struct FName GetCarPaintMaterialName() {
		return memory.read<struct FName>(m_addr + 1580);
	}
	struct UCurveLinearColor GetDirtPerChannelCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UCurveLinearColor(ptr_addr);
	}
	struct UTexture2D GetDirtTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetIntWindowsDirtTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTexture2D(ptr_addr);
	}
	struct UCurveLinearColor GetDamagePerChannelCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UCurveLinearColor(ptr_addr);
	}
	struct UCurveFloat GetGlassDamageCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetGlassDamageSunElevCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UCurveFloat(ptr_addr);
	}
	struct UTexture2D GetDamageTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetcustomSponsorTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetcustomDecalsTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTexture2D(ptr_addr);
	}
	struct FString GetcustomLiveryName() {
		return memory.read<struct FString>(m_addr + 1664);
	}
	struct UMaterialInstanceDynamic GetCarPaintMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetNumberPlateMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetBannerMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetLabelMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetLabelMaterialTV() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	char GetMainDisplayIndex() {
		return memory.read<char>(m_addr + 1720);
	}
	UAcCarDigitalDisplayWrapper GetDigitalDisplayWrapper() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return UAcCarDigitalDisplayWrapper(ptr_addr);
	}
	struct TArray<struct UAcCarDigitalDisplay> GetDigitalDisplays() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct TArray<struct UAcCarDigitalDisplay>(ptr_addr);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetDisplayPages() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 1752);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetPracticeDefaultPage() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 1768);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetQualifyingDefaultPage() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 1784);
	}
	struct TArray<enum class ECarDigitalDisplayPages> GetRaceDefaultPage() {
		return memory.read<struct TArray<enum class ECarDigitalDisplayPages>>(m_addr + 1800);
	}
	struct UCurveFloat GetDigitalDisplayOpacityMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetDigitalDisplayCloudMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1824);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetDigitalDisplayCloudInfluenceMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UCurveFloat(ptr_addr);
	}
	float GetGearTimeToIgnoreNeutralBase() {
		return memory.read<float>(m_addr + 2380);
	}
	struct FString GetNeutralGearText() {
		return memory.read<struct FString>(m_addr + 2384);
	}
	bool GethasEnduranceAnimation() {
		return memory.read<bool>(m_addr + 2400);
	}
	struct UMaterialInstance GetGhostCarMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2408);
		return struct UMaterialInstance(ptr_addr);
	}
	struct UMaterialInterface GetVirtualMirrorMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2416);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UProceduralMeshComponent GetVirtualMirrorMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2424);
		return struct UProceduralMeshComponent(ptr_addr);
	}
	struct UTextRenderComponent GetLabelComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2432);
		return struct UTextRenderComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetExternalMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2440);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetGhostCarDynamicMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8456);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetCarpenterMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8464);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct FCarSetup GetCarSetup() {
		return memory.read<struct FCarSetup>(m_addr + 8744);
	}
	struct FPitstopMFD GetPitstopMFD() {
		return memory.read<struct FPitstopMFD>(m_addr + 9800);
	}
	struct TArray<struct FTyreSet> GettyreSets() {
		return memory.read<struct TArray<struct FTyreSet>>(m_addr + 10008);
	}
	struct TArray<struct FTyreSet> GetstartingTyreSets() {
		return memory.read<struct TArray<struct FTyreSet>>(m_addr + 10024);
	}
	int32_t GettyreSetsNumber() {
		return memory.read<int32_t>(m_addr + 10040);
	}
	int32_t GetcurrentTyreSetIndex() {
		return memory.read<int32_t>(m_addr + 10044);
	}
	bool GetmanualTyreSet() {
		return memory.read<bool>(m_addr + 10048);
	}
	bool GetmanualDriverSwap() {
		return memory.read<bool>(m_addr + 10049);
	}
	struct FMulticastInlineDelegate GetonCarLocationChangeUI() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 10056);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetShadowTyresMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10072);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct UAcCarTimingServices GettimingServices() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10424);
		return struct UAcCarTimingServices(ptr_addr);
	}
	struct UAcAssistController GetassistController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10432);
		return struct UAcAssistController(ptr_addr);
	}
	struct AAcPlayerStart GetpitlanePlayerStart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 10440);
		return struct AAcPlayerStart(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URealismPage
{
public:
	URealismPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGenericSelectorItem GetdamageRate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GettyreWear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetunlimitedTyreSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetbrakeFading() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFormationLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPenalties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UTextBlock GettxtCallingPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UTextBlock(ptr_addr);
	}
	UPresetsPopup GetpresetPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return UPresetsPopup(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBrakeCompound
{
public:
	UBrakeCompound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBrakePadName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FBrakeDiscData GetDiscData() {
		return memory.read<struct FBrakeDiscData>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTyreCompoundSet
{
public:
	UTyreCompoundSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTyreCompoundName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FTyreCompoundData GetFront() {
		return memory.read<struct FTyreCompoundData>(m_addr + 64);
	}
	struct FTyreCompoundData GetRear() {
		return memory.read<struct FTyreCompoundData>(m_addr + 488);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplayHUD
{
public:
	UReplayHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCurrentPauses() {
		return memory.read<bool>(m_addr + 1320);
	}
	float GetSliderPoint() {
		return memory.read<float>(m_addr + 1324);
	}
	float GetTimeMultiplier() {
		return memory.read<float>(m_addr + 1328);
	}
	bool GetSliderPicked() {
		return memory.read<bool>(m_addr + 1332);
	}
	int32_t GetCurrentTime() {
		return memory.read<int32_t>(m_addr + 1336);
	}
	int32_t GetStartTime() {
		return memory.read<int32_t>(m_addr + 1340);
	}
	int32_t GettotalTime() {
		return memory.read<int32_t>(m_addr + 1344);
	}
	float GetHideTimeout() {
		return memory.read<float>(m_addr + 1348);
	}
	struct FText GetJump5SecondsBackText() {
		return memory.read<struct FText>(m_addr + 1352);
	}
	struct FText GetPlayText() {
		return memory.read<struct FText>(m_addr + 1376);
	}
	struct FText GetPauseText() {
		return memory.read<struct FText>(m_addr + 1400);
	}
	struct FText GetSlowMotionText() {
		return memory.read<struct FText>(m_addr + 1424);
	}
	struct FText GetReduceSpeedText() {
		return memory.read<struct FText>(m_addr + 1448);
	}
	struct FText GetResetSpeedText() {
		return memory.read<struct FText>(m_addr + 1472);
	}
	struct UUserWidget GetTimeLineMarker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UUserWidget(ptr_addr);
	}
	UUserWidget GetWdgTimeLineMarkerItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return UUserWidget(ptr_addr);
	}
	struct UCanvasPanel GetCursorCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetRedCursor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UCanvasPanel(ptr_addr);
	}
	struct USlider GetTimeSlider() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct USlider(ptr_addr);
	}
	struct UTextBlock GettxtCurrentTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRewindSpeed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtForwardSpeed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPlayPause() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtForMarker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UTextBlock(ptr_addr);
	}
	struct UProgressBar GetTimeBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UProgressBar(ptr_addr);
	}
	struct UImage GetimgPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgPause() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UImage(ptr_addr);
	}
	struct UWidget GetbtnPhoto() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UWidget(ptr_addr);
	}
	struct UTextBlock GettxtCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UTextBlock(ptr_addr);
	}
	UPresetsPopup GetloadSavePopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return UPresetsPopup(ptr_addr);
	}
	bool GetIsCapturingNavInput() {
		return memory.read<bool>(m_addr + 1632);
	}
	bool GetPhotomode() {
		return memory.read<bool>(m_addr + 1633);
	}
	bool GetIsPanelHidden() {
		return memory.read<bool>(m_addr + 1634);
	}
	struct APlayerCarController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct APlayerCarController(ptr_addr);
	}
	struct UReplayManager GetReplayManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UReplayManager(ptr_addr);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct AAcRaceGameMode(ptr_addr);
	}
	struct AACPlayerCameraManager GetCamManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct AACPlayerCameraManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCarData
{
public:
	UCarData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetScreenName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	bool GetImportComponentsData() {
		return memory.read<bool>(m_addr + 64);
	}
	float GetMassKG() {
		return memory.read<float>(m_addr + 68);
	}
	float GetTorsionalRigidity() {
		return memory.read<float>(m_addr + 72);
	}
	float GetTorsionalDamping() {
		return memory.read<float>(m_addr + 76);
	}
	struct FVector GetInertia() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	float GetMinimumHeight() {
		return memory.read<float>(m_addr + 92);
	}
	float GetTopArea() {
		return memory.read<float>(m_addr + 96);
	}
	struct FSteerData GetSteerData() {
		return memory.read<struct FSteerData>(m_addr + 100);
	}
	struct FFuelData GetFuelData() {
		return memory.read<struct FFuelData>(m_addr + 120);
	}
	struct FBrakesData GetBrakesData() {
		return memory.read<struct FBrakesData>(m_addr + 152);
	}
	struct TArray<struct UBrakeCompound> GetFrontBrakesSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct TArray<struct UBrakeCompound>(ptr_addr);
	}
	struct TArray<struct UBrakeCompound> GetRearBrakesSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct TArray<struct UBrakeCompound>(ptr_addr);
	}
	struct FEngineData GetEngineData() {
		return memory.read<struct FEngineData>(m_addr + 240);
	}
	struct FDrivetrainData GetDrivetrain() {
		return memory.read<struct FDrivetrainData>(m_addr + 392);
	}
	struct FSuspData GetSuspensions() {
		return memory.read<struct FSuspData>(m_addr + 576);
	}
	struct FARBData GetARBFront() {
		return memory.read<struct FARBData>(m_addr + 1240);
	}
	struct FARBData GetARBRear() {
		return memory.read<struct FARBData>(m_addr + 1244);
	}
	struct FTractionControl GetTractionControl() {
		return memory.read<struct FTractionControl>(m_addr + 1248);
	}
	struct FABSData GetAbs() {
		return memory.read<struct FABSData>(m_addr + 1296);
	}
	int32_t GetmaxGearSpeedLimiter() {
		return memory.read<int32_t>(m_addr + 1328);
	}
	struct FVector GetfuelTankPosition() {
		return memory.read<struct FVector>(m_addr + 1332);
	}
	float GetridePickupPointHeightF() {
		return memory.read<float>(m_addr + 1344);
	}
	float GetridePickupPointHeightR() {
		return memory.read<float>(m_addr + 1348);
	}
	struct TArray<struct FColliderBoxesData> GetColliderBoxesDataData() {
		return memory.read<struct TArray<struct FColliderBoxesData>>(m_addr + 1352);
	}
	struct TArray<struct FDownforceData> GetDownforcesData() {
		return memory.read<struct TArray<struct FDownforceData>>(m_addr + 1368);
	}
	struct TArray<struct FWingData> GetWingsData() {
		return memory.read<struct TArray<struct FWingData>>(m_addr + 1384);
	}
	float GetAiWidthAddition() {
		return memory.read<float>(m_addr + 1416);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTrackGenome
{
public:
	UTrackGenome(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTrackGene> GetGenes() {
		return memory.read<struct TArray<struct FTrackGene>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCarDriverSelectionPanel
{
public:
	UCarDriverSelectionPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESelectionPanelType GetPanelType() {
		return memory.read<enum class ESelectionPanelType>(m_addr + 1504);
	}
	struct UWidgetSwitcher GetImageSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UButton GetbtnUp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UButton(ptr_addr);
	}
	struct UButton GetbtnDown() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UButton(ptr_addr);
	}
	struct UTextBlock GetPanelTitle1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPanelTitle2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPanelTitle3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetPanelTitle4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetPanelImageOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgTeam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTextBlock(ptr_addr);
	}
	struct UGridPanel GetTextGrid() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UGridPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCareerCarSelectionPage
{
public:
	UCareerCarSelectionPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ALevelSequenceActor GetLevelSequenceActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct ALevelSequenceActor(ptr_addr);
	}
	bool GetisPlayingSequence() {
		return memory.read<bool>(m_addr + 1328);
	}
	struct FText GetOfficialListFilterText() {
		return memory.read<struct FText>(m_addr + 1336);
	}
	struct FText GetFullListFilterText() {
		return memory.read<struct FText>(m_addr + 1360);
	}
	struct FText GetSprintListFilterText() {
		return memory.read<struct FText>(m_addr + 1384);
	}
	struct FText GetEnduranceListFilterText() {
		return memory.read<struct FText>(m_addr + 1408);
	}
	struct ACameraActor GetCurrentShowroomCam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct ACameraActor(ptr_addr);
	}
	struct UCarDriverSelectionPanel GetModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct UCarDriverSelectionPanel GetTeam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct UCarDriverSelectionPanel GetNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct UCarDriverSelectionPanel GetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct UTextBlock GettxtShowRoomCarInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtDebutYear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UTextBlock(ptr_addr);
	}
	struct UWrapBox GetwrapCarEventTypes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UWrapBox(ptr_addr);
	}
	struct UGenericMappedLabel GetCarCup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UGenericMappedLabel(ptr_addr);
	}
	struct UGenericMappedLabel GetDriverLicense() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UGenericMappedLabel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCareerDebugHUD
{
public:
	UCareerDebugHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtMedal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTopQualifier() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtOvertake() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHammerTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtProfessionality() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHunter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UTextBlock(ptr_addr);
	}
	struct UGenericBarItem GetselectMedal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetselectTopQualifier() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetselectOvertake() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetselectHammerTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetselectProfessionality() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetselectHunter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UGenericBarItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMenuManager
{
public:
	UMenuManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UAcPageBase> GetPages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UAcPageBase>(ptr_addr);
	}
	struct UAcMenuState GetMenuStateBinary() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UAcMenuState(ptr_addr);
	}
	struct FMenuState GetMenuState() {
		return memory.read<struct FMenuState>(m_addr + 64);
	}
	struct UBlackPage GetBlackCurtain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2080);
		return struct UBlackPage(ptr_addr);
	}
	bool GetisPitMenuFullscreen() {
		return memory.read<bool>(m_addr + 2090);
	}
	bool GetTrackNavigation() {
		return memory.read<bool>(m_addr + 2091);
	}
	UAcPageBase GetCurrentRootPageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2096);
		return UAcPageBase(ptr_addr);
	}
	struct UAcMenuData GetMenuData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2112);
		return struct UAcMenuData(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCareerStartPage
{
public:
	UCareerStartPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetQuitPopUpTitle() {
		return memory.read<struct FText>(m_addr + 1320);
	}
	struct FText GetQuitPopUpText() {
		return memory.read<struct FText>(m_addr + 1344);
	}
	UYesNoPopup GetYesNoPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return UYesNoPopup(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCareerState
{
public:
	UCareerState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCareerSaveData GetcareerData() {
		return memory.read<struct FCareerSaveData>(m_addr + 40);
	}
	bool GetisLastEventResultAvailable() {
		return memory.read<bool>(m_addr + 632);
	}
	bool GetisOverrideResultAvailable() {
		return memory.read<bool>(m_addr + 633);
	}
	struct FCareerEventResult GetoverrideResult() {
		return memory.read<struct FCareerEventResult>(m_addr + 636);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCarInitializer
{
public:
	UCarInitializer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCarMapItem
{
public:
	UCarMapItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetCarImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetOutline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetPosition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetRaceNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetbrdLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBorder(ptr_addr);
	}
	int32_t GetcarId() {
		return memory.read<int32_t>(m_addr + 648);
	}
	int32_t GetgridPosition() {
		return memory.read<int32_t>(m_addr + 652);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCarSelectionPage
{
public:
	UCarSelectionPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ALevelSequenceActor GetLevelSequenceActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct ALevelSequenceActor(ptr_addr);
	}
	bool GetisPlayingSequence() {
		return memory.read<bool>(m_addr + 1328);
	}
	struct FText GetOfficialListFilterText() {
		return memory.read<struct FText>(m_addr + 1336);
	}
	struct FText GetFullListFilterText() {
		return memory.read<struct FText>(m_addr + 1360);
	}
	struct FText GetSprintListFilterText() {
		return memory.read<struct FText>(m_addr + 1384);
	}
	struct FText GetEnduranceListFilterText() {
		return memory.read<struct FText>(m_addr + 1408);
	}
	struct UCarDriverSelectionPanel GetModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct UCarDriverSelectionPanel GetTeam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct UCarDriverSelectionPanel GetNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct UCarDriverSelectionPanel GetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct UCarDriverSelectionPanel GetTemplateOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UCarDriverSelectionPanel(ptr_addr);
	}
	struct USizeBox GetgroupVariant() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct USizeBox(ptr_addr);
	}
	struct UTextBlock GettxtShowRoomCarInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtFilterBy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtDebutYear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UTextBlock(ptr_addr);
	}
	struct UWrapBox GetwrapCarEventTypes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UWrapBox(ptr_addr);
	}
	struct UGenericMappedLabel GetCarCup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UGenericMappedLabel(ptr_addr);
	}
	struct UGenericMappedLabel GetDriverLicense() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UGenericMappedLabel(ptr_addr);
	}
	bool GetisMultiPlayer() {
		return memory.read<bool>(m_addr + 1528);
	}
	struct ACameraActor GetCurrentShowroomCam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct ACameraActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCarSelectionPanel
{
public:
	UCarSelectionPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UChampLeaderboardPage
{
public:
	UChampLeaderboardPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetPlayerPlateColor() {
		return memory.read<struct FLinearColor>(m_addr + 608);
	}
	struct FLinearColor GetPlateColor() {
		return memory.read<struct FLinearColor>(m_addr + 624);
	}
	UChampLeaderboardItem GetItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return UChampLeaderboardItem(ptr_addr);
	}
	struct UScrollBox GetScroll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UScrollBox(ptr_addr);
	}
	struct UGenericSelectorItem GetClassItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetCupItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFilterItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetCategoryItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UGenericSelectorItem(ptr_addr);
	}
	char GetpointFilter() {
		return memory.read<char>(m_addr + 688);
	}

private:
	std::uint64_t m_addr = 0;
};


class APhysicsAvatar
{
public:
	APhysicsAvatar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UChampLeaderboardTable
{
public:
	UChampLeaderboardTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UScrollBox GetScrollTimes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UScrollBox(ptr_addr);
	}
	struct UTextBlock GettxtNoLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	UChampLeaderboardItem GetItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return UChampLeaderboardItem(ptr_addr);
	}
	bool GetautoFocusAfterPopulate() {
		return memory.read<bool>(m_addr + 1600);
	}
	struct TArray<enum class ECupCategory> GetAvailableCategories() {
		return memory.read<struct TArray<enum class ECupCategory>>(m_addr + 1608);
	}
	struct TArray<enum class ECarGroup> GetAvailableCarGroups() {
		return memory.read<struct TArray<enum class ECarGroup>>(m_addr + 1624);
	}
	struct TMap<enum class EBrandType, struct UTexture2D> GetBrandIconCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct TMap<enum class EBrandType, struct UTexture2D>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWingComponent
{
public:
	UWingComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSpan() {
		return memory.read<float>(m_addr + 504);
	}
	float GetChord() {
		return memory.read<float>(m_addr + 508);
	}
	bool GetIsFin() {
		return memory.read<bool>(m_addr + 512);
	}
	struct UCurveFloat GetlutAOA_CL() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutAOA_CD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutGH_CL() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutGH_CD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UCurveFloat(ptr_addr);
	}
	float GetclGain() {
		return memory.read<float>(m_addr + 552);
	}
	float GetcdGain() {
		return memory.read<float>(m_addr + 556);
	}
	float GetyawGain() {
		return memory.read<float>(m_addr + 560);
	}
	float GetdefaultAngle() {
		return memory.read<float>(m_addr + 564);
	}
	float GetdamageCL[5]() {
		return memory.read<float>(m_addr + 568);
	}
	float GetdamageCD[5]() {
		return memory.read<float>(m_addr + 588);
	}
	struct TArray<struct FDynamicWingControllerData> GetWingControllerData() {
		return memory.read<struct TArray<struct FDynamicWingControllerData>>(m_addr + 608);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChampMainPage
{
public:
	UChampMainPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStartSessionPanel GetStartEventItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UStartSessionPanel(ptr_addr);
	}
	struct UStartSessionPanel GetResumeEventItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UStartSessionPanel(ptr_addr);
	}
	struct UAcPanelBase GetLeaderboardItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetAssistItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UTextBlock GettxtTrackName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWeather() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWeatherIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgCircuitCountryFlag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgTrackMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgPoster() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChampPageResults
{
public:
	UChampPageResults(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHorizontalBox GetSessionMenu() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2944);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UGenericBarItem GetbtnNext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2952);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem Getoverall() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2960);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem Getproam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2968);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem Getam() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2976);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem Getsilver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2984);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UChampLeaderboardTable GetLeaderboardTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2992);
		return struct UChampLeaderboardTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChampSettingsPage
{
public:
	UChampSettingsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHelpInMenu GetWDG_HelpInMenu() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UHelpInMenu(ptr_addr);
	}
	struct UWidgetSwitcher GetSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetTextSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_8H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_8H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_8H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_8H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_8H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_8H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_9H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_9H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_9H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_9H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_9H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_9H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_10H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_10H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_10H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_10H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_10H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_10H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_12H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_12H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_12H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_12H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_12H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_12H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPracticeLength_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1824);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice1_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice2_Enabled_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice2_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1848);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifyingLength_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1856);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQ_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1864);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifyingCount_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRaceLength_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1880);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace1_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1888);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace2_Enabled_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1896);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace2_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1904);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTimeMultiplier_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1912);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMandatoryPitStopType_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1920);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitstopTypeDataPitWindow_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1928);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitstopTypeDataDriverStint_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1936);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetIsFuelAllowed_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1944);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTyreSets_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1952);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1960);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1968);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1976);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UTextBlock GettxtCancel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1984);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChampStartPage
{
public:
	UChampStartPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetQuitPopUpTitle() {
		return memory.read<struct FText>(m_addr + 1320);
	}
	struct FText GetQuitPopUpText() {
		return memory.read<struct FText>(m_addr + 1344);
	}
	struct UGenericSelectorItem GetSeasonSelector() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetSeriesSelector() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem Getweather() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetdamageRate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GettyreWear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetunlimitedTyreSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetbrakeFading() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFormationLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPenalties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UAcPanelBase GetbtnNew() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnResume() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetWDG_StartSessionPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UAcPanelBase(ptr_addr);
	}
	UYesNoPopup GetYesNoPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return UYesNoPopup(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChampState
{
public:
	UChampState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChampSaveData GetchampData() {
		return memory.read<struct FChampSaveData>(m_addr + 40);
	}
	bool GetisLastEventResultAvailable() {
		return memory.read<bool>(m_addr + 824);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCircuitSelectionColumnPanel
{
public:
	UCircuitSelectionColumnPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct UTexture2D> GetTrackNameImages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct TMap<struct FName, struct UTexture2D>(ptr_addr);
	}
	struct UTextBlock GettxtCircuitName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetCircuitCountry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgCircuitCountryFlag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCircuit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgLocked() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtCircuitLengthValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCornersValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarRecord() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtBestLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRealRecordValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UClientAvatar
{
public:
	UClientAvatar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URatingDetailIntroLine
{
public:
	URatingDetailIntroLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtObjective() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCommunicationPanelItemBase
{
public:
	UCommunicationPanelItemBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetHasTimer() {
		return memory.read<bool>(m_addr + 608);
	}
	float GetExpirationSeconds() {
		return memory.read<float>(m_addr + 612);
	}
	float GetTimeLeft() {
		return memory.read<float>(m_addr + 616);
	}
	float GetTimeToFade() {
		return memory.read<float>(m_addr + 620);
	}
	struct UBorder Getbackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GettxtType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtMessage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtIdentifier() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UTextBlock(ptr_addr);
	}
	struct UUserWidget GettimerTimeout() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UUserWidget(ptr_addr);
	}
	enum class ECommunicationMessageType GetMessageType() {
		return memory.read<enum class ECommunicationMessageType>(m_addr + 672);
	}
	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 676);
	}
	bool GetdelayDelete() {
		return memory.read<bool>(m_addr + 692);
	}
	bool GetIsLocalPlayer() {
		return memory.read<bool>(m_addr + 693);
	}
	bool GetisNew() {
		return memory.read<bool>(m_addr + 694);
	}
	bool Getdeleting() {
		return memory.read<bool>(m_addr + 695);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControllerOptionsPage
{
public:
	UControllerOptionsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetKeyboardText() {
		return memory.read<struct FText>(m_addr + 1536);
	}
	struct UTexture2D GetPinkieIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetExtendedIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UTexture2D(ptr_addr);
	}
	UAcPanelBase GetPresetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return UAcPanelBase(ptr_addr);
	}
	UInputPopup GetInputPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return UInputPopup(ptr_addr);
	}
	struct UMainSelectorItem GetControllerModeSelector() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UMainSelectorItem(ptr_addr);
	}
	struct UMainSelectorItem GetControlCategorySelector() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UMainSelectorItem(ptr_addr);
	}
	struct UAcPanelBase GetDetectButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetPresetsButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetFFBButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetDeviceAdvancedButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UScrollBox GetInputScrollBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UScrollBox(ptr_addr);
	}
	struct UScrollBox GetAdvancedScrollBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UScrollBox(ptr_addr);
	}
	struct UWidgetSwitcher GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UWidgetSwitcher(ptr_addr);
	}
	UAcPanelBase GetItemWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return UAcPanelBase(ptr_addr);
	}
	UPresetsPopup GetpresetPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return UPresetsPopup(ptr_addr);
	}
	struct UGenericSelectorItem GetKeyboardMouseSteering() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetKeyboardMouseAcceleratorBrake() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetKeyboardSteerSpeed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetKeyboardSteerOppositeDirectionFactor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetKeyboardSteerGain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetKeyboardSteerResetFactor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetKeyboardlookAhead() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetKeyboardMouseSpeed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGamepadUseSteerWithRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGamepadDeadZone() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGamepadRumbleIntensity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGamepadSpeedSensitivity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGamepadSteerFilter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGamepadSteerGamma() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGamepadSteerSpeed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGamepadUseAutoSteer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWheelForceFeedbackGain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1824);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWheelSteerLock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWheelDynamicDamping() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWheelRoadEffects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1848);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWheelMinimumForceFeedback() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1856);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetWheelBrakeGamma() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1864);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UVerticalBox GetGamePadAdvancedSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetGamePadFFBSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1880);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetSteerAdvancedSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1888);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetKeyboardAdvancedSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1896);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetSteerFFBSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1904);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetKeyboardEmpty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1912);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetDeviceList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1920);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetPresetList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1928);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetInputList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1936);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetMainVerticalBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1944);
		return struct UVerticalBox(ptr_addr);
	}
	struct UInteractiveFooterButton GetLoadSave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1952);
		return struct UInteractiveFooterButton(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlsBlueprintFunctionLibrary
{
public:
	UControlsBlueprintFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCornerInfoWidget
{
public:
	UCornerInfoWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtTurn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSectionName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtBrakeHint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtBrakeHintDistance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCornerHint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCurrentlyViewedCarLabel
{
public:
	UCurrentlyViewedCarLabel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBorder GetBoxPosition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GettxtPosition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtDriverName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTeamName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLastLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtBestLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTextBlock(ptr_addr);
	}
	struct UGenericMappedLabel GetCupCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UGenericMappedLabel(ptr_addr);
	}
	struct UHorizontalBox GetBoxTimes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetboxLastLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetboxBestLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UHorizontalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingPCDetail
{
public:
	URatingPCDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtBlockEmptyWarning() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct UScrollBox GetScrollBox_LeaderboardSeasons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UScrollBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceRatingCarRelationship
{
public:
	URaceRatingCarRelationship(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDisclaimerPopup
{
public:
	UDisclaimerPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtMessageText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UTextBlock(ptr_addr);
	}
	struct UAcPanelBase GetyesButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetnoButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetdisclaimerButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UAcPanelBase(ptr_addr);
	}
	enum class EDisclaimerPopupType GetpopupType() {
		return memory.read<enum class EDisclaimerPopupType>(m_addr + 1360);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDownForceComponent
{
public:
	UDownForceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveFloat GetlutDownForceRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutDownForceDeltaRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutDragRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetlutDragDeltaRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct UCurveFloat(ptr_addr);
	}
	float GetyawGain() {
		return memory.read<float>(m_addr + 536);
	}
	enum class EAeroElement GetAeroElement() {
		return memory.read<enum class EAeroElement>(m_addr + 540);
	}
	float GetAngle() {
		return memory.read<float>(m_addr + 544);
	}
	float GetLiftPerFrontAngle() {
		return memory.read<float>(m_addr + 548);
	}
	float GetLiftPerRearAngle() {
		return memory.read<float>(m_addr + 552);
	}
	float GetDragPerFrontAngle() {
		return memory.read<float>(m_addr + 556);
	}
	float GetDragPerRearAngle() {
		return memory.read<float>(m_addr + 560);
	}
	float GetDragPerCoolTransfer() {
		return memory.read<float>(m_addr + 564);
	}
	float GetclGain() {
		return memory.read<float>(m_addr + 568);
	}
	float GetcdGain() {
		return memory.read<float>(m_addr + 572);
	}
	float GetdamageCD[5]() {
		return memory.read<float>(m_addr + 576);
	}
	float GetdamageCL[5]() {
		return memory.read<float>(m_addr + 596);
	}
	struct TArray<struct FDynamicDownForceControllerData> GetDFControllerData() {
		return memory.read<struct TArray<struct FDynamicDownForceControllerData>>(m_addr + 616);
	}
	float GetAIReferenceHeightMM() {
		return memory.read<float>(m_addr + 632);
	}
	float GetAIReferenceDeltaHMM() {
		return memory.read<float>(m_addr + 636);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADownForceDebugHUD
{
public:
	ADownForceDebugHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ADriverAvatar
{
public:
	ADriverAvatar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMesh GetRaceMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct USkeletalMesh(ptr_addr);
	}
	struct USkeletalMesh GetShowroomMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct USkeletalMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDriverCustomizationPage
{
public:
	UDriverCustomizationPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMainCamTag() {
		return memory.read<struct FString>(m_addr + 1320);
	}
	struct FString GetHelmetCamTag() {
		return memory.read<struct FString>(m_addr + 1336);
	}
	struct FString GetTeamCamTag() {
		return memory.read<struct FString>(m_addr + 1352);
	}
	struct FString GetGlovesCamTag() {
		return memory.read<struct FString>(m_addr + 1368);
	}
	struct FString GetShoesCamTag() {
		return memory.read<struct FString>(m_addr + 1384);
	}
	struct ACameraActor GetCurrentCamera() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct ACameraActor(ptr_addr);
	}
	struct TMap<struct FName, struct FDriverInfo> GetDrivers() {
		return memory.read<struct TMap<struct FName, struct FDriverInfo>>(m_addr + 1408);
	}
	struct TArray<struct FName> GetDriverNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1488);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDriverProfileBarItem
{
public:
	UDriverProfileBarItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGuiSubPages GetSubPage() {
		return memory.read<enum class EGuiSubPages>(m_addr + 1504);
	}
	struct FText GetMainTitle() {
		return memory.read<struct FText>(m_addr + 1512);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDriverProfilePage
{
public:
	UDriverProfilePage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDivide() {
		return memory.read<float>(m_addr + 1320);
	}
	float GetMultiply() {
		return memory.read<float>(m_addr + 1324);
	}
	struct UTextBlock GettxtDriverName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UTextBlock(ptr_addr);
	}
	struct UFooterWidget GetFooter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UFooterWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDriverProfileRatingPage
{
public:
	UDriverProfileRatingPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCanvasPanel GetCanvasPanel_WaitingForData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetCanvasPanel_NotConnected() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetCanvasPanel_Rating() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetCanvasPanel_RatingDetail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UCanvasPanel(ptr_addr);
	}
	struct URatingSelectionPanel Getwdg_Entry_Total() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct URatingSelectionPanel(ptr_addr);
	}
	struct URatingSelectionPanel Getwdg_Entry_Safety() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct URatingSelectionPanel(ptr_addr);
	}
	struct URatingSelectionPanel Getwdg_Entry_TrackCompetence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct URatingSelectionPanel(ptr_addr);
	}
	struct URatingSelectionPanel Getwdg_Entry_Consistency() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct URatingSelectionPanel(ptr_addr);
	}
	struct URatingSelectionPanel Getwdg_Entry_CarControl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct URatingSelectionPanel(ptr_addr);
	}
	struct URatingSelectionPanel Getwdg_Entry_Hotlap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct URatingSelectionPanel(ptr_addr);
	}
	struct URatingSelectionPanel Getwdg_Entry_Racecraft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct URatingSelectionPanel(ptr_addr);
	}
	struct URatingSelectionPanel Getwdg_Entry_Competition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct URatingSelectionPanel(ptr_addr);
	}
	struct UTextBlock GettxtRatingFullName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRatingValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRatingShortCaption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UTextBlock(ptr_addr);
	}
	struct URatingTCDetail GetWDG_RatingDetailTC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct URatingTCDetail(ptr_addr);
	}
	struct URatingTODetail GetWDG_RatingDetailTO() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct URatingTODetail(ptr_addr);
	}
	struct URatingCNDetail GetWDG_RatingDetailCN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct URatingCNDetail(ptr_addr);
	}
	struct URatingCCDetail GetWDG_RatingDetailCC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct URatingCCDetail(ptr_addr);
	}
	struct URatingPCDetail GetWDG_RatingDetailPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct URatingPCDetail(ptr_addr);
	}
	struct URatingSADetail GetWDG_RatingDetailSA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct URatingSADetail(ptr_addr);
	}
	struct URatingRCDetail GetWDG_RatingDetailRC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct URatingRCDetail(ptr_addr);
	}
	struct URatingCPDetail GetWDG_RatingDetailCP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct URatingCPDetail(ptr_addr);
	}
	struct UCanvasPanel GettesterCanvasPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UCanvasPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDriverSwapInfoEntry
{
public:
	UDriverSwapInfoEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtDriverName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetborderBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBorder(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UElectronicsWidget
{
public:
	UElectronicsWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtABSCaption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtABSLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtABSMaxLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetborderABS() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GettxtTCCaption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTCLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTCMaxLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetborderTC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UBorder(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UExtendedEditableText
{
public:
	UExtendedEditableText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 1120);
	}
	float GetMinDesiredWidth() {
		return memory.read<float>(m_addr + 1208);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingTCTrackItem
{
public:
	URatingTCTrackItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 608);
	}
	struct UTexture2D GetTrackImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetFlagImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UTexture2D(ptr_addr);
	}
	struct UTextBlock GettxtTrackCaption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtStars() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgCountryFlag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UExtendedScrollbox
{
public:
	UExtendedScrollbox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFinalHotLapResultItems
{
public:
	UFinalHotLapResultItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKunosDriverCategory GetKunosCategories() {
		return memory.read<enum class EKunosDriverCategory>(m_addr + 608);
	}
	struct UImage GetimgPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgSector1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgSector2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgSector3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBody() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLapTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSector1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSector2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSector3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UTextBlock(ptr_addr);
	}
	struct UCanvasPanel GetcvsGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetcvsCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UCanvasPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOptionsPage
{
public:
	UOptionsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AFireWorksAudio
{
public:
	AFireWorksAudio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODAudioComponent GetfireWorksComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UFMODAudioComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFirstLaunchControllerPage
{
public:
	UFirstLaunchControllerPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFooterButton
{
public:
	UFooterButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UButton GetButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UButton(ptr_addr);
	}
	enum class EControllerActionType GetUIActionType() {
		return memory.read<enum class EControllerActionType>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFooterWidget
{
public:
	UFooterWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNamedSlot GetSlot1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetSlot2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetSlot3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetSlot4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetSlot5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetSlot6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UNamedSlot(ptr_addr);
	}
	struct UImage GetimgBlackBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFovPage
{
public:
	UFovPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFovUpperLimit() {
		return memory.read<int32_t>(m_addr + 1320);
	}
	int32_t GetFovLowerLimit() {
		return memory.read<int32_t>(m_addr + 1324);
	}
	int32_t GetHeightUpperLimit() {
		return memory.read<int32_t>(m_addr + 1328);
	}
	int32_t GetHeightLowerLimit() {
		return memory.read<int32_t>(m_addr + 1332);
	}
	int32_t GetLateralUpperLimit() {
		return memory.read<int32_t>(m_addr + 1336);
	}
	int32_t GetLateralLowerLimit() {
		return memory.read<int32_t>(m_addr + 1340);
	}
	int32_t GetDistanceUpperLimit() {
		return memory.read<int32_t>(m_addr + 1344);
	}
	int32_t GetDistanceLowerLimit() {
		return memory.read<int32_t>(m_addr + 1348);
	}
	int32_t GetPitchUpperLimit() {
		return memory.read<int32_t>(m_addr + 1352);
	}
	int32_t GetPitchLowerLimit() {
		return memory.read<int32_t>(m_addr + 1356);
	}
	struct UAcPanelBase GetbtnSave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnReset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnCancel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnQuit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UGenericSelectorItem GetHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetLateral() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDistance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFOV() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDriverAndWheel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDashInHud() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDashInHudWidthLimit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDashInHudOpacity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMovement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDashcamFactor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetLookWithWheel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetLookWithWheelGamma() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetLookWithWheelSmoothing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetProjCorrection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetLockToHorizon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTripleDistance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTripleWidth() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTripleAngle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTripleBezel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetHDRExposure() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetHDRContrast() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMirrorFOV() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMirrorVirtualScale() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMirrorVirtualHorizontalOffset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMirrorVirtualVerticalOffset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UWidgetSwitcher GetMainSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameIntroPage
{
public:
	UGameIntroPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRegoularFadeSpeed() {
		return memory.read<float>(m_addr + 1320);
	}
	float GetFastFadeSpeed() {
		return memory.read<float>(m_addr + 1324);
	}
	float GetPagesTimeOnScreen() {
		return memory.read<float>(m_addr + 1328);
	}
	struct UTexture2D GetMainBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetBlackBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetEABackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UTexture2D(ptr_addr);
	}
	struct UImage GetimgBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgKunos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg505() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UImage(ptr_addr);
	}
	struct UWidgetSwitcher GetIntroPageSwitch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UButton GetbtnBackEA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UButton(ptr_addr);
	}
	struct UButton GetbtnClickToContinue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UButton(ptr_addr);
	}
	struct UAcPanelBase GetGoToMainPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetShowEarlyPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetGoBackPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UUserWidget GetRoadMap05() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMainSelectorItem
{
public:
	UMainSelectorItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FText> GetEnumDisplayText() {
		return memory.read<struct TArray<struct FText>>(m_addr + 1504);
	}
	struct TArray<int32_t> GetCustomValues() {
		return memory.read<struct TArray<int32_t>>(m_addr + 1520);
	}
	bool GetsendForwardBackwardOnChange() {
		return memory.read<bool>(m_addr + 1536);
	}
	struct UButton GetbtnLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UButton(ptr_addr);
	}
	struct UButton GetbtnRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UButton(ptr_addr);
	}
	struct UCanvasPanel Getpanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UGridPanel GetGrid() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UGridPanel(ptr_addr);
	}
	struct UTextBlock GettxtOption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtOptionLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtOptionRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetrightArrow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetleftArrow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage Getbackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UImage(ptr_addr);
	}
	enum class EGuiMainSelectorType GetSelectorType() {
		return memory.read<enum class EGuiMainSelectorType>(m_addr + 1624);
	}
	bool GetusePreviewText() {
		return memory.read<bool>(m_addr + 1625);
	}
	int32_t GetMinRange() {
		return memory.read<int32_t>(m_addr + 1628);
	}
	int32_t GetMaxRange() {
		return memory.read<int32_t>(m_addr + 1632);
	}
	int32_t GetStep() {
		return memory.read<int32_t>(m_addr + 1636);
	}
	float GetTimeToFirstClick() {
		return memory.read<float>(m_addr + 1640);
	}
	float GetTimeToSecondClick() {
		return memory.read<float>(m_addr + 1644);
	}
	float GetTimeStepFirstClick() {
		return memory.read<float>(m_addr + 1648);
	}
	float GetTimeStepSecondClick() {
		return memory.read<float>(m_addr + 1652);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameModeColumnPanel
{
public:
	UGameModeColumnPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDayNightTime() {
		return memory.read<struct FText>(m_addr + 1504);
	}
	struct FText GetStintLength() {
		return memory.read<struct FText>(m_addr + 1528);
	}
	struct FText GetRaceLength() {
		return memory.read<struct FText>(m_addr + 1552);
	}
	struct FText GetStartingPosition() {
		return memory.read<struct FText>(m_addr + 1576);
	}
	struct FText GetNOpponents() {
		return memory.read<struct FText>(m_addr + 1600);
	}
	struct FText GetOpponentSkill() {
		return memory.read<struct FText>(m_addr + 1624);
	}
	struct FText GetOpponentAggro() {
		return memory.read<struct FText>(m_addr + 1648);
	}
	struct FText GetTimeMultiplier() {
		return memory.read<struct FText>(m_addr + 1672);
	}
	struct FText GetGhostCar() {
		return memory.read<struct FText>(m_addr + 1696);
	}
	struct TArray<struct FText> GetDisabledEnabled() {
		return memory.read<struct TArray<struct FText>>(m_addr + 1720);
	}
	struct TMap<enum class EGuiGameModes, struct FText> GetGameModeTitles() {
		return memory.read<struct TMap<enum class EGuiGameModes, struct FText>>(m_addr + 1736);
	}
	struct TMap<enum class EGuiGameModes, struct UTexture2D> GetGameModeImages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct TMap<enum class EGuiGameModes, struct UTexture2D>(ptr_addr);
	}
	struct UTextBlock GettxtEventType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1896);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement01Value() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1904);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement02Value() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1912);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement03Value() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1920);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement04Value() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1928);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement05Value() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1936);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement06Value() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1944);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement07Value() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1952);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement08Value() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1960);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1968);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1976);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement03() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1984);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement04() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1992);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement05() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2000);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement06() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2008);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement07() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2016);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtElement08() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2024);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2032);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameModePage
{
public:
	UGameModePage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHelpInMenu GetWDG_HelpInMenu() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UHelpInMenu(ptr_addr);
	}
	struct UWidgetSwitcher GetSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UGenericSelectorItem GetTimeOfDay_Quick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_Quick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTimeMultiplier_Quick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_Quick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_Quick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_Quick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_Quick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetSingleMake_Quick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_1H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_1H_USA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_1H_USA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_1H_USA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_1H_USA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_1H_USA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_1H_USA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_1H_USA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_gt4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_gt4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_gt4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_gt4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_gt4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_gt4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_gt4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_2H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_BGT3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_3H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_6H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifying_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1824);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_24H() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPracticeLength_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1848);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice1_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1856);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice2_Enabled_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1864);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice2_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifyingLength_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1880);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQ_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1888);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetQualifyingCount_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1896);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRaceLength_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1904);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace1_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1912);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace2_Enabled_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1920);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRace2_TimeOfTheDay_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1928);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTimeMultiplier_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1936);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetMandatoryPitStopType_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1944);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitstopTypeDataPitWindow_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1952);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitstopTypeDataDriverStint_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1960);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetIsFuelAllowed_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1968);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTyreSets_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1976);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetStartingPosition_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1984);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1992);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2000);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2008);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetSingleMake_Custom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2016);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDayNight_Pratice() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2024);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTimeMultiplier_Practice() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2032);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsNum_Practice() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2040);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsSkill_Practice() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2048);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetOpponentsAggression_Practice() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2056);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDayNight_Hotlap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2064);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGhostCar_Hotlap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2072);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGhostCarOffset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2080);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGhostCarModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2088);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPractice_Hotstint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2096);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDayNight_Hotstint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2104);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTimeMultiplier_Hotstint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2112);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDayNight_HotlapSuperpole() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2120);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UTextBlock GettxtCancel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2128);
		return struct UTextBlock(ptr_addr);
	}
	struct TMap<enum class ECarGroup, float> GetCarGroupWeights() {
		return memory.read<struct TMap<enum class ECarGroup, float>>(m_addr + 2136);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceStandingItems
{
public:
	URaceStandingItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetimgPositionPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgNumberPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBody() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UWidgetAnimation GetSwapAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetSwapAnimationSpeed() {
		return memory.read<float>(m_addr + 696);
	}
	struct UTextBlock GettxtNames() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarNum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameModePanel
{
public:
	UGameModePanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGenericBarItem
{
public:
	UGenericBarItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFont GetCurrentFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UFont(ptr_addr);
	}
	bool GetIsFontRegoular() {
		return memory.read<bool>(m_addr + 1512);
	}
	struct FText GetMainTitle() {
		return memory.read<struct FText>(m_addr + 1520);
	}
	struct FText GetSecondaryTitle() {
		return memory.read<struct FText>(m_addr + 1544);
	}
	struct FText GetThirdTitle() {
		return memory.read<struct FText>(m_addr + 1568);
	}
	struct FLinearColor GetNormalColor() {
		return memory.read<struct FLinearColor>(m_addr + 1592);
	}
	struct UTextBlock GettxtTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTextBlock(ptr_addr);
	}
	int32_t GetExtraIndex() {
		return memory.read<int32_t>(m_addr + 1616);
	}
	struct UImage GetNormalImageBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGenericInputItem
{
public:
	UGenericInputItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GetTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetControllerIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UImage(ptr_addr);
	}
	struct UImage GetPinkieIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UImage(ptr_addr);
	}
	struct UImage GetOptionIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UImage(ptr_addr);
	}
	struct UImage GetNormalImageBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UImage(ptr_addr);
	}
	struct UImage GetHoverImageBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UImage(ptr_addr);
	}
	struct UCanvasPanel GetHiddenPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock GetInputDeviceName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UTextBlock(ptr_addr);
	}
	struct UInteractiveFooterButton GetClearButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetadvancedButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UInteractiveFooterButton(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGenericMappedLabel
{
public:
	UGenericMappedLabel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLabelTextAndColors> GetLabelsAndColors() {
		return memory.read<struct TArray<struct FLabelTextAndColors>>(m_addr + 608);
	}
	struct FText GetTextOverride() {
		return memory.read<struct FText>(m_addr + 624);
	}
	char GetMapIndex() {
		return memory.read<char>(m_addr + 648);
	}
	char GetFontSize() {
		return memory.read<char>(m_addr + 649);
	}
	struct UTextBlock GettxtLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetbrdBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UBorder(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGenericSelectorItem
{
public:
	UGenericSelectorItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSelectorChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1504);
	}
	bool GetisFixed() {
		return memory.read<bool>(m_addr + 1521);
	}
	struct FString GetTextPrefix() {
		return memory.read<struct FString>(m_addr + 1528);
	}
	struct FString GetTextPostfix() {
		return memory.read<struct FString>(m_addr + 1544);
	}
	char GetDecimal() {
		return memory.read<char>(m_addr + 1560);
	}
	bool GetrightAsForward() {
		return memory.read<bool>(m_addr + 1561);
	}
	bool GetleftAsBackward() {
		return memory.read<bool>(m_addr + 1562);
	}
	bool GetsuppressChangedEvent() {
		return memory.read<bool>(m_addr + 1563);
	}
	bool GetprependCustomValues() {
		return memory.read<bool>(m_addr + 1564);
	}
	int32_t GetExtraData() {
		return memory.read<int32_t>(m_addr + 1568);
	}
	enum class EGuiGenericSelectorType GetSelectorType() {
		return memory.read<enum class EGuiGenericSelectorType>(m_addr + 1572);
	}
	enum class EGuiColors GetOverColor() {
		return memory.read<enum class EGuiColors>(m_addr + 1573);
	}
	enum class EGuiColors GetLeaveColor() {
		return memory.read<enum class EGuiColors>(m_addr + 1574);
	}
	enum class EGuiColors GetOptionColor() {
		return memory.read<enum class EGuiColors>(m_addr + 1575);
	}
	enum class EGuiColors GetDisabledColor() {
		return memory.read<enum class EGuiColors>(m_addr + 1576);
	}
	struct FLinearColor GetBarColor() {
		return memory.read<struct FLinearColor>(m_addr + 1580);
	}
	int32_t GetMinRange() {
		return memory.read<int32_t>(m_addr + 1596);
	}
	int32_t GetMaxRange() {
		return memory.read<int32_t>(m_addr + 1600);
	}
	int32_t GetStep() {
		return memory.read<int32_t>(m_addr + 1604);
	}
	struct FText GetFixedItemText() {
		return memory.read<struct FText>(m_addr + 1608);
	}
	struct TArray<struct FText> GetEnumDisplayText() {
		return memory.read<struct TArray<struct FText>>(m_addr + 1632);
	}
	struct TArray<int32_t> GetCustomValues() {
		return memory.read<struct TArray<int32_t>>(m_addr + 1648);
	}
	float GetTimeToFirstClick() {
		return memory.read<float>(m_addr + 1664);
	}
	float GetTimeToSecondClick() {
		return memory.read<float>(m_addr + 1668);
	}
	float GetTimeStepFirstClick() {
		return memory.read<float>(m_addr + 1672);
	}
	float GetTimeStepSecondClick() {
		return memory.read<float>(m_addr + 1676);
	}
	struct TMap<struct FName, struct UProgressBar> GetProgressBars() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct TMap<struct FName, struct UProgressBar>(ptr_addr);
	}
	struct UNamedSlot GetTitleSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UNamedSlot(ptr_addr);
	}
	struct UTextBlock GettxtOption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetrightArrow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetleftArrow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct UTextBlock(ptr_addr);
	}
	struct UButton GetbtnLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UButton(ptr_addr);
	}
	struct UButton GetbtnRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UButton(ptr_addr);
	}
	struct UProgressBar GetbarOption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UProgressBar(ptr_addr);
	}
	struct USlider GetsliderBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct USlider(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWrongWayWidget
{
public:
	UWrongWayWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGuiUtilities
{
public:
	UGuiUtilities(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHeaderWidget
{
public:
	UHeaderWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AHeliCamera
{
public:
	AHeliCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODAudioComponent GetheliAudio() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1952);
		return struct UFMODAudioComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHelpInMenu
{
public:
	UHelpInMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserWidget GetBodyTextWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetTitleWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return UUserWidget(ptr_addr);
	}
	UUserWidget GetWdgHotlapStandingSpacerItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return UUserWidget(ptr_addr);
	}
	struct FText GetHelpTitle() {
		return memory.read<struct FText>(m_addr + 640);
	}
	struct TArray<struct FText> GetDefaultTexts() {
		return memory.read<struct TArray<struct FText>>(m_addr + 664);
	}
	struct TArray<struct FMultipleHelpText> GetMultipleDefaultTexts() {
		return memory.read<struct TArray<struct FMultipleHelpText>>(m_addr + 680);
	}
	bool GetisFixed() {
		return memory.read<bool>(m_addr + 696);
	}
	struct UTextBlock GettxtHelpTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UTextBlock(ptr_addr);
	}
	struct UScrollBox GetScrollHelpText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UScrollBox(ptr_addr);
	}
	struct UVerticalBox GetvboxHelpTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetvboxHelpText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UVerticalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHierarchicalWidget
{
public:
	UHierarchicalWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMapWidget
{
public:
	UMapWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetFollowHudOptions() {
		return memory.read<bool>(m_addr + 1624);
	}
	bool GetShowFullMap() {
		return memory.read<bool>(m_addr + 1625);
	}
	float GetZoomInPage() {
		return memory.read<float>(m_addr + 1628);
	}
	bool GetShowPositions() {
		return memory.read<bool>(m_addr + 1632);
	}
	bool GetShowLabels() {
		return memory.read<bool>(m_addr + 1633);
	}
	struct TArray<struct UCarMapItem> GetCarMapItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct TArray<struct UCarMapItem>(ptr_addr);
	}
	struct TArray<struct UCanvasPanelSlot> GetCarMapItemSlots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct TArray<struct UCanvasPanelSlot>(ptr_addr);
	}
	UCarMapItem GetWdgCarMapItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return UCarMapItem(ptr_addr);
	}
	struct FVector2D GetItemSize() {
		return memory.read<struct FVector2D>(m_addr + 1688);
	}
	struct UCanvasPanel GetMapPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UImage GetMapImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UImage(ptr_addr);
	}
	struct UDataTable GetMapMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UDataTable(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetmapMaterialInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct AAcRaceGameMode(ptr_addr);
	}
	struct AACPlayerCameraManager GetCameraManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct AACPlayerCameraManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHotLapResultItems
{
public:
	UHotLapResultItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetimgLapNum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgValidity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBody() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtLapNum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLapTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtValidity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetInfoSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiplayerMessageItem
{
public:
	UMultiplayerMessageItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxNameCharacters() {
		return memory.read<int32_t>(m_addr + 608);
	}
	struct UTextBlock GetTxtTimestamp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTxtSenderName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTxtContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHotlapStandingItems
{
public:
	UHotlapStandingItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKunosDriverCategory GetKunosCategories() {
		return memory.read<enum class EKunosDriverCategory>(m_addr + 752);
	}
	struct UImage GetimgPositionPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgNumberPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBody() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtNames() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtExtraInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtExtraInfo2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UTextBlock(ptr_addr);
	}
	struct UCanvasPanel GetcvsCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UCanvasPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHotlapStandingWidget
{
public:
	UHotlapStandingWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFirstFlipTimer() {
		return memory.read<float>(m_addr + 1624);
	}
	float GetRegoularFlipInterval() {
		return memory.read<float>(m_addr + 1628);
	}
	int32_t GetMaxItemsOnSingleList() {
		return memory.read<int32_t>(m_addr + 1632);
	}
	struct TArray<struct UHotlapStandingItems> GetStandingSafe() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct TArray<struct UHotlapStandingItems>(ptr_addr);
	}
	UHotlapStandingItems GetWdgStandingItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return UHotlapStandingItems(ptr_addr);
	}
	struct UVerticalBox GetStandingList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UVerticalBox(ptr_addr);
	}
	struct UTextBlock GettxtStandingPosition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtStandingTotCars() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHudMfdRealtimePosition
{
public:
	UHudMfdRealtimePosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserWidget GetPositionItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return UUserWidget(ptr_addr);
	}
	enum class EHudTableType GetTableType() {
		return memory.read<enum class EHudTableType>(m_addr + 1632);
	}
	bool GetIsInteractive() {
		return memory.read<bool>(m_addr + 1633);
	}
	enum class ECarGroup GetLimitToCarGroup() {
		return memory.read<enum class ECarGroup>(m_addr + 1634);
	}
	struct UExtendedScrollbox GetList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UExtendedScrollbox(ptr_addr);
	}
	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct AAcRaceGameMode(ptr_addr);
	}
	struct TMap<enum class EBrandType, struct UTexture2D> GetBrandIconCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct TMap<enum class EBrandType, struct UTexture2D>(ptr_addr);
	}
	struct AMainCarHUD GetmainHud() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct AMainCarHUD(ptr_addr);
	}
	bool GetisInPage() {
		return memory.read<bool>(m_addr + 1744);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHUDOptionsPage
{
public:
	UHUDOptionsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGenericSelectorItem GetCircuitMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGearSpeed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetUseMPH() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTyreApp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetVirtualMirror() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetProximityIndicators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetInfoSession() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetLapTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRatingPractice() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDriverNamePlates() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRadar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetGreenLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetHUDScale() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetHUDSafezoneLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetHUDSafezoneRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetserverStats() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetChatWindowPopup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetCommPanelCenter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetCommPanelPriority() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPitInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem Getlights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAutopitMfd() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UGenericSelectorItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInputPopup
{
public:
	UInputPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetSwitcher GetSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetMainSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UInteractiveFooterButton GetConfirm() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetCancel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UButton GetInputCancel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UButton(ptr_addr);
	}
	struct UGenericSelectorItem GetExtendedItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetExtendedTimeItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPinkieItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetInvertedAxis() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDeadZoneLeftItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetDeadZoneRightItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetScaleItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UProgressBar GetProgressInput() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UProgressBar(ptr_addr);
	}
	struct UProgressBar GetDeadZoneLeftProgress() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UProgressBar(ptr_addr);
	}
	struct UProgressBar GetDeadZoneRightProgress() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UProgressBar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTrackPeopleController
{
public:
	UTrackPeopleController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AAcRaceGameMode GetraceGameMode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct AAcRaceGameMode(ptr_addr);
	}
	struct TArray<struct AAcMarshal> GetMarshals() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct TArray<struct AAcMarshal>(ptr_addr);
	}
	struct TArray<struct UParticleSystemComponent> GetSmokers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct TArray<struct UParticleSystemComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInteractiveFooterButton
{
public:
	UInteractiveFooterButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBorder GetbgrBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UBorder(ptr_addr);
	}
	struct UButton GetButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UButton(ptr_addr);
	}
	struct UTextBlock GetTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UTextBlock(ptr_addr);
	}
	struct UAcControllerIcon GetIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UAcControllerIcon(ptr_addr);
	}
	enum class EControllerActionType GetUIActionType() {
		return memory.read<enum class EControllerActionType>(m_addr + 1536);
	}
	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 1540);
	}
	struct FLinearColor GetFocusColor() {
		return memory.read<struct FLinearColor>(m_addr + 1556);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKeyBindingUtil
{
public:
	UKeyBindingUtil(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKSAudioComponent
{
public:
	UKSAudioComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKSONConnectionStateWidget
{
public:
	UKSONConnectionStateWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtConnectionState() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULanguageSelectionPage
{
public:
	ULanguageSelectionPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAcPanelBase GetEnglishPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetItalianPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetFrenchPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetDeutschPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetSpanishPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetPortugalPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetRussianPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetJapanesePanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetPolishPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetChineseTraditionalPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetChineseSimplifiedPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetKoreanPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UAcPanelBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULaptimeInfo01Widget
{
public:
	ULaptimeInfo01Widget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetEmptyText() {
		return memory.read<struct FText>(m_addr + 1624);
	}
	struct UTextBlock GettxtCurrentLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCurrentSplit1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCurrentSplit2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCurrentSplit3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtBestLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLastLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPredictedLap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCurrentLapCount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPosition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTotalCars() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCurrentDelta() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgCurrentDelta() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtBestOrStintLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UTextBlock(ptr_addr);
	}
	struct UCanvasPanel GetCanvasPanel_Penalty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock GettxtPenalty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULeaderboardWidget
{
public:
	ULeaderboardWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRegoularFlipInterval() {
		return memory.read<float>(m_addr + 1624);
	}
	struct FLinearColor GetColorSpecialEventForeground() {
		return memory.read<struct FLinearColor>(m_addr + 1628);
	}
	struct FLinearColor GetColorSpecialEventBackground() {
		return memory.read<struct FLinearColor>(m_addr + 1644);
	}
	struct FLinearColor GetColorSpecialEventNumberForeground() {
		return memory.read<struct FLinearColor>(m_addr + 1660);
	}
	struct FLinearColor GetColorSpecialEventNumberBackground() {
		return memory.read<struct FLinearColor>(m_addr + 1676);
	}
	struct FLinearColor GetColorGlobalLeaderboardForeground() {
		return memory.read<struct FLinearColor>(m_addr + 1692);
	}
	struct FLinearColor GetColorGlobalLeaderboardBackground() {
		return memory.read<struct FLinearColor>(m_addr + 1708);
	}
	struct FLinearColor GetColorGlobalLeaderboardWetnessForeground() {
		return memory.read<struct FLinearColor>(m_addr + 1724);
	}
	struct FLinearColor GetColorGlobalLeaderboardWetnessBackground() {
		return memory.read<struct FLinearColor>(m_addr + 1740);
	}
	UHotlapStandingItems GetWdgHotlapStandingItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return UHotlapStandingItems(ptr_addr);
	}
	UUserWidget GetWdgHotlapStandingSpacerItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return UUserWidget(ptr_addr);
	}
	struct TArray<struct UHotlapStandingItems> GetStupidChildArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct TArray<struct UHotlapStandingItems>(ptr_addr);
	}
	struct UVerticalBox GetStandingList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UVerticalBox(ptr_addr);
	}
	struct UCanvasPanel GetcanvasLeaderboardHeader() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock GettxtLeaderboardName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventId() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWetnessIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1824);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgBackgroundEventIdOrWetness() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBackgroundRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBackgroundCenter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1848);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBackgroundLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1856);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UListSelectionPopup
{
public:
	UListSelectionPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GetTitleText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetMessageText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UTextBlock(ptr_addr);
	}
	struct UAcPanelBase GetPanelItem1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetPanelItem2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetPanelItem3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UTextBlock GetText1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetText2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetText3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UTextBlock(ptr_addr);
	}
	enum class EListSelectionPopupType GetpopupType() {
		return memory.read<enum class EListSelectionPopupType>(m_addr + 1384);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULoadingSessionsPage
{
public:
	ULoadingSessionsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLoadingInfo GetLoadingInfo() {
		return memory.read<struct FLoadingInfo>(m_addr + 608);
	}
	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 936);
	}
	struct UTextBlock GettxtCircuitName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTeamName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSessionType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtDriverName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 968);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtScrollingInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct UTextBlock(ptr_addr);
	}
	struct UHorizontalBox GetScrollingBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UTextBlock GettxtOnlineLapRecord() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTyreFuelWear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRealism() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtOpponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSessionStartTimeValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTrackTempValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtAirTemp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtOpponentsStrengthValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtOpponentsAbilityValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtMeteoIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRaceLengthValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetOnlineLapRecord_lbl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTeam_lbl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGoal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetRaceLength() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgTrackMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UImage(ptr_addr);
	}
	struct UBorder GetStartTimeBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetOpponentsBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1128);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetMeteoBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetRaceLengthBorder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UBorder(ptr_addr);
	}
	struct UCanvasPanel GetDamageCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetTyreFuelWearCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetOpponentsCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetRealismCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct UCanvasPanel(ptr_addr);
	}
	struct TMap<enum class EGuiGameModes, struct FText> GetInfoLines() {
		return memory.read<struct TMap<enum class EGuiGameModes, struct FText>>(m_addr + 1184);
	}
	struct TMap<enum class EGuiGameModes, struct FText> GetGameModeText() {
		return memory.read<struct TMap<enum class EGuiGameModes, struct FText>>(m_addr + 1264);
	}
	bool GetIsRainyEvent() {
		return memory.read<bool>(m_addr + 1344);
	}
	struct TArray<struct UTexture2D> GetLoadingImages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}
	struct UTextBlock GettxtLoading() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UTextBlock(ptr_addr);
	}
	struct TSoftObjectPtr<UTexture2D> GetEmptyImage() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 1376);
	}

private:
	std::uint64_t m_addr = 0;
};


class AMainCarHUD
{
public:
	AMainCarHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLastActiveMfdWidgetIndex() {
		return memory.read<int32_t>(m_addr + 840);
	}
	struct FMulticastInlineDelegate GetOnHudTick() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 848);
	}
	struct AAcChildHUD GetCurrentChildHUD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct AAcChildHUD(ptr_addr);
	}
	struct UMainCarHUDWidgetHost GetRootWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UMainCarHUDWidgetHost(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMainPage
{
public:
	UMainPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetQuitPopUpTitle() {
		return memory.read<struct FText>(m_addr + 1320);
	}
	struct FText GetQuitPopUpText() {
		return memory.read<struct FText>(m_addr + 1344);
	}
	UPresetsPopup GetpresetPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return UPresetsPopup(ptr_addr);
	}
	struct TMap<enum class EGuiGameModes, struct FText> GetGameModeTitles() {
		return memory.read<struct TMap<enum class EGuiGameModes, struct FText>>(m_addr + 1384);
	}
	UYesNoPopup GetYesNoPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return UYesNoPopup(ptr_addr);
	}
	struct UDisclaimerPopup GetDisclaimerPopup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UDisclaimerPopup(ptr_addr);
	}
	struct UTextBlock GettxtTrackName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSubTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtInfoLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtProfileDriverName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlayerDataPage
{
public:
	UPlayerDataPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxCharsForDataFields() {
		return memory.read<int32_t>(m_addr + 1320);
	}
	struct UEditableText GettxtNameValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UEditableText(ptr_addr);
	}
	struct UEditableText GettxtLastnameValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UEditableText(ptr_addr);
	}
	struct UEditableText GettxtNicknameValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UEditableText(ptr_addr);
	}
	struct UTextBlock GettxtMarker1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtMarker2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeteoGenericPanel
{
public:
	UMeteoGenericPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetMainTitle() {
		return memory.read<struct FText>(m_addr + 1504);
	}
	struct FText GetIcon() {
		return memory.read<struct FText>(m_addr + 1528);
	}
	struct UTextBlock GettxtMainTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeteoPage
{
public:
	UMeteoPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeteoGenericPanel GetbtnSunny() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UMeteoGenericPanel(ptr_addr);
	}
	struct UMeteoGenericPanel GetbtnCloudy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UMeteoGenericPanel(ptr_addr);
	}
	struct UMeteoGenericPanel GetbtnLightRain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UMeteoGenericPanel(ptr_addr);
	}
	struct UMeteoGenericPanel GetbtnMediumRain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UMeteoGenericPanel(ptr_addr);
	}
	struct UMeteoGenericPanel GetbtnHeavyRain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UMeteoGenericPanel(ptr_addr);
	}
	struct UMeteoGenericPanel GetbtnStorm() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UMeteoGenericPanel(ptr_addr);
	}
	struct UMeteoGenericPanel GetbtnDynamic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UMeteoGenericPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeteoPanel
{
public:
	UMeteoPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMultiplayerAdvancedOptionsPage
{
public:
	UMultiplayerAdvancedOptionsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFooterButton GetbtnBack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UFooterButton(ptr_addr);
	}
	struct UFooterButton GetbtnConfirm() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UFooterButton(ptr_addr);
	}
	struct UMainSelectorItem GetMainSelector() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UMainSelectorItem(ptr_addr);
	}
	struct UWidgetSwitcher GetMainSelectorSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UGenericSelectorItem GetItemWeightFriends() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemWeightClean() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemWeightActivity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemWeightCompetition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemWeightLatency() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemWeightNight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemWeightRain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTargetDriverCount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemToggleSafetyActive() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemToggleRacecraftActive() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackNurburgring() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackMisano() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackPaulRicard() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackHungaroring() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackZolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackMonza() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackSilverstone() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackBrandsHatch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackSpa() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackBarcelona() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackZandvoort() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackImola() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackLagunaSeca() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackKyalami() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackMountPanorama() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackSuzuka() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackSnetterton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackOulton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackDonington() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackCOTA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackIndianapolis() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetItemTrackWatkinsGlen() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UGenericSelectorItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiplayerMessageWidget
{
public:
	UMultiplayerMessageWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UMultiplayerMessageItem GetBasicMessageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return UMultiplayerMessageItem(ptr_addr);
	}
	struct TArray<struct UMultiplayerMessageItem> GetMessageStack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct TArray<struct UMultiplayerMessageItem>(ptr_addr);
	}
	struct UScrollBox GetScrollBoxItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UScrollBox(ptr_addr);
	}
	struct UBorder GetBorderInputBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UBorder(ptr_addr);
	}
	struct UEditableTextBox GetTxtInput() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UEditableTextBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiplayerPageServerList
{
public:
	UMultiplayerPageServerList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UYesNoPopup GetPopupMessage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UYesNoPopup(ptr_addr);
	}
	UServerInfoItem GetServerInfoItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return UServerInfoItem(ptr_addr);
	}
	struct UScrollBox GetServerList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UScrollBox(ptr_addr);
	}
	struct UFooterButton GetbtnBack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnRefresh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnQuickjoin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnRefreshLAN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UAcTextInput GettextServerSearch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UAcTextInput(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnConnect() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnAdvanced() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UTextBlock GettxtLoading() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtError() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtNoServers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtConnecting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtErrorDetails() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UTextBlock(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnDevConnectLocalhost() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UTextBlock GettxtLocalDevServer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UTextBlock(ptr_addr);
	}
	enum class EServerListSortMode GetSortMode() {
		return memory.read<enum class EServerListSortMode>(m_addr + 1912);
	}
	int32_t GetPingLimit() {
		return memory.read<int32_t>(m_addr + 1916);
	}
	bool GetShowOnlyJoinable() {
		return memory.read<bool>(m_addr + 1920);
	}
	enum class EServerRequestType GetlastRequestType() {
		return memory.read<enum class EServerRequestType>(m_addr + 1921);
	}
	bool GetWasLastSearchFiltered() {
		return memory.read<bool>(m_addr + 1922);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingSelectionPanel
{
public:
	URatingSelectionPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtRatingCaptionShort() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRatingValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	struct UOverlay GetwdgLockedForeground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UOverlay(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiplayerQuickjoinPage
{
public:
	UMultiplayerQuickjoinPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetstatusFeedbackText() {
		return memory.read<struct FText>(m_addr + 1600);
	}
	struct UInteractiveFooterButton GetbtnAdvanced() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnServerList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnRefresh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UFooterButton GetbtnBack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UFooterButton(ptr_addr);
	}
	struct FText GetLoadingStatusCompetitionServer() {
		return memory.read<struct FText>(m_addr + 1656);
	}
	struct FText GetLoadingStatusPublicServer() {
		return memory.read<struct FText>(m_addr + 1680);
	}

private:
	std::uint64_t m_addr = 0;
};


class ANetController
{
public:
	ANetController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URatingDetailSafetyRating
{
public:
	URatingDetailSafetyRating(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URatingDetailSignalItem GetwdgTrustPoints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct URatingDetailSignalItem(ptr_addr);
	}
	struct URatingDetailSignalItem GetwdgOBWPoints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct URatingDetailSignalItem(ptr_addr);
	}
	struct URatingDetailSignalItem GetwdgSpotterHint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct URatingDetailSignalItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceNotificationBaseWidget
{
public:
	URaceNotificationBaseWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URatingItem
{
public:
	URatingItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnExpandAnimationCompletedEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 608);
	}
	struct FMulticastInlineDelegate GetOnCollapseAnimationCompletedEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 624);
	}
	struct FString GetRatingShort() {
		return memory.read<struct FString>(m_addr + 640);
	}
	struct FString GetRatingLong() {
		return memory.read<struct FString>(m_addr + 656);
	}
	int32_t GetratingIndex() {
		return memory.read<int32_t>(m_addr + 672);
	}
	bool GetIsExpandable() {
		return memory.read<bool>(m_addr + 676);
	}
	struct UTextBlock GettxtRatingShort() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRatingLong() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRatingValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetborderRealtimeIndication() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UBorder(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Expand() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Collapse() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct URatingDetailGeneric GetDetailPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct URatingDetailGeneric(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNotificationAchievementWidget
{
public:
	UNotificationAchievementWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtMessage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNotificationErrorWidget
{
public:
	UNotificationErrorWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtMessage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UViewOptionsLibrary
{
public:
	UViewOptionsLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNotificationFastestLapWidget
{
public:
	UNotificationFastestLapWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNotificationRadioEventWidget
{
public:
	UNotificationRadioEventWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtMessage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOnlineServices
{
public:
	UOnlineServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnBackendUpdateHotlapRank() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnBackendLapPerformanceReport() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}
	struct FMulticastInlineDelegate GetOnBackendConnectionState() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 80);
	}
	struct FMulticastInlineDelegate GetOnDriverSummary() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 96);
	}
	struct FMulticastInlineDelegate GetOnSteamAchievement() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 112);
	}
	struct FMulticastInlineDelegate GetOnRatingDeltaReport() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 128);
	}
	struct FMulticastInlineDelegate GetOnServerListReceived() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 144);
	}
	struct FMulticastInlineDelegate GetOnCPRegionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 160);
	}
	struct FMulticastInlineDelegate GetOnDriverStatistics() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 176);
	}
	struct FMulticastInlineDelegate GetOnRCEloUpdate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 192);
	}
	struct FMulticastInlineDelegate GetOnCPInvitationUpdate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 208);
	}
	struct FMulticastInlineDelegate GetOnDCPInvitationUpdate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 224);
	}
	enum class EOnlineServicesConnectionState GetConnectionState() {
		return memory.read<enum class EOnlineServicesConnectionState>(m_addr + 264);
	}
	struct FOnlineServicesCarStates GetDebugCarState() {
		return memory.read<struct FOnlineServicesCarStates>(m_addr + 268);
	}
	struct FDateTime GetlastTcpMessageSent() {
		return memory.read<struct FDateTime>(m_addr + 280);
	}
	bool GetexpectingTcpMessage() {
		return memory.read<bool>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class AOnlineServicesDebugHUD
{
public:
	AOnlineServicesDebugHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOpponentsPanel
{
public:
	UOpponentsPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOptionsGenericPanel
{
public:
	UOptionsGenericPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetMainTitle() {
		return memory.read<struct FText>(m_addr + 1504);
	}
	struct FText GetFirstRow() {
		return memory.read<struct FText>(m_addr + 1528);
	}
	struct FText GetSecondRow() {
		return memory.read<struct FText>(m_addr + 1552);
	}
	struct FText GetIcon() {
		return memory.read<struct FText>(m_addr + 1576);
	}
	struct UImage GetimgDisabled() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtFirstRow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSecondRow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPausePageContainer
{
public:
	UPausePageContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBackgroundBlur GetBackgroundBlur() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UBackgroundBlur(ptr_addr);
	}
	struct UTextBlock GettxtTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTextBlock(ptr_addr);
	}
	struct UNamedSlot GetslotMenu() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetslotMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UNamedSlot(ptr_addr);
	}
	struct TMap<struct FName, struct UWidgetAnimation> GetAnimations() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct TMap<struct FName, struct UWidgetAnimation>(ptr_addr);
	}
	float GetLightBackgroundBlur() {
		return memory.read<float>(m_addr + 720);
	}
	float GetStrongBackgroundBlur() {
		return memory.read<float>(m_addr + 724);
	}
	struct FText GetTitleText() {
		return memory.read<struct FText>(m_addr + 728);
	}
	bool GetisFullscreen() {
		return memory.read<bool>(m_addr + 752);
	}
	bool GetShowFullscreenToggle() {
		return memory.read<bool>(m_addr + 753);
	}
	bool GetshowCircuitName() {
		return memory.read<bool>(m_addr + 754);
	}

private:
	std::uint64_t m_addr = 0;
};


class ARainBase
{
public:
	ARainBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UParticleSystem GetTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UParticleSystem(ptr_addr);
	}
	struct FVector GetEmitterSize() {
		return memory.read<struct FVector>(m_addr + 552);
	}
	float GetVerticalOffset() {
		return memory.read<float>(m_addr + 564);
	}
	float GetVelocityMaxSpeed() {
		return memory.read<float>(m_addr + 568);
	}
	struct TArray<struct UParticleSystemComponent> GetParticleChildren() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct TArray<struct UParticleSystemComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsInfoPanel
{
public:
	UPhysicsInfoPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtCamberValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtToeValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRideHeightValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtIMO1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtIMO2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtIMO3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWear1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWear2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWear3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTyrePressure() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtDiscWear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPadWear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPresetItem
{
public:
	UPresetItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GetFilename() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetfileDate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPresetsPopup
{
public:
	UPresetsPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetSaveTitleText() {
		return memory.read<struct FText>(m_addr + 1320);
	}
	struct FText GetLoadTitleText() {
		return memory.read<struct FText>(m_addr + 1344);
	}
	struct FText GetRenameTitleText() {
		return memory.read<struct FText>(m_addr + 1368);
	}
	struct FText GetDeleteTitleText() {
		return memory.read<struct FText>(m_addr + 1392);
	}
	struct FText GetNewFileText() {
		return memory.read<struct FText>(m_addr + 1416);
	}
	struct FText GetLoadQuestionText() {
		return memory.read<struct FText>(m_addr + 1440);
	}
	struct FText GetLoadQuestionDescription() {
		return memory.read<struct FText>(m_addr + 1464);
	}
	struct FText GetOverwriteQuestionText() {
		return memory.read<struct FText>(m_addr + 1488);
	}
	struct FText GetOverwriteQuestionDescription() {
		return memory.read<struct FText>(m_addr + 1512);
	}
	struct FText GetDeleteQuestionText() {
		return memory.read<struct FText>(m_addr + 1536);
	}
	struct FText GetDeleteQuestionDescription() {
		return memory.read<struct FText>(m_addr + 1560);
	}
	struct UMainSelectorItem GetActionSelector() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UMainSelectorItem(ptr_addr);
	}
	struct UVerticalBox GetItemList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UVerticalBox(ptr_addr);
	}
	struct UScrollBox GetScrollBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UScrollBox(ptr_addr);
	}
	struct UGenericSelectorItem GetTrackFilter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UMultiLineEditableText GetDescriptionReadOnly() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UMultiLineEditableText(ptr_addr);
	}
	UPresetItem GetPresetItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return UPresetItem(ptr_addr);
	}
	struct UWidgetSwitcher GetSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UTextBlock GetSaveTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UAcPanelBase GetSaveFileName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetSaveDescription() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UInteractiveFooterButton GetConfirm() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UInteractiveFooterButton GetCancel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct UTextBlock GetQuestionText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetQuestionDescription() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UTextBlock(ptr_addr);
	}
	struct UPresetItem GetNewPresetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UPresetItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AProximityHUD
{
public:
	AProximityHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ARaceDirectorDebugHUD
{
public:
	ARaceDirectorDebugHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URaceFinalStandingItems
{
public:
	URaceFinalStandingItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FText> GetLapsTexts() {
		return memory.read<struct TArray<struct FText>>(m_addr + 608);
	}
	struct UImage GetimgPositionPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgNumberPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBodyNames() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBodyGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UImage(ptr_addr);
	}
	struct UCanvasPanel GetcvsPosition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UWidgetAnimation GetOpenAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetOpenAnimationSpeed() {
		return memory.read<float>(m_addr + 744);
	}
	struct UTextBlock GettxtDriverName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarNum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceIntroPage
{
public:
	URaceIntroPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisOpenForContinue() {
		return memory.read<bool>(m_addr + 1320);
	}
	URaceStandingDetailedItems GetWdgStandingItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return URaceStandingDetailedItems(ptr_addr);
	}
	UAcPageBase GetWdgPausePageClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return UAcPageBase(ptr_addr);
	}
	float GetTimeGridShow() {
		return memory.read<float>(m_addr + 1424);
	}
	float GetTimeGridDelay() {
		return memory.read<float>(m_addr + 1428);
	}
	float GetTimeFlipInfo() {
		return memory.read<float>(m_addr + 1432);
	}
	float GetTimeHideInfo() {
		return memory.read<float>(m_addr + 1436);
	}
	struct FText GetHotlapSessionTitle() {
		return memory.read<struct FText>(m_addr + 1440);
	}
	struct FText GetHotstintSessionTitle() {
		return memory.read<struct FText>(m_addr + 1464);
	}
	struct FText GetPracticeSessionTitle() {
		return memory.read<struct FText>(m_addr + 1488);
	}
	struct FText GetRaceSessionTitle() {
		return memory.read<struct FText>(m_addr + 1512);
	}
	struct UButton GetClickScreen() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UButton(ptr_addr);
	}
	struct UTextBlock GettxtCircuit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSession() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetEventSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UVerticalBox GetLeftLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UVerticalBox(ptr_addr);
	}
	struct UVerticalBox GetRightLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UVerticalBox(ptr_addr);
	}
	struct UImage GetimgFlag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceMainGui
{
public:
	URaceMainGui(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCurrentSplit() {
		return memory.read<int32_t>(m_addr + 1320);
	}
	int32_t GetLapCount() {
		return memory.read<int32_t>(m_addr + 1324);
	}
	int32_t GetLastTime() {
		return memory.read<int32_t>(m_addr + 1328);
	}
	struct TArray<int32_t> GetLastSplits() {
		return memory.read<struct TArray<int32_t>>(m_addr + 1336);
	}
	int32_t GetBestTime() {
		return memory.read<int32_t>(m_addr + 1352);
	}
	struct TArray<int32_t> GetBestSplits() {
		return memory.read<struct TArray<int32_t>>(m_addr + 1360);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingWidget
{
public:
	URatingWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetSwitcher GetwdgSwitcher_RatingDetail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct URatingDetailTrackCompetence GetWDG_RaceRatingDetailTrackCompetence() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct URatingDetailTrackCompetence(ptr_addr);
	}
	struct URatingDetailConsistency GetWDG_RaceRatingDetailConsistency() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct URatingDetailConsistency(ptr_addr);
	}
	struct URatingDetailCarControl GetWDG_RaceRatingDetailCarControl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct URatingDetailCarControl(ptr_addr);
	}
	struct URatingDetailPace GetWDG_RaceRatingDetailPace() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct URatingDetailPace(ptr_addr);
	}
	struct URatingDetailSafetyRating GetWDG_RaceRatingDetailSafetyRating() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct URatingDetailSafetyRating(ptr_addr);
	}
	struct URatingDetailRacecraft GetWDG_RaceRatingDetailRacecraft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct URatingDetailRacecraft(ptr_addr);
	}
	struct URatingDetailCompetition GetWDG_RaceRatingDetailCompetition() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct URatingDetailCompetition(ptr_addr);
	}
	struct URatingItem GetWDG_RaceRatingItemTC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct URatingItem(ptr_addr);
	}
	struct URatingItem GetWDG_RaceRatingItemCN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct URatingItem(ptr_addr);
	}
	struct URatingItem GetWDG_RaceRatingItemCC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct URatingItem(ptr_addr);
	}
	struct URatingItem GetWDG_RaceRatingItemPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct URatingItem(ptr_addr);
	}
	struct URatingItem GetWDG_RaceRatingItemSA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct URatingItem(ptr_addr);
	}
	struct URatingItem GetWDG_RaceRatingItemRC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct URatingItem(ptr_addr);
	}
	struct URatingItem GetWDG_RaceRatingItemCP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct URatingItem(ptr_addr);
	}
	struct UCanvasPanel Getcanvas_ErrorMsgPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock Gettxt_ErrorBig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock Gettxt_ErrorHint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceNotificationManagerWidget
{
public:
	URaceNotificationManagerWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URacePageResults
{
public:
	URacePageResults(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHorizontalBox GetSessionMenu() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2944);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UGenericBarItem GetbtnReturn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2952);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnNextSession() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2960);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnCareerNext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2968);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UGenericBarItem GetbtnChampNext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2976);
		return struct UGenericBarItem(ptr_addr);
	}
	struct UTimeTable GetSessionTimeTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2984);
		return struct UTimeTable(ptr_addr);
	}
	struct UTextBlock GettxtSessionName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2992);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ARaceRatingDebugHUD
{
public:
	ARaceRatingDebugHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URaceRatingsManager
{
public:
	URaceRatingsManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnDebugCollisionInfo() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct TMap<uint16_t, struct URaceRatingCarRelationship> GetOpponentRelationships() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct TMap<uint16_t, struct URaceRatingCarRelationship>(ptr_addr);
	}
	struct TArray<struct URaceRatingCarRelationship> GetDogfightOpponentsInFront() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct TArray<struct URaceRatingCarRelationship>(ptr_addr);
	}
	struct TArray<struct URaceRatingCarRelationship> GetDogfightOpponentsBehind() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct TArray<struct URaceRatingCarRelationship>(ptr_addr);
	}
	struct TArray<struct FCircuitCornerInfo> GetCornerInfos() {
		return memory.read<struct TArray<struct FCircuitCornerInfo>>(m_addr + 360);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceStandingDetailedItems
{
public:
	URaceStandingDetailedItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetimgPositionPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgNumberPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgBody() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UWidgetAnimation GetSwapAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOpenCloseAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetSwapAnimationSpeed() {
		return memory.read<float>(m_addr + 720);
	}
	struct UTextBlock GettxtNames() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarNum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URaceTransitionPage
{
public:
	URaceTransitionPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTyreStausPanel
{
public:
	UTyreStausPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtBlistering() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtFlatSpot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGrain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWear1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWear2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWear3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtDiscWear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPadWear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingProfileDetailBase
{
public:
	URatingProfileDetailBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URatingCCDetail
{
public:
	URatingCCDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USimpleColumnChart GetWDG_ChartCCRatings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct USimpleColumnChart GetWDG_ChartOverdriveRatings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct UCanvasPanel Getpanel_SessionHints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock GettxtHintCC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintOverdrive() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintDay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailGeneric
{
public:
	URatingDetailGeneric(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetHasDetailItems() {
		return memory.read<bool>(m_addr + 608);
	}
	struct URatingDetailIntroItem GetwdgIntroText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct URatingDetailIntroItem(ptr_addr);
	}
	struct UVerticalBox GetvboxItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UVerticalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimeTableNameItem
{
public:
	UTimeTableNameItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}
	struct UHorizontalBox GetNameBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UHorizontalBox(ptr_addr);
	}
	bool GetIsBold() {
		return memory.read<bool>(m_addr + 624);
	}
	bool GetisHighlighted() {
		return memory.read<bool>(m_addr + 625);
	}
	struct FLinearColor GetColorHighlighted() {
		return memory.read<struct FLinearColor>(m_addr + 628);
	}
	struct FLinearColor GetColorNormal() {
		return memory.read<struct FLinearColor>(m_addr + 644);
	}
	struct TArray<struct UTextBlock> GetValues() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct TArray<struct UTextBlock>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailCarControl
{
public:
	URatingDetailCarControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URatingDetailMessageItem GetwdgLapsRemainingObjective() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct URatingDetailMessageItem(ptr_addr);
	}
	struct URatingDetailSignalItem GetwdgSignalSlip() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct URatingDetailSignalItem(ptr_addr);
	}
	struct URatingDetailSectionsItem Getwdg_sections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct URatingDetailSectionsItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UResolutionPopup
{
public:
	UResolutionPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetPreText() {
		return memory.read<struct FText>(m_addr + 1320);
	}
	struct FText GetPostText() {
		return memory.read<struct FText>(m_addr + 1344);
	}
	struct UAcPanelBase GetyesButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetnoButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UAcPanelBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailCompetition
{
public:
	URatingDetailCompetition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USavegameBlueprintFunctionLibrary
{
public:
	USavegameBlueprintFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URatingDetailConsistency
{
public:
	URatingDetailConsistency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URatingDetailMessageItem GetwdgConsistencyObjective() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct URatingDetailMessageItem(ptr_addr);
	}
	struct URatingDetailMessageItem GetwdgLapsRemainingObjective() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct URatingDetailMessageItem(ptr_addr);
	}
	struct URatingDetailSignalItem GetwdgSignalMinPush() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct URatingDetailSignalItem(ptr_addr);
	}
	struct URatingDetailSectionsItem Getwdg_sections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct URatingDetailSectionsItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UViewOptionsSaves
{
public:
	UViewOptionsSaves(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSaveSlotName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	char GetMirrorQualityLevel() {
		return memory.read<char>(m_addr + 56);
	}
	char GetMaxCarsVisible() {
		return memory.read<char>(m_addr + 57);
	}
	bool GetisMBlurEnabled() {
		return memory.read<bool>(m_addr + 58);
	}
	bool GetisAATemporal() {
		return memory.read<bool>(m_addr + 59);
	}
	float GetColorSaturation() {
		return memory.read<float>(m_addr + 60);
	}
	float GetSharpen() {
		return memory.read<float>(m_addr + 64);
	}
	float GetPixelDensity() {
		return memory.read<float>(m_addr + 68);
	}
	bool GetisHDRActive() {
		return memory.read<bool>(m_addr + 72);
	}
	int32_t GetMirrorDistance() {
		return memory.read<int32_t>(m_addr + 76);
	}
	float GetHorizonLock() {
		return memory.read<float>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailIntroItem
{
public:
	URatingDetailIntroItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	URatingDetailIntroLine GetRatingDetailIntroItemWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return URatingDetailIntroLine(ptr_addr);
	}
	struct UVerticalBox GetvboxObjectives() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UVerticalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimeTableItem
{
public:
	UTimeTableItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnTimeTableItemFocused() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1512);
	}
	struct FMulticastInlineDelegate GetOnTimeTableItemForward() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1528);
	}
	struct FMulticastInlineDelegate GetOnTimeTableItemBackward() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1544);
	}
	struct UBorder GetborderMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UBorder(ptr_addr);
	}
	struct UImage GetimgPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UImage(ptr_addr);
	}
	struct UImage GetBrand() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}
	struct UTimeTableSectorTimeItem GetSectorOne() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UTimeTableSectorTimeItem(ptr_addr);
	}
	struct UTimeTableSectorTimeItem GetSectorTwo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UTimeTableSectorTimeItem(ptr_addr);
	}
	struct UTimeTableSectorTimeItem GetSectorThree() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTimeTableSectorTimeItem(ptr_addr);
	}
	struct UTimeTableSectorTimeItem GetLapTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UTimeTableSectorTimeItem(ptr_addr);
	}
	struct UTimeTableSectorTimeItem GetDeltaTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTimeTableSectorTimeItem(ptr_addr);
	}
	struct UTextBlock GettxtLapCount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTimeTableNameItem GetNameOne() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTimeTableNameItem(ptr_addr);
	}
	struct UTimeTableNameItem GetNameTwo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTimeTableNameItem(ptr_addr);
	}
	struct UGenericMappedLabel GetCarCupLabel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UGenericMappedLabel(ptr_addr);
	}
	struct UHorizontalBox GetTimingInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UImage GetimgFlag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UImage(ptr_addr);
	}
	struct UBorder GetpitCount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetPit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GettxtPitCount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UTextBlock(ptr_addr);
	}
	char GetCarCup() {
		return memory.read<char>(m_addr + 1704);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailMessageItem
{
public:
	URatingDetailMessageItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtObjective() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailPace
{
public:
	URatingDetailPace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URatingDetailRacecraft
{
public:
	URatingDetailRacecraft(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URatingDetailMessageItem GetwdgDogfightHintFront() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct URatingDetailMessageItem(ptr_addr);
	}
	struct URatingDetailMessageItem GetwdgDogfightHintBehind() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct URatingDetailMessageItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailSectionsItem
{
public:
	URatingDetailSectionsItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHorizontalBox GethBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UTextBlock GettxtHint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTextBlock(ptr_addr);
	}
	struct UWidgetAnimation GetPopupAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingDetailTrackCompetence
{
public:
	URatingDetailTrackCompetence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URatingDetailMessageItem GetwdgMessageMedals() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct URatingDetailMessageItem(ptr_addr);
	}
	struct URatingDetailSignalItem GetwdgSignalLapObjective() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct URatingDetailSignalItem(ptr_addr);
	}
	struct URatingDetailSignalItem GetwdgSignalPushHint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct URatingDetailSignalItem(ptr_addr);
	}
	struct URatingDetailSignalItem GetwdgSignalOverdriveHint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct URatingDetailSignalItem(ptr_addr);
	}
	struct URatingDetailSectionsItem Getwdg_sections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct URatingDetailSectionsItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingRCDetail
{
public:
	URatingRCDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USimpleColumnChart GetWDG_ChartRacecraft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct USimpleColumnChart GetWDG_ChartElo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct UCanvasPanel Getpanel_SessionHints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock GettxtHintElo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintRCRating() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintKmDriven() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintDay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingSADetail
{
public:
	URatingSADetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USimpleColumnChart GetWDG_ChartTrust() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct USimpleColumnChart GetWDG_ChartOBWPs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct UCanvasPanel Getpanel_SessionHints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UTextBlock GettxtHintTrust() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintOBWPs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintKmDriven() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtHintDay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingTCDetail
{
public:
	URatingTCDetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URatingTCTrackItem GetWDG_TrackItemNurburgring() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemMisano() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemPaulRicard() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemHungaroring() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemZolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemMonza() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemSilverstone() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemBrandsHatch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemSpa() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemBarcelona() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemZandvoort() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemKyalami() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemMountPanorama() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemLagunaSeca() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemSuzuka() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemImola() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemSnetterton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemOulton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemDonington() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemCOTA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemIndianapolis() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct URatingTCTrackItem GetWDG_TrackItemWatkinsGlen() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct URatingTCTrackItem(ptr_addr);
	}
	struct UTextBlock GettxtTrackMedalsTotal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTrackMedalsMax() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URatingTODetail
{
public:
	URatingTODetail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USimpleColumnChart GetWDG_ChartRatings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct USimpleColumnChart(ptr_addr);
	}
	struct USimpleAreaChart GetWDG_ChartProgression2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct USimpleAreaChart(ptr_addr);
	}
	struct UImage GetimgTrendIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtFiaCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCO() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AWingDebugHUD
{
public:
	AWingDebugHUD(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ARealtimePositionsDebugHud
{
public:
	ARealtimePositionsDebugHud(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URearMirrorWidget
{
public:
	URearMirrorWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReplayBlueprintFunctionLibrary
{
public:
	UReplayBlueprintFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReplayHighlightEvents
{
public:
	UReplayHighlightEvents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EHighLightsEventType, struct FHighlightEventsData> GetMapEvents() {
		return memory.read<struct TMap<enum class EHighLightsEventType, struct FHighlightEventsData>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplayPanel
{
public:
	UReplayPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UServerInfoItem
{
public:
	UServerInfoItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInvalidationBox GetInvalidator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UTextBlock GettxtServerName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSeason() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder Getbackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetbrdSessionIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GettxtDriversOnline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtFriendsOnline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRaceEventType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtIsJoinAllowed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWeatherIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtNightIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTrackMedalRequirement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtSafetyRatingRequirement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRacecraftRatingRequirement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCompetitionRatingRequirement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtServerCleanliness() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtServerCompetitionIndication() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTextBlock(ptr_addr);
	}
	struct UGridPanel GetExtraInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UGridPanel(ptr_addr);
	}
	struct UBorder GetgroupVariation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UBorder(ptr_addr);
	}
	struct UProgressBar GetweatherVariation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UProgressBar(ptr_addr);
	}
	struct UHorizontalBox GetgroupServerRatings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetgroupServerPassword() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetgroupRequirements() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetgroupRC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetgroupSA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetgroupTM() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetgroupCP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UHorizontalBox GetgroupFriends() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UAcTextInput GetinputServerPassword() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UAcTextInput(ptr_addr);
	}
	struct UImage GetimgLocked() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UImage(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnItemFocused() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1784);
	}
	struct FLinearColor GetalternateColor() {
		return memory.read<struct FLinearColor>(m_addr + 1800);
	}
	struct FLinearColor GetNormalColor() {
		return memory.read<struct FLinearColor>(m_addr + 1816);
	}
	struct FLinearColor GetFocusColor() {
		return memory.read<struct FLinearColor>(m_addr + 1832);
	}
	struct FLinearColor GetSelectColor() {
		return memory.read<struct FLinearColor>(m_addr + 1848);
	}
	struct FOnlineServicesMPServerInfo GetServerInfo() {
		return memory.read<struct FOnlineServicesMPServerInfo>(m_addr + 1864);
	}
	struct TMap<enum class ERaceEventType, struct FText> GetGameModeTitles() {
		return memory.read<struct TMap<enum class ERaceEventType, struct FText>>(m_addr + 2040);
	}
	struct FLinearColor GetbackgoundColor() {
		return memory.read<struct FLinearColor>(m_addr + 2120);
	}
	struct TMap<enum class ESessionType, struct FText> Getsessionnamemap() {
		return memory.read<struct TMap<enum class ESessionType, struct FText>>(m_addr + 2136);
	}

private:
	std::uint64_t m_addr = 0;
};


class USessionResults
{
public:
	USessionResults(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USetupPresets
{
public:
	USetupPresets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetScreenName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct TMap<struct FName, struct FCarSetup> GetSetupMap() {
		return memory.read<struct TMap<struct FName, struct FCarSetup>>(m_addr + 64);
	}
	struct UDataTable GetoldSetupPresets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UDataTable(ptr_addr);
	}
	struct UAcInfoManager GetInfoManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UAcInfoManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USetupManager
{
public:
	USetupManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetisFrontToeArmPositive() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetisRearToeArmPositive() {
		return memory.read<bool>(m_addr + 49);
	}
	float GetaeroBalanceInfoOffset() {
		return memory.read<float>(m_addr + 52);
	}
	float GetaeroBalanceInfoScale() {
		return memory.read<float>(m_addr + 56);
	}
	float GetbrakeBalanceInfoOffset() {
		return memory.read<float>(m_addr + 60);
	}
	float GetbrakeBalanceInfoScale() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetshowSetupSavePresetsButtons() {
		return memory.read<bool>(m_addr + 68);
	}
	bool GetshowAeroBalance() {
		return memory.read<bool>(m_addr + 69);
	}
	struct USetupPresets GetNewSetupPresets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USetupPresets(ptr_addr);
	}
	struct FSetupLimits GetSetupLimits() {
		return memory.read<struct FSetupLimits>(m_addr + 80);
	}
	struct UDataTable GetFrontDamperLuts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3816);
		return struct UDataTable(ptr_addr);
	}
	struct UDataTable GetRearDamperLuts() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3824);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubtitlesManager
{
public:
	USubtitlesManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetSubtitlesTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USetupPage
{
public:
	USetupPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSetupCarPreviews> GetCarPreviews() {
		return memory.read<struct TArray<struct FSetupCarPreviews>>(m_addr + 1320);
	}
	struct FText GetcurrentSetupText() {
		return memory.read<struct FText>(m_addr + 1336);
	}
	UYesNoPopup GetYesNoPopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return UYesNoPopup(ptr_addr);
	}
	struct FText GetYesNoPopUpTitle() {
		return memory.read<struct FText>(m_addr + 1376);
	}
	struct FText GetYesNoPopUpText() {
		return memory.read<struct FText>(m_addr + 1400);
	}
	struct UTextBlock GettxtCurrentSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWarningRefuel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UTextBlock(ptr_addr);
	}
	struct UGenericSelectorItem GetfuelConsumption() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UImage GetimgCarPresets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCarTyres() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCarElectronics() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCarMechBalance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCarDampers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCarAero() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UImage(ptr_addr);
	}
	struct UAcPanelBase GetbtnSafePreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnAggressivePreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnWetPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnCurrentSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnSaveSafePreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnSaveAggressivePreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnSaveWetPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnCopyPitstopStrategy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UUserWidget GetpresetBtnCustom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UUserWidget(ptr_addr);
	}
	struct TArray<struct FName> GetCamberNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1568);
	}
	struct TArray<struct FName> GetToeNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1584);
	}
	struct TArray<struct FName> GetWheelRateNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1600);
	}
	struct TArray<struct FName> GetBumpSlowNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1616);
	}
	struct TArray<struct FName> GetReboundSlowNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1632);
	}
	struct TArray<struct FName> GetBumpFastNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1648);
	}
	struct TArray<struct FName> GetReboundFastNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1664);
	}
	struct TArray<struct FName> GetRideHeightNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1680);
	}
	struct TArray<struct FName> GetTyreNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1696);
	}
	struct TArray<struct FName> GetTyreNamesStrategy() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1712);
	}
	struct TArray<struct FName> GetBumpStopRateUpNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1728);
	}
	struct TArray<struct FName> GetBumpStopRangeUpNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1744);
	}
	struct TArray<struct UGenericSelectorItem> GetCamber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetToe() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct UGenericSelectorItem GetCasterLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetCasterRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetSteerRatio() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetWheelRate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct UGenericSelectorItem GetARBFront() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetARBRear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetBrakeTorque() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1848);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetBrakeBias() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1856);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetBrakeDuctsR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1864);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetBrakeDuctsF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetBumpStopRateUp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1880);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetBumpStopRangeUp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1896);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetBumpSlow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1912);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetReboundSlow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1928);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetBumpFast() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1944);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetReboundFast() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1960);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GettyrePressure() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1976);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct UGenericSelectorItem GettyreCompound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1992);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetfrontBrakeCompound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2000);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetrearBrakeCompound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2008);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTC1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2016);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTC2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2024);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetAbs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2032);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetECUMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2040);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTelemetryLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2048);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GettoggleAutoSetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2056);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetFuel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2064);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetTyreSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2072);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetnPitStops() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2080);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GettyreCompoundStrategy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2088);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetfrontBrakeCompoundStrategy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2096);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetrearBrakeCompoundStrategy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2104);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetTyrePressureStrategy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2112);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct UGenericSelectorItem GetFuelToAdd() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2128);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct TArray<struct UGenericSelectorItem> GetRideHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2136);
		return struct TArray<struct UGenericSelectorItem>(ptr_addr);
	}
	struct UGenericSelectorItem GetSplitter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2152);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetRearWing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2160);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UGenericSelectorItem GetPreload() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2168);
		return struct UGenericSelectorItem(ptr_addr);
	}
	struct UPhysicsInfoPanel GetinfosLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2176);
		return struct UPhysicsInfoPanel(ptr_addr);
	}
	struct UPhysicsInfoPanel GetinfosRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2184);
		return struct UPhysicsInfoPanel(ptr_addr);
	}
	struct UPhysicsInfoPanel GetinfosLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2192);
		return struct UPhysicsInfoPanel(ptr_addr);
	}
	struct UPhysicsInfoPanel GetinfosRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2200);
		return struct UPhysicsInfoPanel(ptr_addr);
	}
	struct UPhysicsInfoPanel GetDebugLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2208);
		return struct UPhysicsInfoPanel(ptr_addr);
	}
	struct UPhysicsInfoPanel GetDebugRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2216);
		return struct UPhysicsInfoPanel(ptr_addr);
	}
	struct UPhysicsInfoPanel GetDebugLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2224);
		return struct UPhysicsInfoPanel(ptr_addr);
	}
	struct UPhysicsInfoPanel GetDebugRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2232);
		return struct UPhysicsInfoPanel(ptr_addr);
	}
	struct UTyreStausPanel GettyreStatusLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2240);
		return struct UTyreStausPanel(ptr_addr);
	}
	struct UTyreStausPanel GettyreStatusRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2248);
		return struct UTyreStausPanel(ptr_addr);
	}
	struct UTyreStausPanel GettyreStatusLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2256);
		return struct UTyreStausPanel(ptr_addr);
	}
	struct UTyreStausPanel GettyreStatusRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2264);
		return struct UTyreStausPanel(ptr_addr);
	}
	struct UHorizontalBox GetHorizontalMenu() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2272);
		return struct UHorizontalBox(ptr_addr);
	}
	struct UAcTogglePanel Gettyres() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2280);
		return struct UAcTogglePanel(ptr_addr);
	}
	struct UAcTogglePanel Getelectronics() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2288);
		return struct UAcTogglePanel(ptr_addr);
	}
	struct UAcTogglePanel GetFuelStrategy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2296);
		return struct UAcTogglePanel(ptr_addr);
	}
	struct UAcTogglePanel GetMechBalance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2304);
		return struct UAcTogglePanel(ptr_addr);
	}
	struct UAcTogglePanel GetDampers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2312);
		return struct UAcTogglePanel(ptr_addr);
	}
	struct UAcTogglePanel GetAeroBalance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2320);
		return struct UAcTogglePanel(ptr_addr);
	}
	struct UWidgetSwitcher GetSwitchPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2328);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetSwitchDetails() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2336);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UCanvasPanel GetPresetPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2344);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetSettingPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2352);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UAcPanelBase GetbtnTyreLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2360);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnTyreRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2368);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnTyreLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2376);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnTyreRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2384);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementElectronics() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2392);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnFuelStrategy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2400);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnPitStrategy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2408);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementMechBalanceLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2416);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementMechBalanceRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2424);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementMechBalanceLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2432);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementMechBalanceRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2440);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementMechBalanceFront() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2448);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementMechBalanceRear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2456);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementDampersLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2464);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementDampersRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2472);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementDampersLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2480);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementDampersRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2488);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementAeroBalanceRear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2496);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementAeroBalanceFront() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2504);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetbtnElementFuelTest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2512);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UTextBlock GettxtAeroFrontBalance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2520);
		return struct UTextBlock(ptr_addr);
	}
	struct UTimeGraphPanel GetBumpStopGraphLF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2528);
		return struct UTimeGraphPanel(ptr_addr);
	}
	struct UTimeGraphPanel GetBumpStopGraphRF() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2536);
		return struct UTimeGraphPanel(ptr_addr);
	}
	struct UTimeGraphPanel GetBumpStopGraphLR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2544);
		return struct UTimeGraphPanel(ptr_addr);
	}
	struct UTimeGraphPanel GetBumpStopGraphRR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2552);
		return struct UTimeGraphPanel(ptr_addr);
	}
	struct UTextBlock GettxtCarModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2560);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgCarBrandLogo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2568);
		return struct UImage(ptr_addr);
	}
	UPresetsPopup GetloadSavePopupClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2576);
		return UPresetsPopup(ptr_addr);
	}
	struct UCanvasPanel GetcvsWaiting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2592);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UUserWidget GetWDG_SetupAeroInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2600);
		return struct UUserWidget(ptr_addr);
	}
	struct UInteractiveFooterButton GetbtnLoadSave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2608);
		return struct UInteractiveFooterButton(ptr_addr);
	}
	struct FSetupLimits GetSetupLimits() {
		return memory.read<struct FSetupLimits>(m_addr + 2752);
	}
	struct FCarSetup GetcurrentSetup() {
		return memory.read<struct FCarSetup>(m_addr + 6488);
	}

private:
	std::uint64_t m_addr = 0;
};


class USimpleAreaChart
{
public:
	USimpleAreaChart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetimgBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct FLinearColor GetSeriesColor() {
		return memory.read<struct FLinearColor>(m_addr + 616);
	}

private:
	std::uint64_t m_addr = 0;
};


class USimpleColumnChart
{
public:
	USimpleColumnChart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSelectedIdChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1504);
	}
	struct UHorizontalBox GetHorizontalBox_Columns() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UHorizontalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USimpleColumnChartColumn
{
public:
	USimpleColumnChartColumn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPhysicsSettingsAC
{
public:
	UPhysicsSettingsAC(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPuddlesGain() {
		return memory.read<float>(m_addr + 48);
	}
	float GetTyreSlipVibrationThresholdMin() {
		return memory.read<float>(m_addr + 52);
	}
	float GetTyreSlipVibrationThresholdMax() {
		return memory.read<float>(m_addr + 56);
	}
	float GetTyreSlipVibrationStrength() {
		return memory.read<float>(m_addr + 60);
	}
	float GetMarblesAccumulationGain() {
		return memory.read<float>(m_addr + 64);
	}
	float GetMarblesDissipationGain() {
		return memory.read<float>(m_addr + 68);
	}
	float GetMarblesMuK() {
		return memory.read<float>(m_addr + 72);
	}
	float GetMarblesGrooveK() {
		return memory.read<float>(m_addr + 76);
	}
	float GetGyroGainTyres() {
		return memory.read<float>(m_addr + 80);
	}
	float GetRainRRMult() {
		return memory.read<float>(m_addr + 84);
	}
	float GetDirtAccumulationSpeed() {
		return memory.read<float>(m_addr + 88);
	}
	float GetMarblesPickupAccumulationSpeed() {
		return memory.read<float>(m_addr + 92);
	}
	float GetDustAccumulationSpeed() {
		return memory.read<float>(m_addr + 96);
	}
	float GetWindshieldScratchesDustRate() {
		return memory.read<float>(m_addr + 100);
	}
	float GetWindshieldScratchesDirtRate() {
		return memory.read<float>(m_addr + 104);
	}
	float GetWindshieldScratchesPickupRate() {
		return memory.read<float>(m_addr + 108);
	}
	float GetWindshieldDirtDustRate() {
		return memory.read<float>(m_addr + 112);
	}
	float GetWindshieldDirtDirtRate() {
		return memory.read<float>(m_addr + 116);
	}
	float GetWindshieldDirtPickupRate() {
		return memory.read<float>(m_addr + 120);
	}
	float GetCurbPressureLossMult() {
		return memory.read<float>(m_addr + 124);
	}
	float GetCurbPressureLossThreshold() {
		return memory.read<float>(m_addr + 128);
	}
	float GetFlatSpotVibrationStrength() {
		return memory.read<float>(m_addr + 132);
	}
	float GetSlipStreamGain() {
		return memory.read<float>(m_addr + 136);
	}
	float GetDirtTrackBaseAccumulationLevel() {
		return memory.read<float>(m_addr + 140);
	}
	float GetDirtDustWetnessFactor() {
		return memory.read<float>(m_addr + 144);
	}
	float GetSparksIgnitionPercentage() {
		return memory.read<float>(m_addr + 148);
	}
	float GetSparksFilterTime() {
		return memory.read<float>(m_addr + 152);
	}
	float GetconstantDamper() {
		return memory.read<float>(m_addr + 156);
	}
	float GetwetCutRulesMinWetness() {
		return memory.read<float>(m_addr + 160);
	}
	float GetwetCutRulesMaxWetness() {
		return memory.read<float>(m_addr + 164);
	}
	float GetwetCutRulesValSeconds() {
		return memory.read<float>(m_addr + 168);
	}
	float GetwetCutRulesOffsetSeconds() {
		return memory.read<float>(m_addr + 172);
	}
	float GetwetCutRulesMinCutGain() {
		return memory.read<float>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class USinglePlayerColumnPage
{
public:
	USinglePlayerColumnPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTeamSelectionColumnPanel GetDriverTeamSelectionPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UTeamSelectionColumnPanel(ptr_addr);
	}
	struct UCircuitSelectionColumnPanel GetCircuitSelectionPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UCircuitSelectionColumnPanel(ptr_addr);
	}
	struct UGameModeColumnPanel GetGameModePanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UGameModeColumnPanel(ptr_addr);
	}
	struct UTextBlock GettxtWeatherIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWeatherLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTrackDynamic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTrackStatus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRealismLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtAssistsLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USinglePlayerPanel
{
public:
	USinglePlayerPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class EGuiGameModes, struct FText> GetGameModeTitles() {
		return memory.read<struct TMap<enum class EGuiGameModes, struct FText>>(m_addr + 1504);
	}
	struct UTextBlock GetSubTitle_txt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTrackName_txt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetCarModel_txt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkidmarks
{
public:
	USkidmarks(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetGroundOffset() {
		return memory.read<float>(m_addr + 504);
	}
	float GetDistanceThreshold() {
		return memory.read<float>(m_addr + 508);
	}
	int32_t GetMaxSegments() {
		return memory.read<int32_t>(m_addr + 512);
	}
	struct UMaterial GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UMaterial(ptr_addr);
	}
	struct UProceduralMeshComponent GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UProceduralMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkinManager
{
public:
	USkinManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USpecialEventLeaderboardItems
{
public:
	USpecialEventLeaderboardItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EKunosDriverCategory GetKunosCategories() {
		return memory.read<enum class EKunosDriverCategory>(m_addr + 608);
	}
	struct UTextBlock GettxtPos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLapTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTextBlock(ptr_addr);
	}
	struct UCanvasPanel GetcvsGap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UCanvasPanel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpecialEventSinglePanel
{
public:
	USpecialEventSinglePanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtEventName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventDescription() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgLock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgPoster() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UImage(ptr_addr);
	}
	struct UBorder GetbrdSeasonAndID() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GettxtSeason() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtId() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetInfoPanelSwitch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpecialEventsPage
{
public:
	USpecialEventsPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class ECarModelType, struct UTexture2D> GetCarImages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct TMap<enum class ECarModelType, struct UTexture2D>(ptr_addr);
	}
	USpecialEventLeaderboardItems GetWdgLeaderboardHotlapStandingItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return USpecialEventLeaderboardItems(ptr_addr);
	}
	UUserWidget GetWdgHotlapStandingSpacerItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return UUserWidget(ptr_addr);
	}
	USpecialEventSinglePanel GetWdgSpecialEventSinglePanelClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return USpecialEventSinglePanel(ptr_addr);
	}
	struct UStartSessionPanel GetStartSessionPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UStartSessionPanel(ptr_addr);
	}
	struct UTextBlock GettxtPages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtNoEvents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventDescription() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCircuitCountry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWeather() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtWeatherIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCircuitLengthValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCornersValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtTeamName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtCarModel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtOnlineLeaderboard() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgCircuitCountryFlag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgTrackMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgEventTrophy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgSinglePoster() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1568);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtEventStatus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1576);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtEventTimeOfDay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1584);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtAssistsLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtRealismLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UTextBlock(ptr_addr);
	}
	struct UScrollBox GetscrollLeaderboard() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UScrollBox(ptr_addr);
	}
	struct UButton GetbtnPreviousPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UButton(ptr_addr);
	}
	struct UButton GetbtnNextPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UButton(ptr_addr);
	}
	struct USpecialEventSinglePanel GetPanel01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct USpecialEventSinglePanel(ptr_addr);
	}
	struct USpecialEventSinglePanel GetPanel02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct USpecialEventSinglePanel(ptr_addr);
	}
	struct USpecialEventSinglePanel GetPanel03() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct USpecialEventSinglePanel(ptr_addr);
	}
	struct USpecialEventSinglePanel GetPanel04() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct USpecialEventSinglePanel(ptr_addr);
	}
	struct UCanvasPanel GetEventsCanvas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetCanvasLeaderboard() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UBorder GetbrdSeasonAndID() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UBorder(ptr_addr);
	}
	struct UTextBlock GettxtSeason() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtId() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UTextBlock(ptr_addr);
	}
	struct TArray<struct USpecialEventSinglePanel> GetEventPanelList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct TArray<struct USpecialEventSinglePanel>(ptr_addr);
	}
	struct UHorizontalBox GethboxEvents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UHorizontalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStartSessionPanel
{
public:
	UStartSessionPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UTextBlock(ptr_addr);
	}
	struct FText Gettext() {
		return memory.read<struct FText>(m_addr + 1512);
	}

private:
	std::uint64_t m_addr = 0;
};


class USysPerformanceWidget
{
public:
	USysPerformanceWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtFPS() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtMS() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtPhy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtFmod() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtFmodOptional() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTeamSelectionColumnPanel
{
public:
	UTeamSelectionColumnPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<enum class ECarModelType, struct UTexture2D> GetCarImages() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct TMap<enum class ECarModelType, struct UTexture2D>(ptr_addr);
	}
	bool GetShowDrivers() {
		return memory.read<bool>(m_addr + 1584);
	}
	bool GetShowMPCarGroup() {
		return memory.read<bool>(m_addr + 1585);
	}
	struct UImage GetimgCarLogo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1592);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgTeamLogo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgLocked() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1616);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtCarName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtBrandName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtNumber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetBPEmptyPlate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtDriverName01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtDriverSurname01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtShortName01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgNationalityFlag01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UImage(ptr_addr);
	}
	struct UImage GetDriverPhoto01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1688);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GettxtDriverName02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtDriverSurname02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtShortName02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgNationalityFlag02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UImage(ptr_addr);
	}
	struct UImage GetDriverPhoto02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct UImage(ptr_addr);
	}
	struct UUserWidget GetDriverInfoPanel01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct UUserWidget(ptr_addr);
	}
	struct UUserWidget GetDriverInfoPanel02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UUserWidget(ptr_addr);
	}
	struct UWidget GetotherDriversBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct UWidget(ptr_addr);
	}
	struct UVerticalBox GetotherDriversList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct UVerticalBox(ptr_addr);
	}
	struct UGenericMappedLabel GetCarCup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct UGenericMappedLabel(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimeGraphPanel
{
public:
	UTimeGraphPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FGraphicArray> GetgraphData() {
		return memory.read<struct TArray<struct FGraphicArray>>(m_addr + 1504);
	}
	float GetT() {
		return memory.read<float>(m_addr + 1520);
	}
	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 1524);
	}
	struct FGraphSettings GetSettings() {
		return memory.read<struct FGraphSettings>(m_addr + 1532);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 1560);
	}
	float GettLast() {
		return memory.read<float>(m_addr + 1564);
	}
	float GetdTime() {
		return memory.read<float>(m_addr + 1568);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimeLeftWidget
{
public:
	UTimeLeftWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FLinearColor> GetFlagColors() {
		return memory.read<struct TArray<struct FLinearColor>>(m_addr + 1624);
	}
	struct UTextBlock GettxtRemainingTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GettxtInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UTextBlock(ptr_addr);
	}
	struct UBorder GetborderSessionStateIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UBorder(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimeTable
{
public:
	UTimeTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UScrollBox GetScrollTimes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UScrollBox(ptr_addr);
	}
	struct UTextBlock GettxtNoLaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UTextBlock(ptr_addr);
	}
	UTimeTableItem GetItemClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return UTimeTableItem(ptr_addr);
	}
	bool GetautoFocusAfterPopulate() {
		return memory.read<bool>(m_addr + 1600);
	}
	bool GetallowLapBreakdown() {
		return memory.read<bool>(m_addr + 1601);
	}
	bool GetshowingLapCount() {
		return memory.read<bool>(m_addr + 1602);
	}
	bool GetshowingLapTimes() {
		return memory.read<bool>(m_addr + 1603);
	}
	bool GetshowingCombinedLaps() {
		return memory.read<bool>(m_addr + 1604);
	}
	bool GetcontainsHandicaps() {
		return memory.read<bool>(m_addr + 1605);
	}
	bool GetbyTime() {
		return memory.read<bool>(m_addr + 1606);
	}
	struct TArray<enum class ECupCategory> GetAvailableCategories() {
		return memory.read<struct TArray<enum class ECupCategory>>(m_addr + 1608);
	}
	struct TArray<enum class ECarGroup> GetAvailableCarGroups() {
		return memory.read<struct TArray<enum class ECarGroup>>(m_addr + 1624);
	}
	struct TMap<enum class EBrandType, struct UTexture2D> GetBrandIconCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct TMap<enum class EBrandType, struct UTexture2D>(ptr_addr);
	}
	struct UTimeTableItem GetreturnToItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UTimeTableItem(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimeTableSectorTimeItem
{
public:
	UTimeTableSectorTimeItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GettxtValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetimgBgr() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USurfaceData
{
public:
	USurfaceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSurfaceDef> Getsurfaces() {
		return memory.read<struct TArray<struct FSurfaceDef>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTrackPhysicsDataCache
{
public:
	UTrackPhysicsDataCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetComment() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct TArray<char> GetData() {
		return memory.read<struct TArray<char>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATrackAvatar
{
public:
	ATrackAvatar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTrackName() {
		return memory.read<struct FString>(m_addr + 544);
	}
	struct FString GetConfigName() {
		return memory.read<struct FString>(m_addr + 560);
	}
	struct UTrackPhysicsDataCache GetPhysicsDataCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UTrackPhysicsDataCache(ptr_addr);
	}
	struct UCurveFloat GetReflectionBrightnessCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetReflBrightnessCloudDensity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetSunShadowBiasCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UCurveFloat(ptr_addr);
	}
	struct UTrackGenome GetGenome() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTrackGenome(ptr_addr);
	}
	struct TArray<struct USurfaceData> GetSurfaceData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct TArray<struct USurfaceData>(ptr_addr);
	}
	struct UTrackPeopleController GetTrackPeopleController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UTrackPeopleController(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetStartingLightsMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct FVector2D GetGreenFlagTriggerRange() {
		return memory.read<struct FVector2D>(m_addr + 680);
	}
	float GetFormationLapTrigger() {
		return memory.read<float>(m_addr + 688);
	}
	struct TArray<float> GetnormalizedSectorLimits() {
		return memory.read<struct TArray<float>>(m_addr + 696);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTrackIdentityPanel
{
public:
	UTrackIdentityPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 1504);
	}
	bool GetisTrackAvailable() {
		return memory.read<bool>(m_addr + 1512);
	}
	bool GetbIsToggled() {
		return memory.read<bool>(m_addr + 1513);
	}
	struct UImage GetimgLocked() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgUnavailable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgSelected() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTrackSelectionPanel
{
public:
	UTrackSelectionPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTVSessionTimeTableWidget
{
public:
	UTVSessionTimeTableWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTimeTable GetSessionTimeTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UTimeTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTyreTemps01ItemWidget
{
public:
	UTyreTemps01ItemWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetidealPressureDry() {
		return memory.read<float>(m_addr + 608);
	}
	float GetidealPressureWet() {
		return memory.read<float>(m_addr + 612);
	}
	float GetminPressureDelta() {
		return memory.read<float>(m_addr + 616);
	}
	float GetmaxPressureDelta() {
		return memory.read<float>(m_addr + 620);
	}
	float GetmaxScaleOfMiddleBar() {
		return memory.read<float>(m_addr + 624);
	}
	float GetminScaleOfMiddleBar() {
		return memory.read<float>(m_addr + 628);
	}
	struct UBorder GetborderLeftTyre() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderCenterTyre() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderRightTyre() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderBrakeTemp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetborderBrakeWear() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UBorder(ptr_addr);
	}
	struct UImage GetimgLeftCore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgCenterCore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UImage GetimgRightCore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct FLinearColor GetcolorCold() {
		return memory.read<struct FLinearColor>(m_addr + 696);
	}
	struct FLinearColor GetcolorOperatingWindow() {
		return memory.read<struct FLinearColor>(m_addr + 712);
	}
	struct FLinearColor GetcolorHot() {
		return memory.read<struct FLinearColor>(m_addr + 728);
	}

private:
	std::uint64_t m_addr = 0;
};


class AUltraDynamicSky
{
public:
	AUltraDynamicSky(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ADirectionalLight GetSunLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct ADirectionalLight(ptr_addr);
	}
	struct ADirectionalLight GetMoonLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct ADirectionalLight(ptr_addr);
	}
	struct AExponentialHeightFog GetExponentialHeightFog() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct AExponentialHeightFog(ptr_addr);
	}
	struct ASkyLight GetSkyLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct ASkyLight(ptr_addr);
	}
	struct APostProcessVolume GetPostProcessVolume() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct APostProcessVolume(ptr_addr);
	}
	bool GetbRefreshSettings() {
		return memory.read<bool>(m_addr + 584);
	}
	float GetTimeOfDay() {
		return memory.read<float>(m_addr + 588);
	}
	float GetSaturation() {
		return memory.read<float>(m_addr + 592);
	}
	float GetOverallIntensity() {
		return memory.read<float>(m_addr + 596);
	}
	float GetNightBrightness() {
		return memory.read<float>(m_addr + 600);
	}
	int32_t GetColorScheme() {
		return memory.read<int32_t>(m_addr + 604);
	}
	bool GetTimeFromGameState() {
		return memory.read<bool>(m_addr + 608);
	}
	float GetDayLength() {
		return memory.read<float>(m_addr + 612);
	}
	bool GetAnimateDayNightCycle() {
		return memory.read<bool>(m_addr + 616);
	}
	bool GetSimulateCloudDensityChanges() {
		return memory.read<bool>(m_addr + 617);
	}
	float GetCloudDensityShiftFrequencyMin() {
		return memory.read<float>(m_addr + 620);
	}
	float GetCloudDensityShiftFrequencyMax() {
		return memory.read<float>(m_addr + 624);
	}
	float GetCloudDensityChangeSmoothing() {
		return memory.read<float>(m_addr + 628);
	}
	bool GetSimulateMoonPhaseChanges() {
		return memory.read<bool>(m_addr + 632);
	}
	float GetCloudSpeed() {
		return memory.read<float>(m_addr + 636);
	}
	float GetCloudDensity() {
		return memory.read<float>(m_addr + 640);
	}
	float GetCloudWispsOpacity() {
		return memory.read<float>(m_addr + 644);
	}
	float GetCloudPhase() {
		return memory.read<float>(m_addr + 648);
	}
	float GetCloudOpacity() {
		return memory.read<float>(m_addr + 652);
	}
	float GetSunLightingIntensity() {
		return memory.read<float>(m_addr + 656);
	}
	bool GetbUseCloudShadows() {
		return memory.read<bool>(m_addr + 660);
	}
	float GetCloudShadowsScale() {
		return memory.read<float>(m_addr + 664);
	}
	float GetCloudShadowsIntensity() {
		return memory.read<float>(m_addr + 668);
	}
	struct UTexture GetCloudsBaseTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UTexture(ptr_addr);
	}
	float GetCloudTiling() {
		return memory.read<float>(m_addr + 680);
	}
	float GetCloudDirection() {
		return memory.read<float>(m_addr + 684);
	}
	bool GetbOneCloudLayer() {
		return memory.read<bool>(m_addr + 688);
	}
	float GetCloudHeight1() {
		return memory.read<float>(m_addr + 692);
	}
	float GetCloudHeight2() {
		return memory.read<float>(m_addr + 696);
	}
	float GetSunAngle() {
		return memory.read<float>(m_addr + 700);
	}
	float GetSunBrightness() {
		return memory.read<float>(m_addr + 704);
	}
	float GetSunHighlightRadius() {
		return memory.read<float>(m_addr + 708);
	}
	struct FRotator GetSunRotation() {
		return memory.read<struct FRotator>(m_addr + 712);
	}
	float GetSunRadius() {
		return memory.read<float>(m_addr + 724);
	}
	bool GetbManuallySelectSunColor() {
		return memory.read<bool>(m_addr + 728);
	}
	bool GetbAutomaticallySetSunLightRotation() {
		return memory.read<bool>(m_addr + 729);
	}
	float GetSunInclination() {
		return memory.read<float>(m_addr + 732);
	}
	float GetSunLightIntensity() {
		return memory.read<float>(m_addr + 736);
	}
	struct UCurveFloat GetSkyAroundSun() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UCurveFloat(ptr_addr);
	}
	bool GetbAutomaticallySetAdvancedSettingsUsingTimeOfDay() {
		return memory.read<bool>(m_addr + 752);
	}
	float GetStarsVisibility() {
		return memory.read<float>(m_addr + 756);
	}
	float GetMoonPosition() {
		return memory.read<float>(m_addr + 760);
	}
	struct FLinearColor GetHorizonBaseColor() {
		return memory.read<struct FLinearColor>(m_addr + 764);
	}
	struct FLinearColor GetZenithBaseColor() {
		return memory.read<struct FLinearColor>(m_addr + 780);
	}
	struct FLinearColor GetCloudLightColor() {
		return memory.read<struct FLinearColor>(m_addr + 796);
	}
	struct FLinearColor GetCloudDarkColor() {
		return memory.read<struct FLinearColor>(m_addr + 812);
	}
	struct FLinearColor GetSunColor() {
		return memory.read<struct FLinearColor>(m_addr + 828);
	}
	float GetCloudShineIntensity() {
		return memory.read<float>(m_addr + 844);
	}
	struct FLinearColor GetSunLightColor() {
		return memory.read<struct FLinearColor>(m_addr + 848);
	}
	float GetAuroraIntensity() {
		return memory.read<float>(m_addr + 864);
	}
	float GetAuroraSpeed() {
		return memory.read<float>(m_addr + 868);
	}
	bool GetbUseAuroras() {
		return memory.read<bool>(m_addr + 872);
	}
	bool GetbRecaptureSkylightPeriodically() {
		return memory.read<bool>(m_addr + 873);
	}
	float GetSkyLightRecapturePeriod() {
		return memory.read<float>(m_addr + 876);
	}
	bool GetbUseFastSkylight() {
		return memory.read<bool>(m_addr + 880);
	}
	float GetMoonScale() {
		return memory.read<float>(m_addr + 884);
	}
	float GetMoonInclination() {
		return memory.read<float>(m_addr + 888);
	}
	float GetMoonPhase() {
		return memory.read<float>(m_addr + 892);
	}
	float GetMoonIntensity() {
		return memory.read<float>(m_addr + 896);
	}
	struct FLinearColor GetMoonColor() {
		return memory.read<struct FLinearColor>(m_addr + 900);
	}
	float GetStarsIntensity() {
		return memory.read<float>(m_addr + 916);
	}
	struct FLinearColor GetStarsColor() {
		return memory.read<struct FLinearColor>(m_addr + 920);
	}
	float GetMoonOrbitOffset() {
		return memory.read<float>(m_addr + 936);
	}
	bool GetbAutomaticallySetMoonLightRotation() {
		return memory.read<bool>(m_addr + 940);
	}
	float GetMoonlightIntensity() {
		return memory.read<float>(m_addr + 944);
	}
	float GetStarsSpeed() {
		return memory.read<float>(m_addr + 948);
	}
	float GetMoonRotation() {
		return memory.read<float>(m_addr + 952);
	}
	struct UTexture2D GetCustomMoonTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UTexture2D(ptr_addr);
	}
	bool GetbUseCustomMoonTexture() {
		return memory.read<bool>(m_addr + 968);
	}
	float GetMoonGlowIntensity() {
		return memory.read<float>(m_addr + 972);
	}
	struct UMaterialInstanceDynamic GetUDMmat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct TArray<struct UCurveLinearColor> GetHorizonBaseColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct TArray<struct UCurveLinearColor>(ptr_addr);
	}
	struct TArray<struct UCurveLinearColor> GetZenithBaseColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct TArray<struct UCurveLinearColor>(ptr_addr);
	}
	struct TArray<struct UCurveLinearColor> GetCloudLightColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct TArray<struct UCurveLinearColor>(ptr_addr);
	}
	struct TArray<struct UCurveLinearColor> GetCloudDarkColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct TArray<struct UCurveLinearColor>(ptr_addr);
	}
	struct TArray<struct UCurveLinearColor> GetSunColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct TArray<struct UCurveLinearColor>(ptr_addr);
	}
	struct UCurveFloat GetShineIntensityCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveLinearColor GetSunCloudyColorCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UCurveLinearColor(ptr_addr);
	}
	struct UCurveFloat GetStarsIntensityCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetMoonPositionCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UCurveFloat(ptr_addr);
	}
	float GetCloudDensityTarget() {
		return memory.read<float>(m_addr + 1096);
	}
	float GetShineVariation() {
		return memory.read<float>(m_addr + 1100);
	}
	struct UCurveFloat GetSunHighlightRadiusCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UCurveFloat(ptr_addr);
	}
	bool GetbFirstDay() {
		return memory.read<bool>(m_addr + 1112);
	}
	struct UMaterialInstanceDynamic GetCloudShadowsMID() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetSunYaw() {
		return memory.read<float>(m_addr + 1128);
	}
	struct UCurveFloat GetNightFilterCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetDirectionalIntensityCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UCurveFloat(ptr_addr);
	}
	struct TArray<struct UCurveLinearColor> GetSkylightCurve() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct TArray<struct UCurveLinearColor>(ptr_addr);
	}
	struct UCurveFloat GetMinBrightness() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetBloomIntensity() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetExposureValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1184);
		return struct UCurveFloat(ptr_addr);
	}
	bool GetbIsSunUp() {
		return memory.read<bool>(m_addr + 1192);
	}
	struct UCurveFloat GetCloudyExposureCompensation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetExposureCompensationAngle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat Gethaze() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetAzimuth() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1224);
		return struct UCurveFloat(ptr_addr);
	}
	struct UCurveFloat GetElevation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1232);
		return struct UCurveFloat(ptr_addr);
	}
	struct UMaterial GetCloudShadowsMaterialRef() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UMaterial(ptr_addr);
	}
	struct UMaterialInstanceConstant GetAurorasAndCloudLayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UMaterialInstanceConstant(ptr_addr);
	}
	struct UMaterialInstanceConstant GetNoAurorasAndCloudLayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UMaterialInstanceConstant(ptr_addr);
	}
	struct UMaterial GetAurorasAndNoCloudLayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UMaterial(ptr_addr);
	}
	struct UMaterialInstanceConstant GetNoAurorasAndNoCloudLayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct UMaterialInstanceConstant(ptr_addr);
	}
	struct UMaterialParameterCollection GetMaterialParameterCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UMaterialParameterCollection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWearEditorPage
{
public:
	UWearEditorPage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UYesNoPopup
{
public:
	UYesNoPopup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextBlock GetMessageText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UTextBlock(ptr_addr);
	}
	struct UAcPanelBase GetyesButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UAcPanelBase(ptr_addr);
	}
	struct UAcPanelBase GetnoButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UAcPanelBase(ptr_addr);
	}
	enum class EYesNoPopupType GetpopupType() {
		return memory.read<enum class EYesNoPopupType>(m_addr + 1352);
	}

private:
	std::uint64_t m_addr = 0;
};


class AZoneAmbientSound
{
public:
	AZoneAmbientSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODAudioComponent GetAmbientSound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UFMODAudioComponent(ptr_addr);
	}
	struct USphereComponent GetOuterSphere() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct USphereComponent(ptr_addr);
	}
	struct USphereComponent GetInnerSphere() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USphereComponent(ptr_addr);
	}
	bool GetOnlyFocusedCar() {
		return memory.read<bool>(m_addr + 568);
	}
	bool GetSpeedUpdate() {
		return memory.read<bool>(m_addr + 569);
	}
	bool GetUseFading() {
		return memory.read<bool>(m_addr + 570);
	}

private:
	std::uint64_t m_addr = 0;
};


