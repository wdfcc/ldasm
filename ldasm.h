#pragma once
#include<stdint.h>
extern "C"
{
	int ldasm(uint8_t *code, uint32_t length, int32_t mode);
}
