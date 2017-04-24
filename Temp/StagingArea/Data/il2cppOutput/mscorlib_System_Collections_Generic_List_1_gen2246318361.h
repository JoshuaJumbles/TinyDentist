#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GumController[]
struct GumControllerU5BU5D_t479655680;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GumController>
struct  List_1_t2246318361  : public Il2CppObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GumControllerU5BU5D_t479655680* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2246318361, ____items_1)); }
	inline GumControllerU5BU5D_t479655680* get__items_1() const { return ____items_1; }
	inline GumControllerU5BU5D_t479655680** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GumControllerU5BU5D_t479655680* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier(&____items_1, value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2246318361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2246318361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2246318361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GumControllerU5BU5D_t479655680* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2246318361_StaticFields, ___EmptyArray_4)); }
	inline GumControllerU5BU5D_t479655680* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GumControllerU5BU5D_t479655680** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GumControllerU5BU5D_t479655680* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
