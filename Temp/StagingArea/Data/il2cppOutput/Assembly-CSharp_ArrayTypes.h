#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ToothBehaviour
struct ToothBehaviour_t3603608083;
// GumController
struct GumController_t2877197229;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_ToothBehaviour3603608083.h"
#include "AssemblyU2DCSharp_GumController2877197229.h"

#pragma once
// ToothBehaviour[]
struct ToothBehaviourU5BU5D_t4272184386  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ToothBehaviour_t3603608083 * m_Items[1];

public:
	inline ToothBehaviour_t3603608083 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ToothBehaviour_t3603608083 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ToothBehaviour_t3603608083 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ToothBehaviour_t3603608083 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ToothBehaviour_t3603608083 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ToothBehaviour_t3603608083 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// GumController[]
struct GumControllerU5BU5D_t479655680  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GumController_t2877197229 * m_Items[1];

public:
	inline GumController_t2877197229 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GumController_t2877197229 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GumController_t2877197229 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GumController_t2877197229 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GumController_t2877197229 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GumController_t2877197229 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
