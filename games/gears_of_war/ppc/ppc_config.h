#pragma once
#ifndef PPC_CONFIG_H_INCLUDED
#define PPC_CONFIG_H_INCLUDED

#define PPC_CONFIG_CTR_AS_LOCAL
#define PPC_CONFIG_CR_AS_LOCAL

#define PPC_IMAGE_BASE 0x82000000ull
#define PPC_IMAGE_SIZE 0xCE0000ull
#define PPC_CODE_BASE 0x82170000ull
#define PPC_CODE_SIZE 0x987934ull

#ifdef PPC_INCLUDE_DETAIL
#include "ppc_detail.h"
#endif

#endif
