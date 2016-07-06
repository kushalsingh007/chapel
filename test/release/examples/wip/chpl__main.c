/*** Class Type Identification Numbers ***/

const chpl__class_id chpl__cid_c_ptr_uint8_t = 0;
const chpl__class_id chpl__cid__ddata_locale = 1;
const chpl__class_id chpl__cid__ddata_localesSignal = 2;
const chpl__class_id chpl__cid__ddata_string = 3;
const chpl__class_id chpl__cid_chpl___EndCount_atomic_int64_int64_t = 4;
const chpl__class_id chpl__cid_BaseDist = 5;
const chpl__class_id chpl__cid_BaseDom = 6;
const chpl__class_id chpl__cid_BaseRectangularDom = 7;
const chpl__class_id chpl__cid_BaseArr = 8;
const chpl__class_id chpl__cid_locale = 9;
const chpl__class_id chpl__cid_AbstractLocaleModel = 10;
const chpl__class_id chpl__cid_AbstractRootLocale = 11;
const chpl__class_id chpl__cid_localesSignal = 12;
const chpl__class_id chpl__cid_DefaultDist = 13;
const chpl__class_id chpl__cid_DefaultRectangularDom_1_int64_t_F = 14;
const chpl__class_id chpl__cid_DefaultRectangularArr_locale_1_int64_t_F = 15;
const chpl__class_id chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F = 16;
const chpl__class_id chpl__cid_LocaleModel = 17;
const chpl__class_id chpl__cid_RootLocale = 18;
const chpl__class_id chpl__cid__class_localscoforall_fn = 19;
const chpl__class_id chpl__cid_object = 20;
const chpl__class_id chpl__cid_listNode_BaseArr_chpl = 21;
const chpl__class_id chpl__cid_listNode_BaseDom_chpl = 22;

/*** Classes ***/

typedef struct chpl__class_localscoforall_fn_s {
  localesBarrier _0_b;
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags;
  int64_t _2__yieldedIndex;
  chpl___EndCount_atomic_int64_int64_t _3_rvfDerefTmp;
  RootLocale _4_this;
} chpl__class_localscoforall_fn_object;

typedef struct chpl_object_s {
  chpl__class_id chpl__cid;
} chpl_object_object;

typedef struct chpl_chpl___EndCount_atomic_int64_int64_t_s /* : object */ {
  chpl_object_object super;
  atomic_int64 i;
  int64_t taskCnt;
  c_void_ptr taskList;
} chpl_chpl___EndCount_atomic_int64_int64_t_object;

typedef struct chpl_BaseDist_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _distCnt;
  list_BaseDom_chpl _doms;
  atomicflag _domsLock;
} chpl_BaseDist_object;

typedef struct chpl_BaseDom_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _domCnt;
  list_BaseArr_chpl _arrs;
  atomicflag _arrsLock;
} chpl_BaseDom_object;

typedef struct chpl_BaseArr_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _arrCnt;
  BaseArr _arrAlias;
} chpl_BaseArr_object;

typedef struct chpl_locale_s /* : object */ {
  chpl_object_object super;
  locale parent;
  int64_t nPUsLogAcc;
  int64_t nPUsLogAll;
  int64_t nPUsPhysAcc;
  int64_t nPUsPhysAll;
  int64_t maxTaskPar;
  uint64_t callStackSize;
  atomic_int64 runningTaskCounter;
} chpl_locale_object;

typedef struct chpl_localesSignal_s /* : object */ {
  chpl_object_object super;
  atomicflag s;
} chpl_localesSignal_object;

typedef struct chpl_listNode_BaseArr_chpl_s /* : object */ {
  chpl_object_object super_chpl;
  BaseArr data_chpl;
  listNode_BaseArr_chpl next_chpl;
} chpl_listNode_BaseArr_chpl_object;

typedef struct chpl_listNode_BaseDom_chpl_s /* : object */ {
  chpl_object_object super_chpl;
  BaseDom data_chpl;
  listNode_BaseDom_chpl next_chpl;
} chpl_listNode_BaseDom_chpl_object;

typedef struct chpl_BaseRectangularDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseRectangularDom_object;

typedef struct chpl_AbstractLocaleModel_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractLocaleModel_object;

