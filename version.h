#pragma once

/* #undef OPTIMIZE_MEMORY */
const bool ENABLED_OPTIMIZE_MEMORY = 
#ifdef OPTIMIZE_MEMORY
	true;
#else
	false;
#endif

/* #undef USE_VECTOR */

/* #undef USE_LIST */

#ifdef USE_VECTOR
	#ifdef USE_LIST
		static_assert(false, "Denied using both USE_VECTOR and USE_LIST (please select one)")
	#endif
#else
	#ifndef USE_LIST
		#define USE_LIST ON
	#endif
#endif
