#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VBScript
struct  VBScript_t2573314409  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject VBScript::VBButtonObject
	GameObject_t1756533147 * ___VBButtonObject_2;
	// UnityEngine.GameObject VBScript::zombie
	GameObject_t1756533147 * ___zombie_3;

public:
	inline static int32_t get_offset_of_VBButtonObject_2() { return static_cast<int32_t>(offsetof(VBScript_t2573314409, ___VBButtonObject_2)); }
	inline GameObject_t1756533147 * get_VBButtonObject_2() const { return ___VBButtonObject_2; }
	inline GameObject_t1756533147 ** get_address_of_VBButtonObject_2() { return &___VBButtonObject_2; }
	inline void set_VBButtonObject_2(GameObject_t1756533147 * value)
	{
		___VBButtonObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___VBButtonObject_2, value);
	}

	inline static int32_t get_offset_of_zombie_3() { return static_cast<int32_t>(offsetof(VBScript_t2573314409, ___zombie_3)); }
	inline GameObject_t1756533147 * get_zombie_3() const { return ___zombie_3; }
	inline GameObject_t1756533147 ** get_address_of_zombie_3() { return &___zombie_3; }
	inline void set_zombie_3(GameObject_t1756533147 * value)
	{
		___zombie_3 = value;
		Il2CppCodeGenWriteBarrier(&___zombie_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
