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

c_ptr_uint8_t bufferType;
atomic_int64 numPrivateObjects;
chpl___EndCount_atomic_int64_int64_t _remoteEndCountType;
chpl_bool chpl__testParOn;
int32_t chpl_nodeID_t;
int32_t chpl_sublocID_t;
locale rootLocale;
locale origRootLocale;
locale dummyLocale;
int64_t numLocales;
string _str_literal_1760;
string _str_literal_2711;
string _str_literal_2713;
string _str_literal_906;
string _str_literal_908;
string _str_literal_1752;
string _str_literal_32;
string _str_literal_1754;
string _str_literal_1749;
string _str_literal_806;
string _str_literal_1483;
string _str_literal_859;
string _str_literal_2329;
string _str_literal_2331;
string _str_literal_1485;
string _str_literal_863;
string _str_literal_510;
string _str_literal_520;
string _str_literal_1491;
string _str_literal_537;
string _str_literal_541;
string _str_literal_1497;
string _str_literal_306;
string _str_literal_1500;
string _str_literal_311;
string _str_literal_1520;
string _str_literal_318;
string _str_literal_1548;
string _str_literal_1551;
string _str_literal_339;
string _str_literal_341;
string _str_literal_987;
string _str_literal_680;
string _str_literal_694;
string _str_literal_2657;
string _str_literal_2668;
string _str_literal_367;
string _str_literal_375;
string _str_literal_387;
string _str_literal_1890;
string _str_literal_1899;
string _str_literal_1906;
string _str_literal_1908;
string _str_literal_1910;
string _str_literal_1912;
string _str_literal_1968;
string _str_literal_1970;
string _str_literal_1988;
string _str_literal_2015;
string _str_literal_2022;
string _str_literal_2058;
string _str_literal_2061;
string _str_literal_2063;
string _str_literal_2065;
string _str_literal_2067;
string _str_literal_2069;
string _str_literal_2109;
string _str_literal_2111;
int64_t numThreadsPerLocale;
int64_t chpl_table_index_type;
int64_t dataParTasksPerLocale;
chpl_bool dataParIgnoreRunningTasks;
int64_t dataParMinGranularity;
DefaultDist defaultDist;
chpl_bool doneCreatingLocales;
DefaultRectangularDom_1_int64_t_F chpl_emptyLocaleSpace;
DefaultRectangularArr_locale_1_int64_t_F chpl_emptyLocales;
chpl_localeTreeRecord chpl_localeTree;
DefaultRectangularArr_locale_1_int64_t_F Locales;
DefaultRectangularDom_1_int64_t_F LocaleSpace;
chpl_bool memTrack;
chpl_bool memStats;
chpl_bool memLeaksByType;
chpl_bool memLeaks;
uint64_t memMax;
uint64_t memThreshold;
string memLog;
string memLeaksLog;
string memLeaksByDesc;
uint64_t cMemMax;
uint64_t cMemThreshold;
chpl_bool printModuleInitOrder;
int32_t moduleInitLevel;
uint8_t uint_A;
uint8_t uint_Z;
uint8_t uint_a;
uint8_t uint_z;
uint8_t uint_0;
uint8_t uint_9;
uint8_t uint_space;
uint8_t uint_tab;
uint8_t uint_newline;
uint8_t uint_return;
chpl_bool chpl__init_ChapelStringLiterals_p;
chpl_bool chpl__init_DSIUtil_p;
chpl_bool chpl__init_SysCTypes_p;
chpl_bool chpl__init_hello_p;
chpl_bool chpl__init_AtomicsCommon_p;
chpl_bool chpl__init_ChapelDistribution_p;
chpl_bool chpl__init_ChapelDynDispHack_p;
chpl_bool chpl__init_MemConsistency_p;
chpl_bool chpl__init_StringCasts_p;
chpl_bool chpl__init_CPtr_p;
chpl_bool chpl__init_ChapelNumLocales_p;
chpl_bool chpl__init_ChapelTaskTable_p;
chpl_bool chpl__init_DefaultAssociative_p;
chpl_bool chpl__init_DefaultRectangular_p;
chpl_bool chpl__init_MemTracking_p;
chpl_bool chpl__init_ChapelBase_p;
chpl_bool chpl__init_ChapelStandard_p;
chpl_bool chpl__init_ChapelUtil_p;
chpl_bool chpl__init_LocaleTree_p;
chpl_bool chpl__init_List_p;
chpl_bool chpl__init_ChapelThreads_p;
chpl_bool chpl__init_LocaleModel_p;
chpl_bool chpl__init_PrintModuleInitOrder_p;
chpl_bool chpl__init_Assert_p;
chpl_bool chpl__init_BaseStringType_p;
chpl_bool chpl__init_Error_p;
chpl_bool chpl__init_ChapelTuple_p;
chpl_bool chpl__init_LocalesArray_p;
chpl_bool chpl__init_CString_p;
chpl_bool chpl__init_SysBasic_p;
chpl_bool chpl__init_Sys_p;
chpl_bool chpl__init_String_p;
chpl_bool chpl__init_ChapelLocale_p;
chpl_bool chpl__init_Atomics_p;
chpl_bool chpl__init_ChapelRange_p;
chpl_bool chpl__init_ChapelArray_p;
chpl_bool chpl__init_Sort_p;
chpl_bool chpl__init_CommDiagnostics_p;
chpl_bool chpl__init_ChapelIO_p;
chpl_bool chpl__init_Regexp_p;
chpl_bool chpl__init_IO_p;
int32_t IOHINT_NONE_chpl;
int32_t IOHINT_RANDOM_chpl;
int32_t IOHINT_SEQUENTIAL_chpl;
int32_t IOHINT_CACHED_chpl;
int32_t IOHINT_PARALLEL_chpl;
string _r_chpl;
string _rw_chpl;
string _cw_chpl;
string _cwr_chpl;
_tuple_6_star_string _arg_to_proto_names_chpl;
channel_F_dynamic_T_chpl stdin_chpl;
channel_T_dynamic_T_chpl stdout_chpl;
channel_T_dynamic_T_chpl stderr_chpl;
DefaultComparator_chpl defaultComparator_chpl;
ReverseComparator_DefaultComparator_chpl reverseComparator_chpl;
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
