
#pragma once
#include <cstddef>
#include <cstdint>
#include "../../BTLC_BASE/other_shared.h"
#include "../../Patch/MemoryMgr.h"
#include "../../Patch/calling.hpp"
#include "../../Patch/hooking.hpp"



// Forward some structures
struct RwRaster;

// Structure validation macros

#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")


//VALIDATE_SIZE(bool, 1);
//VALIDATE_SIZE(char, 1);
//VALIDATE_SIZE(short, 2);
//VALIDATE_SIZE(int, 4);
//VALIDATE_SIZE(float, 4);

// Basic types for structures describing
//typedef unsigned char bool;

#define __parent_class_vtable__ private:\
                                 virtual void __dummy_virtual_func(){}\
                             public:\

// Main Library
namespace plugin
{
    // Core functionalities
	namespace Core
	{
		// unsigned int GetVersion();
    };
    
    // Post processing effects
	namespace PostProcess
	{
		//PLUGIN_API void PostProcessCreate();
		//PLUGIN_API void PostProcessDestroy();           
		//PLUGIN_API RwRaster*& GetGameScreenRaster();
	};
};


// Tricks library -- Used internally for some dirty tricks
namespace plugin
{
	struct dummy_func_t { };                // Dummy func tag type
	static const dummy_func_t dummy;        // Dummy func tag object

											// Gets the virtual method table from the object @self
	inline void** GetVMT(const void* self)
	{
		return *(void***)(self);
	}

	// Gets the virtual method from @self in the table index @index 
	inline void* GetVMT(const void* self, size_t index)
	{
		return GetVMT(self)[index];
	}
}

using plugin::GetVMT;