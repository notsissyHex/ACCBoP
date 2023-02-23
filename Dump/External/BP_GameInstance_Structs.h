#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_GameInstance
{
public:
	FExecuteUbergraph_BP_GameInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetCallFunc_SDec_ReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}
	float GetCallFunc_RandomFloatInRange_ReturnValue() {
		return memory.read<float>(m_addr + 24);
	}
	struct FString GetCallFunc_Encrypt_ReturnValue() {
		return memory.read<struct FString>(m_addr + 32);
	}
	bool GetCallFunc_SCode_ReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}
	float GetCallFunc_RandomFloatInRange_ReturnValue_2() {
		return memory.read<float>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};