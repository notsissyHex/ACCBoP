#pragma once 
#include <BP_RaceGameMode_Structs.h>
 
 
 
class ABP_RaceGameMode_C
{
public:
	ABP_RaceGameMode_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 4320);
	}
	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 4328);
		return struct USceneComponent(ptr_addr);
	}
	struct AUltra_Dynamic_Sky_BP_C GetSky() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 4336);
		return struct AUltra_Dynamic_Sky_BP_C(ptr_addr);
	}
	struct APawn GetTempCar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 4344);
		return struct APawn(ptr_addr);
	}
	struct ADirectionalLight GetDirectionLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 4352);
		return struct ADirectionalLight(ptr_addr);
	}
	int32_t GetDebugIndex() {
		return memory.read<int32_t>(m_addr + 4360);
	}
	struct UBP_GameInstance_C GetInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 4368);
		return struct UBP_GameInstance_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