typedef struct chpl_AbstractRootLocale_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractRootLocale_object;

typedef struct chpl_DefaultDist_s /* : BaseDist */ {
  chpl_BaseDist_object super;
} chpl_DefaultDist_object;

typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_locale data;
  _ddata_locale shiftedData;
  chpl_bool noinit_data;
  range_int64_t_bounded_F dataAllocRange;
} chpl_DefaultRectangularArr_locale_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_localesSignal data;
  _ddata_localesSignal shiftedData;
  chpl_bool noinit_data;
  range_int64_t_bounded_F dataAllocRange;
} chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s /* : BaseRectangularDom */ {
  chpl_BaseRectangularDom_object super;
  DefaultDist dist;
  _tuple_1_star_range_int64_t_bounded_F ranges;
} chpl_DefaultRectangularDom_1_int64_t_F_object;

typedef struct chpl_LocaleModel_s /* : AbstractLocaleModel */ {
  chpl_AbstractLocaleModel_object super;
  int64_t _node_id;
  string local_name;
} chpl_LocaleModel_object;

typedef struct chpl_RootLocale_s /* : AbstractRootLocale */ {
  chpl_AbstractRootLocale_object super;
  DefaultRectangularDom_1_int64_t_F myLocaleSpace;
  DefaultRectangularArr_locale_1_int64_t_F myLocales;
} chpl_RootLocale_object;

/*** Function Pointer Table ***/

chpl_fn_p chpl_ftable[] = {
  (chpl_fn_p)wrapcoforall_fn
};
/*** Virtual Method Table ***/

chpl_fn_p chpl_vmtable[] = {
  /* c_ptr_uint8_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_locale */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_localesSignal */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_string */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpl___EndCount_atomic_int64_int64_t */
  (chpl_fn_p)chpl__auto_destroy__EndCount,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDist */
  (chpl_fn_p)chpl__auto_destroy_BaseDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDom */
  (chpl_fn_p)chpl__auto_destroy_BaseDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseRectangularDom */
  (chpl_fn_p)chpl__auto_destroy_BaseRectangularDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseArr */
  (chpl_fn_p)chpl__auto_destroy_BaseArr,
  (chpl_fn_p)dsiGetBaseDom,
  (chpl_fn_p)dsiReallocate,
  (chpl_fn_p)dsiDestroyData,
  /* locale */
  (chpl_fn_p)chpl__auto_destroy_locale,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)NULL,
  /* AbstractLocaleModel */
  (chpl_fn_p)chpl__auto_destroy_AbstractLocaleModel,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)NULL,
  /* AbstractRootLocale */
  (chpl_fn_p)chpl__auto_destroy_AbstractRootLocale,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)localeIDtoLocale,
  /* localesSignal */
  (chpl_fn_p)chpl__auto_destroy_localesSignal,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultDist */
  (chpl_fn_p)chpl__auto_destroy_DefaultDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularDom_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularDom,
  (chpl_fn_p)dsiLinksDistribution2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularArr_locale_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr2,
  (chpl_fn_p)dsiGetBaseDom3,
  (chpl_fn_p)dsiReallocate2,
  (chpl_fn_p)dsiDestroyData2,
  /* DefaultRectangularArr_localesSignal_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr,
  (chpl_fn_p)dsiGetBaseDom2,
  (chpl_fn_p)dsiReallocate3,
  (chpl_fn_p)dsiDestroyData3,
  /* LocaleModel */
  (chpl_fn_p)chpl__auto_destroy_LocaleModel,
  (chpl_fn_p)getChild2,
  (chpl_fn_p)chpl_id2,
  (chpl_fn_p)NULL,
  /* RootLocale */
  (chpl_fn_p)chpl__auto_destroy_RootLocale,
  (chpl_fn_p)getChild3,
  (chpl_fn_p)chpl_id3,
  (chpl_fn_p)localeIDtoLocale2,
  /* _class_localscoforall_fn */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* object */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseArr_chpl */
  (chpl_fn_p)chpl__auto_destroy_listNode2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseDom_chpl */
  (chpl_fn_p)chpl__auto_destroy_listNode,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL
};
/*** Global Variables ***/

