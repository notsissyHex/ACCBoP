#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FInpActEvt_Ctrl_Subtract_K2Node_InputKeyEvent_5
{
public:
	FInpActEvt_Ctrl_Subtract_K2Node_InputKeyEvent_5(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Ctrl_NumPadThree_K2Node_InputKeyEvent_2
{
public:
	FInpActEvt_Ctrl_NumPadThree_K2Node_InputKeyEvent_2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_BP_RaceGameMode
{
public:
	FExecuteUbergraph_BP_RaceGameMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_2() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_3() {
		return memory.read<bool>(m_addr + 6);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_4() {
		return memory.read<bool>(m_addr + 7);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_5() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_6() {
		return memory.read<bool>(m_addr + 9);
	}
	int32_t GetTemp_int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_7() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_8() {
		return memory.read<bool>(m_addr + 17);
	}
	struct TArray<struct AUltra_Dynamic_Sky_BP_C> GetCallFunc_GetAllActorsOfClass_OutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<struct AUltra_Dynamic_Sky_BP_C>(ptr_addr);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct APlayerController(ptr_addr);
	}
	struct AUltra_Dynamic_Sky_BP_C GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct AUltra_Dynamic_Sky_BP_C(ptr_addr);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct APlayerCameraManager GetCallFunc_GetPlayerCameraManager_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct APlayerCameraManager(ptr_addr);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_9() {
		return memory.read<bool>(m_addr + 72);
	}
	struct AACPlayerCameraManager GetK2Node_DynamicCast_AsACPlayer_Camera_Manager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct AACPlayerCameraManager(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 88);
	}
	struct ACarAvatar GetCallFunc_GetFocusedCar_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct ACarAvatar(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 104);
	}
	struct Aporsche_991_gt3_r_C GetK2Node_DynamicCast_AsPorsche_991_Gt_3_R() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct Aporsche_991_gt3_r_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess_2() {
		return memory.read<bool>(m_addr + 120);
	}
	float GetK2Node_Event_DeltaSeconds() {
		return memory.read<float>(m_addr + 124);
	}
	float GetCallFunc_GetScalarParameterValue_ReturnValue() {
		return memory.read<float>(m_addr + 128);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_10() {
		return memory.read<bool>(m_addr + 132);
	}
	float GetCallFunc_Add_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 136);
	}
	float GetCallFunc_FMin_ReturnValue() {
		return memory.read<float>(m_addr + 140);
	}
	float GetCallFunc_GetScalarParameterValue_ReturnValue_2() {
		return memory.read<float>(m_addr + 144);
	}
	struct FString GetCallFunc_Conv_FloatToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 152);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 168);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue() {
		return memory.read<struct FString>(m_addr + 176);
	}
	float GetCallFunc_FMax_ReturnValue() {
		return memory.read<float>(m_addr + 192);
	}
	struct FString GetCallFunc_Conv_FloatToString_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 200);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 216);
	}
	struct FKey GetK2Node_InputKeyEvent_Key() {
		return memory.read<struct FKey>(m_addr + 232);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_2() {
		return memory.read<struct FKey>(m_addr + 256);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_3() {
		return memory.read<struct FKey>(m_addr + 280);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_4() {
		return memory.read<struct FKey>(m_addr + 304);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_5() {
		return memory.read<struct FKey>(m_addr + 328);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_6() {
		return memory.read<struct FKey>(m_addr + 352);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_7() {
		return memory.read<struct FKey>(m_addr + 376);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_8() {
		return memory.read<struct FKey>(m_addr + 400);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_9() {
		return memory.read<struct FKey>(m_addr + 424);
	}
	bool GetCallFunc_IsUserDeveloper_ReturnValue_11() {
		return memory.read<bool>(m_addr + 448);
	}
	struct UGameInstance GetCallFunc_GetGameInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 456);
		return struct UGameInstance(ptr_addr);
	}
	int32_t GetTemp_int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 464);
	}
	struct UBP_GameInstance_C GetK2Node_DynamicCast_AsBP_Game_Instance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 472);
		return struct UBP_GameInstance_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess_3() {
		return memory.read<bool>(m_addr + 480);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 481);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 484);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_10() {
		return memory.read<struct FKey>(m_addr + 488);
	}
	struct FKey GetK2Node_InputKeyEvent_Key_11() {
		return memory.read<struct FKey>(m_addr + 512);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Ctrl_Add_K2Node_InputKeyEvent_6
{
public:
	FInpActEvt_Ctrl_Add_K2Node_InputKeyEvent_6(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveTick
{
public:
	FReceiveTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_1
{
public:
	FInpActEvt_Ctrl_NumPadTwo_K2Node_InputKeyEvent_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Ctrl_NumPadFive_K2Node_InputKeyEvent_3
{
public:
	FInpActEvt_Ctrl_NumPadFive_K2Node_InputKeyEvent_3(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Ctrl_NumPadSix_K2Node_InputKeyEvent_4
{
public:
	FInpActEvt_Ctrl_NumPadSix_K2Node_InputKeyEvent_4(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Alt_NumPadFive_K2Node_InputKeyEvent_7
{
public:
	FInpActEvt_Alt_NumPadFive_K2Node_InputKeyEvent_7(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Alt_NumPadSix_K2Node_InputKeyEvent_8
{
public:
	FInpActEvt_Alt_NumPadSix_K2Node_InputKeyEvent_8(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Alt_NumPadTwo_K2Node_InputKeyEvent_9
{
public:
	FInpActEvt_Alt_NumPadTwo_K2Node_InputKeyEvent_9(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Alt_NumPadThree_K2Node_InputKeyEvent_10
{
public:
	FInpActEvt_Alt_NumPadThree_K2Node_InputKeyEvent_10(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Shift_NumPadEight_K2Node_InputKeyEvent_11
{
public:
	FInpActEvt_Shift_NumPadEight_K2Node_InputKeyEvent_11(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStepTrackVariable
{
public:
	FStepTrackVariable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVarName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetIncrement() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FName GetCallFunc_Conv_StringToName_ReturnValue() {
		return memory.read<struct FName>(m_addr + 20);
	}
	struct FString GetCallFunc_Conv_NameToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct FString GetCallFunc_Conv_NameToString_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 80);
	}
	float GetCallFunc_GetScalarParameterValue_ReturnValue() {
		return memory.read<float>(m_addr + 96);
	}
	float GetCallFunc_GetScalarParameterValue_ReturnValue_2() {
		return memory.read<float>(m_addr + 100);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 104);
	}
	float GetCallFunc_Add_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 108);
	}
	float GetCallFunc_FMax_ReturnValue() {
		return memory.read<float>(m_addr + 112);
	}
	float GetCallFunc_FMin_ReturnValue() {
		return memory.read<float>(m_addr + 116);
	}
	struct FString GetCallFunc_Conv_FloatToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FString GetCallFunc_Conv_FloatToString_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 136);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_3() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_4() {
		return memory.read<struct FString>(m_addr + 168);
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
	bool GetCallFunc_CanPlay_Result() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};