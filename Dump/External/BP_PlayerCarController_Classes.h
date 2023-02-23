#pragma once 
#include <BP_PlayerCarController_Structs.h>
 
 
 
class ABP_PlayerCarController_C
{
public:
	ABP_PlayerCarController_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1688);
	}
	struct UObject GetPhysicsHUD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1696);
		return struct UObject(ptr_addr);
	}
	struct UWBP_CinemaHud_C GetCinemaHUD() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1704);
		return struct UWBP_CinemaHud_C(ptr_addr);
	}
	struct UWBP_Replay_C GetReplayHUD_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1712);
		return struct UWBP_Replay_C(ptr_addr);
	}
	struct UObject GetIngamepause() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct UObject(ptr_addr);
	}
	int32_t GetTelemetryHUDIndex() {
		return memory.read<int32_t>(m_addr + 1728);
	}

private:
	std::uint64_t m_addr = 0;
};