static c_ptr_uint8_t bufferType;
static atomic_int64 numPrivateObjects;
static chpl___EndCount_atomic_int64_int64_t _remoteEndCountType;
static chpl_bool chpl__testParOn;
static int32_t chpl_nodeID_t;
static int32_t chpl_sublocID_t;
static locale rootLocale;
static locale origRootLocale;
static locale dummyLocale;
static int64_t numLocales;
static string _str_literal_1760;
static string _str_literal_2711;
static string _str_literal_2713;
static string _str_literal_906;
static string _str_literal_908;
static string _str_literal_1752;
static string _str_literal_32;
static string _str_literal_1754;
static string _str_literal_1749;
static string _str_literal_806;
static string _str_literal_1483;
static string _str_literal_859;
static string _str_literal_2329;
static string _str_literal_2331;
static string _str_literal_1485;
static string _str_literal_863;
static string _str_literal_510;
static string _str_literal_520;
static string _str_literal_1491;
static string _str_literal_537;
static string _str_literal_541;
static string _str_literal_1497;
static string _str_literal_306;
static string _str_literal_1500;
static string _str_literal_311;
static string _str_literal_1520;
static string _str_literal_318;
static string _str_literal_1548;
static string _str_literal_1551;
static string _str_literal_339;
static string _str_literal_341;
static string _str_literal_987;
static string _str_literal_680;
static string _str_literal_694;
static string _str_literal_2657;
static string _str_literal_2668;
static string _str_literal_367;
static string _str_literal_375;
static string _str_literal_387;
static string _str_literal_1890;
static string _str_literal_1899;
static string _str_literal_1906;
static string _str_literal_1908;
static string _str_literal_1910;
static string _str_literal_1912;
static string _str_literal_1968;
static string _str_literal_1970;
static string _str_literal_1988;
static string _str_literal_2015;
static string _str_literal_2022;
static string _str_literal_2058;
static string _str_literal_2061;
static string _str_literal_2063;
static string _str_literal_2065;
static string _str_literal_2067;
static string _str_literal_2069;
static string _str_literal_2109;
static string _str_literal_2111;
static int64_t numThreadsPerLocale;
static int64_t chpl_table_index_type;
static int64_t dataParTasksPerLocale;
static chpl_bool dataParIgnoreRunningTasks;
static int64_t dataParMinGranularity;
static DefaultDist defaultDist;
static chpl_bool doneCreatingLocales;
static DefaultRectangularDom_1_int64_t_F chpl_emptyLocaleSpace;
static DefaultRectangularArr_locale_1_int64_t_F chpl_emptyLocales;
static chpl_localeTreeRecord chpl_localeTree;
static DefaultRectangularArr_locale_1_int64_t_F Locales;
static DefaultRectangularDom_1_int64_t_F LocaleSpace;
static chpl_bool memTrack;
static chpl_bool memStats;
static chpl_bool memLeaksByType;
static chpl_bool memLeaks;
static uint64_t memMax;
static uint64_t memThreshold;
static string memLog;
static string memLeaksLog;
static string memLeaksByDesc;
static uint64_t cMemMax;
static uint64_t cMemThreshold;
static chpl_bool printModuleInitOrder;
static int32_t moduleInitLevel;
static uint8_t uint_A;
static uint8_t uint_Z;
static uint8_t uint_a;
static uint8_t uint_z;
static uint8_t uint_0;
static uint8_t uint_9;
static uint8_t uint_space;
static uint8_t uint_tab;
static uint8_t uint_newline;
static uint8_t uint_return;
static chpl_bool chpl__init_ChapelStringLiterals_p;
static chpl_bool chpl__init_DSIUtil_p;
static chpl_bool chpl__init_SysCTypes_p;
static chpl_bool chpl__init_hello_p;
static chpl_bool chpl__init_AtomicsCommon_p;
static chpl_bool chpl__init_ChapelDistribution_p;
static chpl_bool chpl__init_ChapelDynDispHack_p;
static chpl_bool chpl__init_MemConsistency_p;
static chpl_bool chpl__init_StringCasts_p;
static chpl_bool chpl__init_CPtr_p;
static chpl_bool chpl__init_ChapelNumLocales_p;
static chpl_bool chpl__init_ChapelTaskTable_p;
static chpl_bool chpl__init_DefaultAssociative_p;
static chpl_bool chpl__init_DefaultRectangular_p;
static chpl_bool chpl__init_MemTracking_p;
static chpl_bool chpl__init_ChapelBase_p;
static chpl_bool chpl__init_ChapelStandard_p;
static chpl_bool chpl__init_ChapelUtil_p;
static chpl_bool chpl__init_LocaleTree_p;
static chpl_bool chpl__init_List_p;
static chpl_bool chpl__init_ChapelThreads_p;
static chpl_bool chpl__init_LocaleModel_p;
static chpl_bool chpl__init_PrintModuleInitOrder_p;
static chpl_bool chpl__init_Assert_p;
static chpl_bool chpl__init_BaseStringType_p;
static chpl_bool chpl__init_Error_p;
static chpl_bool chpl__init_ChapelTuple_p;
static chpl_bool chpl__init_LocalesArray_p;
static chpl_bool chpl__init_CString_p;
static chpl_bool chpl__init_SysBasic_p;
static chpl_bool chpl__init_Sys_p;
static chpl_bool chpl__init_String_p;
static chpl_bool chpl__init_ChapelLocale_p;
static chpl_bool chpl__init_Atomics_p;
static chpl_bool chpl__init_ChapelRange_p;
static chpl_bool chpl__init_ChapelArray_p;
static chpl_bool chpl__init_Sort_p;
static chpl_bool chpl__init_CommDiagnostics_p;
static chpl_bool chpl__init_ChapelIO_p;
static chpl_bool chpl__init_Regexp_p;
static chpl_bool chpl__init_IO_p;
static int32_t IOHINT_NONE_chpl;
static int32_t IOHINT_RANDOM_chpl;
static int32_t IOHINT_SEQUENTIAL_chpl;
static int32_t IOHINT_CACHED_chpl;
static int32_t IOHINT_PARALLEL_chpl;
static string _r_chpl;
static string _rw_chpl;
static string _cw_chpl;
static string _cwr_chpl;
static _tuple_6_star_string _arg_to_proto_names_chpl;
static channel_F_dynamic_T_chpl stdin_chpl;
static channel_T_dynamic_T_chpl stdout_chpl;
static channel_T_dynamic_T_chpl stderr_chpl;
static DefaultComparator_chpl defaultComparator_chpl;
static ReverseComparator_DefaultComparator_chpl reverseComparator_chpl;
const int chpl_numGlobalsOnHeap = 0;

