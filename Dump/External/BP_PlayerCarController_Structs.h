#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_PlayerCarController
{
public:
	FExecuteUbergraph_BP_PlayerCarController(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 5);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct APlayerController(ptr_addr);
	}
	struct APawn GetCallFunc_K2_GetPawn_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct APawn(ptr_addr);
	}
	struct ACarAvatar GetK2Node_DynamicCast_AsCar_Avatar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct ACarAvatar(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 32);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct APlayerController(ptr_addr);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct APlayerController(ptr_addr);
	}
	struct APlayerCameraManager GetCallFunc_GetPlayerCameraManager_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct APlayerCameraManager(ptr_addr);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct APlayerController(ptr_addr);
	}
	struct AACPlayerCameraManager GetK2Node_DynamicCast_AsACPlayer_Camera_Manager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct AACPlayerCameraManager(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess_2() {
		return memory.read<bool>(m_addr + 80);
	}
	struct UWBP_CinemaHud_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UWBP_CinemaHud_C(ptr_addr);
	}
	struct ACarAvatar GetCallFunc_GetFocusedCar_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct ACarAvatar(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 104);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct APlayerController(ptr_addr);
	}
	struct UWBP_CinemaHud_C GetCallFunc_Create_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UWBP_CinemaHud_C(ptr_addr);
	}
	bool GetCallFunc_isCurrentF7Camera_ReturnValue() {
		return memory.read<bool>(m_addr + 128);
	}
	bool GetCallFunc_IsValid_ReturnValue_2() {
		return memory.read<bool>(m_addr + 129);
	}
	bool GetCallFunc_IsInViewport_ReturnValue() {
		return memory.read<bool>(m_addr + 130);
	}

private:
	std::uint64_t m_addr = 0;
};