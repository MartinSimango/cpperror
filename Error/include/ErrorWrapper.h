#pragma once
#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <cpperror/ErrorConstants.h>
#include <cpperror/ErrorCustom.h>

void DestroyError(void *err);

const char * GetErrorMessage(void *err);

int GetFuncReturnType(void *err);

int GetFuncReturnValue_Int(void *err);

bool GetFuncReturnValue_Bool(void *err);

const char * GetFuncReturnValue_String(void *err);

double GetFuncReturnValue_Double(void *err);

void* GetFuncReturnValue_Struct(void * err, enum StructTypes structTypeId);

#ifdef __cplusplus
}  // extern "C"
#endif
 