ptr_wide_ptr_t chpl_globals_registry[1];
const int chpl_heterogeneous = 0;

const char* chpl_mem_descs[] = {
  "this",
  "c_ptr(uint(8))",
  "_EndCount(atomic_int64,int(64))",
  "locale",
  "_ic_chpl_direct_param_stride_range_iter",
  "_ic_chpl_direct_range_iter",
  "_ic_these__ref_string",
  "_ic_these__ref_range_int64_t_bounded_T",
  "_ic_these__ref_range_int64_t_bounded_F",
  "_ic_these__ref_range_int64_t_boundedLow_F",
  "listNode(BaseArr)",
  "listNode(BaseDom)",
  "DefaultDist",
  "DefaultRectangularDom(1,int(64),false)",
  "_ic_these__ref_list_BaseArr",
  "_ddata(locale)",
  "DefaultRectangularArr(locale,1,int(64),false)",
  "RootLocale",
  "_ic_these_DefaultRectangularDom_1_int64_t_F",
  "_ic_chpl_initOnLocales_AbstractRootLocale",
  "_ddata(localesSignal)",
  "DefaultRectangularArr(localesSignal,1,int(64),false)",
  "_ic_chpl_direct_pos_stride_range_iter",
  "_ic_these_DefaultRectangularArr_localesSignal_1_int64_t_F",
  "localesSignal",
  "LocaleModel",
  "_ddata(string)",
  "bundled args"
};
const int chpl_mem_numDescs = 28;

void* const chpl_private_broadcast_table[] = {
  &chpl_verbose_comm,
  &chpl_comm_diagnostics,
  &chpl_verbose_mem
};
#include "chpl-gen-includes.h"
