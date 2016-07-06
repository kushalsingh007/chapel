/*** Compilation Info ***/


#include <stdio.h>

#include "chpltypes.h"
const char* chpl_compileCommand = "chpl --savec=wip hello.chpl ";
const char* chpl_compileVersion = "1.13.1.aca8c33";
const char* CHPL_HOME = "/Users/kushal/work/chapel";
const int CHPL_STACK_CHECKS = 1;
const int CHPL_CACHE_REMOTE = 0;
const char* CHPL_ATOMICS = "intrinsics";
const char* CHPL_AUX_FILESYS = "none";
const char* CHPL_COMM = "none";
const char* CHPL_COMM_SUBSTRATE = "none";
const char* CHPL_GASNET_SEGMENT = "none";
const char* CHPL_GMP = "gmp";
const char* CHPL_HOST_COMPILER = "clang";
const char* CHPL_HOST_PLATFORM = "darwin";
const char* CHPL_HWLOC = "hwloc";
const char* CHPL_LAUNCHER = "none";
const char* CHPL_LLVM = "none";
const char* CHPL_LOCALE_MODEL = "flat";
const char* CHPL_MAKE = "make";
const char* CHPL_MEM = "jemalloc";
const char* CHPL_NETWORK_ATOMICS = "none";
const char* CHPL_REGEXP = "re2";
const char* CHPL_TARGET_ARCH = "native";
const char* CHPL_TARGET_COMPILER = "clang";
const char* CHPL_TARGET_PLATFORM = "darwin";
const char* CHPL_TASKS = "qthreads";
const char* CHPL_TIMERS = "generic";
const char* CHPL_UNWIND = "none";
const char* CHPL_WIDE_POINTERS = "struct";

void chpl_program_about(void);

void chpl_program_about() {
  printf("%s", "Compilation command: chpl --savec=wip hello.chpl \n");
  printf("%s", "Chapel compiler version: 1.13.1.aca8c33\n");
  printf("Chapel environment:\n");
  printf("%s", "  CHPL_HOME: /Users/kushal/work/chapel\n");
  printf("%s", "  CHPL_ATOMICS: intrinsics\n");
  printf("%s", "  CHPL_AUX_FILESYS: none\n");
  printf("%s", "  CHPL_COMM: none\n");
  printf("%s", "  CHPL_COMM_SUBSTRATE: none\n");
  printf("%s", "  CHPL_GASNET_SEGMENT: none\n");
  printf("%s", "  CHPL_GMP: gmp\n");
  printf("%s", "  CHPL_HOST_COMPILER: clang\n");
  printf("%s", "  CHPL_HOST_PLATFORM: darwin\n");
  printf("%s", "  CHPL_HWLOC: hwloc\n");
  printf("%s", "  CHPL_LAUNCHER: none\n");
  printf("%s", "  CHPL_LLVM: none\n");
  printf("%s", "  CHPL_LOCALE_MODEL: flat\n");
  printf("%s", "  CHPL_MAKE: make\n");
  printf("%s", "  CHPL_MEM: jemalloc\n");
  printf("%s", "  CHPL_NETWORK_ATOMICS: none\n");
  printf("%s", "  CHPL_REGEXP: re2\n");
  printf("%s", "  CHPL_TARGET_ARCH: native\n");
  printf("%s", "  CHPL_TARGET_COMPILER: clang\n");
  printf("%s", "  CHPL_TARGET_PLATFORM: darwin\n");
  printf("%s", "  CHPL_TASKS: qthreads\n");
  printf("%s", "  CHPL_TIMERS: generic\n");
  printf("%s", "  CHPL_UNWIND: none\n");
  printf("%s", "  CHPL_WIDE_POINTERS: struct\n");
}
/*** Filename Lookup Table ***/

c_string chpl_filenameTable[] = {
  "",
  "<internal>",
  "/Users/kushal/work/chapel/modules/internal/ChapelBase.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelStandard.chpl",
  "/Users/kushal/work/chapel/modules/internal/PrintModuleInitOrder.chpl",
  "/Users/kushal/work/chapel/modules/internal/startInitCommDiags.chpl",
  "/Users/kushal/work/chapel/modules/internal/CPtr.chpl",
  "/Users/kushal/work/chapel/modules/internal/CString.chpl",
  "/Users/kushal/work/chapel/modules/internal/String.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelEnv.chpl",
  "/Users/kushal/work/chapel/modules/internal/MemConsistency.chpl",
  "/Users/kushal/work/chapel/modules/internal/Atomics.chpl",
  "/Users/kushal/work/chapel/modules/internal/NetworkAtomics.chpl",
  "/Users/kushal/work/chapel/modules/internal/NetworkAtomicTypes.chpl",
  "/Users/kushal/work/chapel/modules/internal/AtomicsCommon.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelIteratorSupport.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelThreads.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelThreadsInternal.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelTasksInternal.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelTuple.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelRange.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelReduce.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelSyncvar.chpl",
  "/Users/kushal/work/chapel/modules/internal/localeModels/flat/LocaleModel.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelLocale.chpl",
  "/Users/kushal/work/chapel/modules/internal/DefaultRectangular.chpl",
  "/Users/kushal/work/chapel/modules/internal/LocalesArray.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelArray.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelDistribution.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelIO.chpl",
  "/Users/kushal/work/chapel/modules/internal/LocaleTree.chpl",
  "/Users/kushal/work/chapel/modules/internal/DefaultAssociative.chpl",
  "/Users/kushal/work/chapel/modules/internal/DefaultSparse.chpl",
  "/Users/kushal/work/chapel/modules/internal/DefaultOpaque.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelTaskID.chpl",
  "/Users/kushal/work/chapel/modules/internal/tasktable/off/ChapelTaskTable.chpl",
  "/Users/kushal/work/chapel/modules/internal/MemTracking.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelUtil.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelDynDispHack.chpl",
  "/Users/kushal/work/chapel/modules/internal/stopInitCommDiags.chpl",
  "/Users/kushal/work/chapel/modules/internal/StringCasts.chpl",
  "/Users/kushal/work/chapel/modules/internal/ChapelNumLocales.chpl",
  "hello.chpl",
  "/Users/kushal/work/chapel/modules/standard/Assert.chpl",
  "/Users/kushal/work/chapel/modules/standard/Types.chpl",
  "/Users/kushal/work/chapel/modules/standard/Math.chpl",
  "/Users/kushal/work/chapel/modules/standard/CommDiagnostics.chpl",
  "/Users/kushal/work/chapel/modules/standard/gen/darwin-clang/SysCTypes.chpl",
  "/Users/kushal/work/chapel/modules/standard/Sys.chpl",
  "/Users/kushal/work/chapel/modules/dists/DSIUtil.chpl",
  "/Users/kushal/work/chapel/modules/standard/List.chpl",
  "/Users/kushal/work/chapel/modules/standard/SysBasic.chpl",
  "/Users/kushal/work/chapel/modules/standard/IO.chpl",
  "/Users/kushal/work/chapel/modules/packages/Sort.chpl",
  "/Users/kushal/work/chapel/modules/packages/Search.chpl",
  "/Users/kushal/work/chapel/modules/standard/Error.chpl",
  "/Users/kushal/work/chapel/modules/standard/Regexp.chpl",
  "/Users/kushal/work/chapel/modules/standard/Reflection.chpl"
};
const int32_t chpl_filenameTableSize = 58;
/*** Unwind symbol tables ***/


c_string chpl_funSymTable[] = {
  "", "" };


int chpl_filenumSymTable[] = {
  0, 0};
const int32_t chpl_sizeSymTable = 0;
