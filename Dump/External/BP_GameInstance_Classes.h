#pragma once 
#include <BP_GameInstance_Structs.h>
 
 
 
class UBP_GameInstance_C
{
public:
	UBP_GameInstance_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 3472);
	}
	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 3480);
	}

private:
	std::uint64_t m_addr = 0;
};


