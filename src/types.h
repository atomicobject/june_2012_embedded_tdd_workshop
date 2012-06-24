#ifndef TYPES_H
#define TYPES_H

typedef enum _MemOpResult_T
{
	MEM_ERROR,
	MEM_OK
} MemOpResult_T;

typedef enum _Status_T
{
	NOT_OK,
	OK
} Status_T;

typedef struct _DataStruct_T
{
	unsigned char byte;
	Status_T status;
} DataStruct_T;

#endif /* TYPES_H */
