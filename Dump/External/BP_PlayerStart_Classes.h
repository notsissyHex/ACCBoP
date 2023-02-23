#pragma once 
#include <BP_PlayerStart_Structs.h>
 
 
 
class ABP_PlayerStart_C
{
public:
	ABP_PlayerStart_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent Getreference_pitStop_placement1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent Getreference_pitStop_placement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetMaterialMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetFloor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UStaticMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


