#include "qemu-common.h"
#include "emuarch_init.h"
#include "qapi/qmp/qerror.h"

CpuDefinitionInfoList *arch_query_cpu_definitions(Error **errp)
{
    error_set(errp, QERR_UNSUPPORTED);
    return NULL;
}
