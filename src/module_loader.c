#include "module_loader.h"
#include "data_store.h"

Status_T ModuleLoader_LoadItem(unsigned int index)
{
  DataStruct_T * data = DataStore_RetrieveByIndex(index);
  MemOpResult_T result = DataLoader_Load(data);

  if (result == MEM_OK) return OK;
  return NOT_OK;
}
