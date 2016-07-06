
#define CHPL_GEN_CODE

#include "sys_basic.h"
#include "stdchpl.h"
#include "chpl_compilation_config.c"
/*** Class Type Identification Numbers ***/

extern const chpl__class_id chpl__cid_c_ptr_uint8_t;
extern const chpl__class_id chpl__cid__ddata_locale;
extern const chpl__class_id chpl__cid__ddata_localesSignal;
extern const chpl__class_id chpl__cid__ddata_string;
extern const chpl__class_id chpl__cid_chpl___EndCount_atomic_int64_int64_t;
extern const chpl__class_id chpl__cid_BaseDist;
extern const chpl__class_id chpl__cid_BaseDom;
extern const chpl__class_id chpl__cid_BaseRectangularDom;
extern const chpl__class_id chpl__cid_BaseArr;
extern const chpl__class_id chpl__cid_locale;
extern const chpl__class_id chpl__cid_AbstractLocaleModel;
extern const chpl__class_id chpl__cid_AbstractRootLocale;
extern const chpl__class_id chpl__cid_localesSignal;
extern const chpl__class_id chpl__cid_DefaultDist;
extern const chpl__class_id chpl__cid_DefaultRectangularDom_1_int64_t_F;
extern const chpl__class_id chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
extern const chpl__class_id chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
extern const chpl__class_id chpl__cid_LocaleModel;
extern const chpl__class_id chpl__cid_RootLocale;
extern const chpl__class_id chpl__cid__class_localscoforall_fn;
extern const chpl__class_id chpl__cid_object;
extern const chpl__class_id chpl__cid_listNode_BaseArr_chpl;
extern const chpl__class_id chpl__cid_listNode_BaseDom_chpl;
/*** Class Prototypes ***/

typedef struct chpl_chpl___EndCount_atomic_int64_int64_t_s* chpl___EndCount_atomic_int64_int64_t;
typedef struct chpl_BaseDist_s* BaseDist;
typedef struct chpl_BaseDom_s* BaseDom;
typedef struct chpl_BaseRectangularDom_s* BaseRectangularDom;
typedef struct chpl_BaseArr_s* BaseArr;
typedef struct chpl_locale_s* locale;
typedef struct chpl_AbstractLocaleModel_s* AbstractLocaleModel;
typedef struct chpl_AbstractRootLocale_s* AbstractRootLocale;
typedef struct chpl_localesSignal_s* localesSignal;
typedef struct chpl_DefaultDist_s* DefaultDist;
typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s* DefaultRectangularDom_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s* DefaultRectangularArr_locale_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s* DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef struct chpl_LocaleModel_s* LocaleModel;
typedef struct chpl_RootLocale_s* RootLocale;
typedef struct chpl__class_localscoforall_fn_s* _class_localscoforall_fn;
typedef struct chpl_object_s* object;
typedef struct chpl_listNode_BaseArr_chpl_s* listNode_BaseArr_chpl;
typedef struct chpl_listNode_BaseDom_chpl_s* listNode_BaseDom_chpl;
/*** Enumerated Types ***/

typedef enum {iterKind_leader = UINT32(1), iterKind_follower = UINT32(2), iterKind_standalone = UINT32(3)} iterKind;
typedef enum {BoundedRangeType_bounded = UINT32(1), BoundedRangeType_boundedLow = UINT32(2), BoundedRangeType_boundedHigh = UINT32(3), BoundedRangeType_boundedNone = UINT32(4)} BoundedRangeType;
typedef enum {chpl__hash_status_empty = UINT32(1), chpl__hash_status_full = UINT32(2), chpl__hash_status_deleted = UINT32(3)} chpl__hash_status;
typedef enum {iomode_chpl_r_chpl = INT64(1), iomode_chpl_cw_chpl = INT64(2), iomode_chpl_rw_chpl = INT64(3), iomode_chpl_cwr_chpl = INT64(4)} iomode_chpl;
typedef enum {iokind_chpl_dynamic_chpl = INT64(0), iokind_chpl_native_chpl = INT64(1), iokind_chpl_big_chpl = INT64(2), iokind_chpl_little_chpl = INT64(3)} iokind_chpl;
typedef enum {ichpl_len1b_data_chpl = INT64(-1), iostringstyle_chpl_len2b_data_chpl = INT64(-2), iostringstyle_chpl_len4b_data_chpl = INT64(-4), iostringstyle_chpl_len8b_data_chpl = INT64(-8), iostringstyle_chpl_lenVb_data_chpl = INT64(-10), iostringstyle_chpl_data_toeof_chpl = INT64(-65280), iostringstyle_chpl_data_null_chpl = INT64(-256)} iostringstyle_chpl;
/*** Records, Unions, Data Class, References (Hierarchically) ***/

typedef struct chpl_atomicflag_s {
  atomic_flag _v;
} atomicflag;

typedef struct chpl_atomic_int64_s {
  atomic_int_least64_t _v;
} atomic_int64;

typedef struct chpl_atomic_refcnt_s {
  atomic_int64 _cnt;
} atomic_refcnt;

typedef uint8_t *c_ptr_uint8_t;
typedef locale *_ddata_locale;
typedef localesSignal *_ddata_localesSignal;
typedef struct chpl_string_s {
  int64_t len;
  int64_t _size;
  c_ptr_uint8_t buff;
  chpl_bool owned;
  int32_t locale_id;
} string;

typedef string *_ddata_string;
typedef AbstractLocaleModel *_ref_AbstractLocaleModel;
typedef AbstractRootLocale *_ref_AbstractRootLocale;
typedef BaseArr *_ref_BaseArr;
typedef BaseDist *_ref_BaseDist;
typedef BaseDom *_ref_BaseDom;
typedef BaseRectangularDom *_ref_BaseRectangularDom;
typedef struct chpl_DefaultComparator_chpl_s {
  uint8_t dummyFieldToAvoidWarning;
} DefaultComparator_chpl;

typedef DefaultComparator_chpl *_ref_DefaultComparator;
typedef DefaultDist *_ref_DefaultDist;
typedef DefaultRectangularArr_locale_1_int64_t_F *_ref_DefaultRectangularArr_locale_1_int64_t_F;
typedef DefaultRectangularArr_localesSignal_1_int64_t_F *_ref_DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef DefaultRectangularDom_1_int64_t_F *_ref_DefaultRectangularDom_1_int64_t_F;
typedef LocaleModel *_ref_LocaleModel;
typedef struct chpl_ReverseComparator_DefaultComparator_chpl_s {
  DefaultComparator_chpl comparator_chpl;
} ReverseComparator_DefaultComparator_chpl;

typedef ReverseComparator_DefaultComparator_chpl *_ref_ReverseComparator_DefaultComparator;
typedef RootLocale *_ref_RootLocale;
typedef chpl___EndCount_atomic_int64_int64_t *_ref__EndCount_atomic_int64_int64_t;
typedef struct chpl_chpl___RuntimeTypeInfo2_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo2;

typedef chpl___RuntimeTypeInfo2 *_ref__RuntimeTypeInfo;
typedef struct chpl_chpl___RuntimeTypeInfo_s {
  DefaultDist d;
} chpl___RuntimeTypeInfo;

typedef chpl___RuntimeTypeInfo *_ref__RuntimeTypeInfo2;
typedef struct chpl_chpl___RuntimeTypeInfo3_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo3;

typedef chpl___RuntimeTypeInfo3 *_ref__RuntimeTypeInfo3;
typedef _ddata_locale *_ref__ddata_locale;
typedef _ddata_localesSignal *_ref__ddata_localesSignal;
typedef _ddata_string *_ref__ddata_string;
typedef _nilType *_ref__nilType;
typedef int64_t _tuple_1_star_int64_t[1];

typedef _tuple_1_star_int64_t *_ref__tuple_1_star_int64_t;
typedef struct chpl_range_int64_t_bounded_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_bounded_F;

typedef range_int64_t_bounded_F _tuple_1_star_range_int64_t_bounded_F[1];

typedef _tuple_1_star_range_int64_t_bounded_F *_ref__tuple_1_star_range_int64_t_bounded_F;
typedef struct chpl__tuple_2_chpl_bool_int64_t_s {
  chpl_bool x1;
  int64_t x2;
} _tuple_2_chpl_bool_int64_t;

typedef _tuple_2_chpl_bool_int64_t *_ref__tuple_2_chpl_bool_int64_t;
typedef int64_t _tuple_2_star_int64_t[2];

typedef _tuple_2_star_int64_t *_ref__tuple_2_star_int64_t;
typedef string _tuple_6_star_string[6];

typedef _tuple_6_star_string *_ref__tuple_6_star_string;
typedef atomic_flag *_ref_atomic_flag;
typedef atomic_int64 *_ref_atomic_int64;
typedef atomic_int_least64_t *_ref_atomic_int_least64_t;
typedef atomic_refcnt *_ref_atomic_refcnt;
typedef atomicflag *_ref_atomicflag;
typedef c_ptr_uint8_t *_ref_c_ptr_uint8_t;
typedef c_string *_ref_c_string;
typedef c_string_copy *_ref_c_string_copy;
typedef c_void_ptr *_ref_c_void_ptr;
typedef struct chpl_channel_F_dynamic_T_chpl_s {
  locale home_chpl;
  qio_channel_ptr_t _channel_internal_chpl;
} channel_F_dynamic_T_chpl;

typedef channel_F_dynamic_T_chpl *_ref_channel_F_dynamic_T;
typedef struct chpl_channel_T_dynamic_T_chpl_s {
  locale home_chpl;
  qio_channel_ptr_t _channel_internal_chpl;
} channel_T_dynamic_T_chpl;

typedef channel_T_dynamic_T_chpl *_ref_channel_T_dynamic_T;
typedef chpl_bool *_ref_chpl_bool;
typedef chpl_localeID_t *_ref_chpl_localeID_t;
typedef struct chpl_chpl_localeTreeRecord_s {
  locale left;
  locale right;
} chpl_localeTreeRecord;

typedef chpl_localeTreeRecord *_ref_chpl_localeTreeRecord;
typedef chpl_main_argument *_ref_chpl_main_argument;
typedef struct chpl_file_chpl_s {
  locale home_chpl;
  qio_file_ptr_t _file_internal_chpl;
} file_chpl;

typedef file_chpl *_ref_file;
typedef int32_t *_ref_int32_t;
typedef int64_t *_ref_int64_t;
typedef struct chpl_ioNewline_chpl_s {
  chpl_bool skipWhitespaceOnly_chpl;
} ioNewline_chpl;

typedef ioNewline_chpl *_ref_ioNewline;
typedef iostyle *_ref_iostyle;
typedef listNode_BaseArr_chpl *_ref_listNode_BaseArr;
typedef listNode_BaseDom_chpl *_ref_listNode_BaseDom;
typedef struct chpl_list_BaseArr_chpl_s {
  listNode_BaseArr_chpl first_chpl;
  listNode_BaseArr_chpl last_chpl;
  int64_t length_chpl;
} list_BaseArr_chpl;

typedef list_BaseArr_chpl *_ref_list_BaseArr;
typedef struct chpl_list_BaseDom_chpl_s {
  listNode_BaseDom_chpl first_chpl;
  listNode_BaseDom_chpl last_chpl;
  int64_t length_chpl;
} list_BaseDom_chpl;

typedef list_BaseDom_chpl *_ref_list_BaseDom;
typedef locale *_ref_locale;
typedef struct chpl_localesBarrier_s {
  uint8_t dummyFieldToAvoidWarning;
} localesBarrier;

typedef localesBarrier *_ref_localesBarrier;
typedef localesSignal *_ref_localesSignal;
typedef object *_ref_object;
typedef qio_channel_ptr_t *_ref_qio_channel_ptr_t;
typedef qio_file_ptr_t *_ref_qio_file_ptr_t;
typedef struct chpl_range_int64_t_boundedLow_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_boundedLow_F;

typedef range_int64_t_boundedLow_F *_ref_range_int64_t_boundedLow_F;
typedef range_int64_t_bounded_F *_ref_range_int64_t_bounded_F;
typedef struct chpl_range_int64_t_bounded_T_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_bounded_T;

typedef range_int64_t_bounded_T *_ref_range_int64_t_bounded_T;
typedef string *_ref_string;
typedef syserr *_ref_syserr;
typedef uint64_t *_ref_uint64_t;
typedef uint8_t *_ref_uint8_t;
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

/*** Function Prototypes ***/

void chpl__init_Atomics(int64_t _ln, int32_t _fn);
void atomic_fence(memory_order order);
atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme);
atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme);
void chpl__init_AtomicsCommon(int64_t _ln, int32_t _fn);
void _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, _ref_atomic_refcnt _retArg);
void chpl__init_BaseStringType(int64_t _ln, int32_t _fn);
void chpl__init_CPtr(int64_t _ln, int32_t _fn);
void chpl__init_CString(int64_t _ln, int32_t _fn);
void chpl__init_ChapelArray(int64_t _ln, int32_t _fn);
void _newArray(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
void _newArray2(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg);
void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg);
void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg);
chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d);
void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom);
chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom);
chpl___RuntimeTypeInfo2 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom);
void chpl__convertRuntimeTypeToValue2(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
void chpl__convertRuntimeTypeToValue3(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg);
void chpl_incRefCountsForDomainsInArrayEltTypes(void);
void chpl_incRefCountsForDomainsInArrayEltTypes2(void);
void chpl_decRefCountsForDomainsInArrayEltTypes(void);
void chpl_decRefCountsForDomainsInArrayEltTypes2(void);
void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
void chpl__ensureDomainExpr2(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg);
DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme);
DefaultDist _distribution(DefaultDist _value);
void chpl___TILDE__distribution(DefaultDist this7);
void clone2(DefaultDist this7, _ref_DefaultDist _retArg);
DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this7);
DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme);
void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this7);
void dist(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultDist _retArg);
void this2(DefaultRectangularDom_1_int64_t_F this7, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
void buildArray(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg);
void buildArray2(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
void help(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F x);
void help2(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x);
int64_t numIndices(DefaultRectangularDom_1_int64_t_F this7);
void setIndices(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const x);
void getIndices(DefaultRectangularDom_1_int64_t_F this7, _ref__tuple_1_star_range_int64_t_bounded_F _retArg);
DefaultRectangularArr_locale_1_int64_t_F _construct__array(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme);
DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array2(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme);
void initialize(DefaultRectangularArr_localesSignal_1_int64_t_F this7);
void initialize2(DefaultRectangularArr_locale_1_int64_t_F this7);
void chpl___TILDE__array(DefaultRectangularArr_localesSignal_1_int64_t_F this7);
void chpl___TILDE__array2(DefaultRectangularArr_locale_1_int64_t_F this7);
void _dom(DefaultRectangularArr_locale_1_int64_t_F this7, _ref_DefaultRectangularDom_1_int64_t_F _retArg);
void newAlias(DefaultRectangularArr_locale_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
void chpl___ASSIGN_(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b);
DefaultDist chpl__initCopy(DefaultDist a);
DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a);
void chpl__init_ChapelBase(int64_t _ln, int32_t _fn);
void compilerAssert(void);
void init_elts(_ddata_localesSignal x, int64_t s);
void init_elts2(_ddata_locale x, int64_t s);
chpl___EndCount_atomic_int64_int64_t _construct__EndCount(atomic_int64* const i, int64_t taskCnt, c_void_ptr taskList, chpl___EndCount_atomic_int64_int64_t meme);
void chpl__auto_destroy__EndCount(chpl___EndCount_atomic_int64_int64_t this7);
void _upEndCount(chpl___EndCount_atomic_int64_int64_t e);
void _downEndCount(chpl___EndCount_atomic_int64_int64_t e);
void _waitEndCount(chpl___EndCount_atomic_int64_int64_t e);
void _waitEndCount2(chpl___EndCount_atomic_int64_int64_t _endCount);
uint64_t _command_line_cast(c_string x);
chpl_bool _command_line_cast2(c_string x);
chpl_bool _command_line_cast3(c_string x);
int64_t _command_line_cast4(c_string x);
chpl_bool _command_line_cast5(c_string x);
int64_t _command_line_cast6(c_string x);
chpl_bool _command_line_cast7(c_string x);
chpl_bool _command_line_cast8(c_string x);
uint64_t _command_line_cast9(c_string x);
void _command_line_cast10(c_string x, _ref_string _retArg);
chpl_bool _command_line_cast11(c_string x);
void _command_line_cast12(c_string x, _ref_string _retArg);
int64_t _command_line_cast13(c_string x);
void _command_line_cast14(c_string x, _ref_string _retArg);
DefaultDist chpl__autoCopy(DefaultDist x);
DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x);
DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy3(DefaultRectangularArr_localesSignal_1_int64_t_F x);
DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy4(DefaultRectangularArr_locale_1_int64_t_F x);
void chpl__autoDestroy(DefaultDist x);
void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x);
void chpl__autoDestroy3(DefaultRectangularArr_locale_1_int64_t_F x);
void chpl__autoDestroy4(DefaultRectangularArr_localesSignal_1_int64_t_F x);
void chpl__init_ChapelDistribution(int64_t _ln, int32_t _fn);
BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, BaseDist meme);
void chpl__auto_destroy_BaseDist(BaseDist this7);
int64_t destroyDist(BaseDist this7);
void dsiDestroyDistClass(BaseDist this7);
BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseDom meme);
void chpl__auto_destroy_BaseDom(BaseDom this7);
BaseDist dsiMyDist(BaseDom this7);
int64_t destroyDom(BaseDom this7);
chpl_bool dsiLinksDistribution(BaseDom this7);
BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme);
void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this7);
BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme);
void chpl__auto_destroy_BaseArr(BaseArr this7);
BaseDom dsiGetBaseDom(BaseArr this7);
int64_t destroyArr(BaseArr this7);
void dsiDestroyData(BaseArr this7);
void dsiReallocate(BaseArr this7, DefaultRectangularDom_1_int64_t_F d);
void dsiPostReallocate(BaseArr this7);
void chpl__init_ChapelDynDispHack(int64_t _ln, int32_t _fn);
void chpl__init_ChapelIO(int64_t _ln, int32_t _fn);
void _stringify_index(_tuple_1_star_int64_t* const tup, _ref_string _retArg);
void halt(string* const s, int64_t _ln, int32_t _fn);
void halt2(c_string s, int64_t _ln, int32_t _fn);
void halt3(string* const _e0_args, int64_t _e1_args, int64_t _ln, int32_t _fn);
void chpl__init_ChapelLocale(int64_t _ln, int32_t _fn);
locale _construct_locale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, locale meme);
void chpl__auto_destroy_locale(locale this7);
locale locale2(void);
int64_t id(locale this7);
int64_t chpl_id(locale this7);
locale getChild(locale this7, int64_t idx);
AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme);
void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this7);
AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, AbstractRootLocale meme);
void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this7);
locale localeIDtoLocale(AbstractRootLocale this7, chpl_localeID_t* const id2);
localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme);
void chpl__auto_destroy_localesSignal(localesSignal this7);
void _construct_localesBarrier(localesBarrier* const meme, _ref_localesBarrier _retArg);
void wait5(_ref_localesBarrier this7, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags);
void chpl_init_rootLocale(void);
void chpl_rootLocaleInitPrivate(int64_t locIdx);
void chpl_getLocaleID(_ref_chpl_localeID_t localeID, int64_t _ln, int32_t _fn);
locale chpl_localeID_to_locale(chpl_localeID_t* const id2);
void chpl_taskRunningCntInc(int64_t _ln, int32_t _fn);
void chpl_taskRunningCntDec(int64_t _ln, int32_t _fn);
void chpl__init_ChapelNumLocales(int64_t _ln, int32_t _fn);
void chpl__init_ChapelRange(int64_t _ln, int32_t _fn);
range_int64_t_bounded_T _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_T* const meme);
range_int64_t_bounded_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme);
range_int64_t_boundedLow_F _construct_range3(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme);
range_int64_t_bounded_T range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned);
range_int64_t_bounded_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned);
range_int64_t_boundedLow_F range3(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned);
void chpl_build_bounded_range(int64_t low, int64_t high, _ref_range_int64_t_bounded_F _retArg);
void chpl_build_low_bounded_range(int64_t low, _ref_range_int64_t_boundedLow_F _retArg);
int64_t length(_ref_range_int64_t_bounded_F this7);
chpl_bool isAmbiguous(_ref_range_int64_t_bounded_T this7);
void chpl_by_help(range_int64_t_bounded_F* const r, int64_t step, _ref_range_int64_t_bounded_T _retArg);
void this3(_ref_range_int64_t_bounded_F this7, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg);
void this4(_ref_range_int64_t_bounded_F this7, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg);
void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg);
void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg);
chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low, int64_t high, int64_t stride, int64_t first, int64_t last, chpl_bool shouldHalt);
chpl_bool checkIfIterWillOverflow(_ref_range_int64_t_bounded_F this7, chpl_bool shouldHalt);
chpl_bool checkIfIterWillOverflow2(_ref_range_int64_t_bounded_T this7, chpl_bool shouldHalt);
int64_t chpl__mod(int64_t dividend, int64_t modulus);
int64_t chpl__diffMod(int64_t minuend, int64_t subtrahend, int64_t modulus);
int64_t chpl__add(int64_t a, int64_t b);
void chpl__init_ChapelStandard(int64_t _ln, int32_t _fn);
void chpl__init_ChapelStringLiterals(int64_t _ln, int32_t _fn);
void chpl__initStringLiterals(void);
void chpl__init_ChapelTaskTable(int64_t _ln, int32_t _fn);
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, int32_t filename, uint64_t tl_info);
void chpldev_taskTable_remove(chpl_taskID_t taskID);
void chpldev_taskTable_set_active(chpl_taskID_t taskID);
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID);
void chpldev_taskTable_get_tl_info(chpl_taskID_t taskID);
void chpldev_taskTable_print(void);
void chpl__init_ChapelThreads(int64_t _ln, int32_t _fn);
void chpl__init_ChapelTuple(int64_t _ln, int32_t _fn);
_ref_range_int64_t_bounded_F this5(_ref__tuple_1_star_range_int64_t_bounded_F this7, int64_t i);
void chpl__init_ChapelUtil(int64_t _ln, int32_t _fn);
void chpl__init_DefaultAssociative(int64_t _ln, int32_t _fn);
void chpl__init_DefaultRectangular(int64_t _ln, int32_t _fn);
DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, DefaultDist meme);
void chpl__auto_destroy_DefaultDist(DefaultDist this7);
DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this7);
DefaultDist dsiClone(DefaultDist this7);
void chpl_defaultDistInitPrivate(void);
DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme);
void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this7);
chpl_bool dsiLinksDistribution2(DefaultRectangularDom_1_int64_t_F this7);
DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2);
void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this7, _ref__tuple_1_star_range_int64_t_bounded_F _retArg);
void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const x);
chpl_bool dsiMember(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_int64_t* const ind);
void dsiDim(DefaultRectangularDom_1_int64_t_F this7, _ref_range_int64_t_bounded_F _retArg);
int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this7);
int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this7);
DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray(DefaultRectangularDom_1_int64_t_F this7);
DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this7);
DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const ranges);
DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_localesSignal_1_int64_t_F meme);
DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_locale_1_int64_t_F meme);
void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_localesSignal_1_int64_t_F this7);
void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_locale_1_int64_t_F this7);
DefaultRectangularDom_1_int64_t_F dsiGetBaseDom2(DefaultRectangularArr_localesSignal_1_int64_t_F this7);
DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_locale_1_int64_t_F this7);
void dsiDestroyData2(DefaultRectangularArr_locale_1_int64_t_F this7);
void dsiDestroyData3(DefaultRectangularArr_localesSignal_1_int64_t_F this7);
void computeFactoredOffs(DefaultRectangularArr_localesSignal_1_int64_t_F this7);
void computeFactoredOffs2(DefaultRectangularArr_locale_1_int64_t_F this7);
void initialize3(DefaultRectangularArr_localesSignal_1_int64_t_F this7);
void initialize4(DefaultRectangularArr_locale_1_int64_t_F this7);
void dsiReallocate2(DefaultRectangularArr_locale_1_int64_t_F this7, DefaultRectangularDom_1_int64_t_F d);
void dsiReallocate3(DefaultRectangularArr_localesSignal_1_int64_t_F this7, DefaultRectangularDom_1_int64_t_F d);
void chpl__init_LocaleModel(int64_t _ln, int32_t _fn);
void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, int32_t _fn);
int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, int32_t _fn);
int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, int32_t _fn);
LocaleModel _construct_LocaleModel(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, int64_t _node_id, string* const local_name, LocaleModel meme);
void chpl__auto_destroy_LocaleModel(LocaleModel this7);
LocaleModel LocaleModel2(locale parent_loc);
int64_t chpl_id2(LocaleModel this7);
locale getChild2(LocaleModel this7, int64_t idx);
void setup(LocaleModel this7);
RootLocale _construct_RootLocale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme);
void chpl__auto_destroy_RootLocale(RootLocale this7);
RootLocale RootLocale2(void);
void setup2(RootLocale this7);
void coforall_fn(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, chpl___EndCount_atomic_int64_int64_t _coforallCount, RootLocale this7);
void wrapcoforall_fn(_class_localscoforall_fn c);
int64_t chpl_id3(RootLocale this7);
locale getChild3(RootLocale this7, int64_t idx);
void getDefaultLocaleArray(RootLocale this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg);
DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray2(RootLocale this7);
locale localeIDtoLocale2(RootLocale this7, chpl_localeID_t* const id2);
c_void_ptr chpl_here_alloc(int64_t size, int16_t md);
c_void_ptr chpl_here_realloc(c_void_ptr ptr, int64_t size, int16_t md);
int64_t chpl_here_good_alloc_size(int64_t min_size);
void chpl_here_free(c_void_ptr ptr);
chpl_bool chpl_doDirectExecuteOn(chpl_localeID_t* const loc);
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn);
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn);
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn);
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_c_void_ptr tlist, int64_t tlist_node_id, int64_t _ln, int32_t _fn);
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_c_void_ptr tlist, int64_t tlist_node_id, int64_t _ln, int32_t _fn);
void chpl_taskListExecute(_ref_c_void_ptr task_list, int64_t _ln, int32_t _fn);
void chpl__init_LocaleTree(int64_t _ln, int32_t _fn);
void _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, _ref_chpl_localeTreeRecord _retArg);
void chpl_initLocaleTree(void);
void chpl__init_LocalesArray(int64_t _ln, int32_t _fn);
void chpl__init_MemConsistency(int64_t _ln, int32_t _fn);
void chpl__init_MemTracking(int64_t _ln, int32_t _fn);
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaksByType, _ref_c_string ret_memLeaksByDesc, _ref_chpl_bool ret_memLeaks, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog);
void chpl__init_PrintModuleInitOrder(int64_t _ln, int32_t _fn);
void printModuleInit(c_string s1, c_string s2, int64_t len);
void initPrint(void);
void chpl__init_String(int64_t _ln, int32_t _fn);
c_ptr_uint8_t copyRemoteBuffer(int64_t src_loc_id, c_ptr_uint8_t src_addr, int64_t len);
void _construct_string(int64_t len, int64_t _size, c_ptr_uint8_t buff, chpl_bool owned, int32_t locale_id, string* const meme, _ref_string _retArg);
void string2(string* const s, chpl_bool owned, _ref_string _retArg);
void string3(c_string cs, chpl_bool owned, chpl_bool needToCopy, _ref_string _retArg);
void string4(c_ptr_uint8_t buff, int64_t length2, int64_t size, chpl_bool owned, chpl_bool needToCopy, _ref_string _retArg);
void chpl___TILDE_string(_ref_string this7);
void reinitString(_ref_string this7, c_ptr_uint8_t buf, int64_t s_len, int64_t size, chpl_bool needToCopy);
void _getView(_ref_string this7, range_int64_t_bounded_F* const r, _ref_range_int64_t_bounded_F _retArg);
void this6(_ref_string this7, range_int64_t_bounded_F* const r, _ref_string _retArg);
void strip(_ref_string this7, string* const chars, chpl_bool leading, chpl_bool trailing, _ref_string _retArg);
string chpl__autoCopy5(string* const s);
string chpl__initCopy3(string* const s);
void chpl___ASSIGN_2(_ref_string lhs, string* const rhs);
void chpl___PLUS_(string* const s0, string* const s1, _ref_string _retArg);
void chpl___PLUS__ASSIGN_(_ref_string lhs, _ref_string rhs);
chpl_bool chpl___EQUALS__(string* const a, string* const b);
void _cast(c_string cs, _ref_string _retArg);
void chpl__init_StringCasts(int64_t _ln, int32_t _fn);
chpl_bool _cast2(string* const x);
void _cast3(int64_t x, _ref_string _retArg);
object _construct_object(object meme);
void chpl__auto_destroy_object(object this7);
void chpl__heapAllocateGlobals(void);
void chpl__init_preInit(int64_t _ln, int32_t _fn);
void chpl__init_Assert(int64_t _ln_chpl, int32_t _fn_chpl);
void assert_chpl(chpl_bool test_chpl);
void chpl__init_CommDiagnostics(int64_t _ln_chpl, int32_t _fn_chpl);
void chpl__init_DSIUtil(int64_t _ln_chpl, int32_t _fn_chpl);
void createTuple_chpl(int64_t val_chpl, _ref__tuple_1_star_int64_t _retArg_chpl);
void chpl__init_Error(int64_t _ln_chpl, int32_t _fn_chpl);
c_string quote_string_chpl(string* const s_chpl, int64_t len_chpl);
void ioerror_chpl(syserr error_chpl, string* const msg_chpl, string* const path_chpl);
void ioerror_chpl2(syserr error_chpl, string* const msg_chpl, string* const path_chpl, int64_t offset_chpl);
void chpl__init_IO(int64_t _ln_chpl, int32_t _fn_chpl);
void defaultIOStyle_chpl(_ref_iostyle _retArg_chpl);
void _construct_file_chpl(locale home_chpl, qio_file_ptr_t _file_internal_chpl, file_chpl* const meme_chpl, _ref_file _retArg_chpl);
void check_chpl(_ref_file this_chpl);
void chpl___TILDE_file(_ref_file this_chpl);
void _style_chpl(_ref_file this_chpl, _ref_iostyle _retArg_chpl);
void getPath_chpl(_ref_file this_chpl, _ref_syserr error_chpl, _ref_string _retArg_chpl);
void tryGetPath_chpl(_ref_file this_chpl, _ref_string _retArg_chpl);
void openfd_chpl(int32_t fd_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl);
void openfd_chpl2(int32_t fd_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl);
void openfp_chpl(_cfile fp_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl);
void openfp_chpl2(_cfile fp_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl);
void _construct_channel_chpl(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_F_dynamic_T_chpl* const meme_chpl, _ref_channel_F_dynamic_T _retArg_chpl);
void _construct_channel_chpl2(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_T_dynamic_T_chpl* const meme_chpl, _ref_channel_T_dynamic_T _retArg_chpl);
void chpl___ASSIGN_3(_ref_channel_T_dynamic_T ret_chpl, channel_T_dynamic_T_chpl* const x_chpl);
void chpl___ASSIGN_4(_ref_channel_F_dynamic_T ret_chpl, channel_F_dynamic_T_chpl* const x_chpl);
void channel_chpl(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, _ref_channel_T_dynamic_T _retArg_chpl);
void channel_chpl2(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, _ref_channel_F_dynamic_T _retArg_chpl);
void chpl___TILDE_channel(_ref_channel_T_dynamic_T this_chpl);
void chpl___TILDE_channel2(_ref_channel_F_dynamic_T this_chpl);
void _construct_ioNewline_chpl(chpl_bool skipWhitespaceOnly_chpl, ioNewline_chpl* const meme_chpl, _ref_ioNewline _retArg_chpl);
void _ch_ioerror_chpl(_ref_channel_T_dynamic_T this_chpl, syserr error_chpl, string* const msg_chpl);
void reader_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl);
void reader_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl);
void writer_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl);
void writer_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl);
syserr _write_text_internal_chpl(qio_channel_ptr_t _channel_internal_chpl, string* const x_chpl);
void stringify_chpl(string* const _e0_args_chpl, int64_t _e1_args_chpl, _ref_string _retArg_chpl);
void _args_to_proto_chpl(string* const _e0_args_chpl, ioNewline_chpl* const _e1_args_chpl, string* const preArg_chpl, _ref_string _retArg_chpl);
chpl_bool writeln_chpl(_ref_channel_T_dynamic_T this_chpl, string* const _e0_args_chpl);
void writeln_chpl2(string* const _e0_args_chpl);
void chpl__init_List(int64_t _ln_chpl, int32_t _fn_chpl);
listNode_BaseArr_chpl _construct_listNode_chpl(BaseArr data_chpl, listNode_BaseArr_chpl next_chpl, listNode_BaseArr_chpl meme_chpl);
void chpl__auto_destroy_listNode(listNode_BaseDom_chpl this_chpl);
void chpl__auto_destroy_listNode2(listNode_BaseArr_chpl this_chpl);
void _construct_list_chpl(listNode_BaseDom_chpl first_chpl, listNode_BaseDom_chpl last_chpl, int64_t length_chpl, list_BaseDom_chpl* const meme_chpl, _ref_list_BaseDom _retArg_chpl);
void _construct_list_chpl2(listNode_BaseArr_chpl first_chpl, listNode_BaseArr_chpl last_chpl, int64_t length_chpl, list_BaseArr_chpl* const meme_chpl, _ref_list_BaseArr _retArg_chpl);
void append_chpl(_ref_list_BaseArr this_chpl, BaseArr e_chpl);
void remove_chpl(_ref_list_BaseArr this_chpl, BaseArr x_chpl);
void remove_chpl2(_ref_list_BaseDom this_chpl, BaseDom x_chpl);
void chpl__init_Regexp(int64_t _ln_chpl, int32_t _fn_chpl);
void chpl__init_Sort(int64_t _ln_chpl, int32_t _fn_chpl);
void _construct_DefaultComparator_chpl(DefaultComparator_chpl* const meme_chpl, _ref_DefaultComparator _retArg_chpl);
void _construct_ReverseComparator_chpl(DefaultComparator_chpl* const comparator_chpl, ReverseComparator_DefaultComparator_chpl* const meme_chpl, _ref_ReverseComparator_DefaultComparator _retArg_chpl);
void ReverseComparator_chpl(DefaultComparator_chpl* const comparator_chpl, _ref_ReverseComparator_DefaultComparator _retArg_chpl);
void chpl__init_Sys(int64_t _ln_chpl, int32_t _fn_chpl);
void chpl__init_SysBasic(int64_t _ln_chpl, int32_t _fn_chpl);
void chpl__init_SysCTypes(int64_t _ln_chpl, int32_t _fn_chpl);
void chpl__init_hello(int64_t _ln_chpl, int32_t _fn_chpl);
int64_t chpl_gen_main(chpl_main_argument* const _arg);
void chpl_user_main(void);
void chpl__autoDestroyGlobals(void);
/*** Function Pointer Table ***/

extern chpl_fn_p chpl_ftable[];
/*** Virtual Method Table ***/

extern chpl_fn_p chpl_vmtable[];

/*** Global Variables ***/

extern c_ptr_uint8_t bufferType;
extern atomic_int64 numPrivateObjects;
extern chpl___EndCount_atomic_int64_int64_t _remoteEndCountType;
extern chpl_bool chpl__testParOn;
extern int32_t chpl_nodeID_t;
extern int32_t chpl_sublocID_t;
extern locale rootLocale;
extern locale origRootLocale;
extern locale dummyLocale;
extern int64_t numLocales;
extern string _str_literal_1760;
extern string _str_literal_2711;
extern string _str_literal_2713;
extern string _str_literal_906;
extern string _str_literal_908;
extern string _str_literal_1752;
extern string _str_literal_32;
extern string _str_literal_1754;
extern string _str_literal_1749;
extern string _str_literal_806;
extern string _str_literal_1483;
extern string _str_literal_859;
extern string _str_literal_2329;
extern string _str_literal_2331;
extern string _str_literal_1485;
extern string _str_literal_863;
extern string _str_literal_510;
extern string _str_literal_520;
extern string _str_literal_1491;
extern string _str_literal_537;
extern string _str_literal_541;
extern string _str_literal_1497;
extern string _str_literal_306;
extern string _str_literal_1500;
extern string _str_literal_311;
extern string _str_literal_1520;
extern string _str_literal_318;
extern string _str_literal_1548;
extern string _str_literal_1551;
extern string _str_literal_339;
extern string _str_literal_341;
extern string _str_literal_987;
extern string _str_literal_680;
extern string _str_literal_694;
extern string _str_literal_2657;
extern string _str_literal_2668;
extern string _str_literal_367;
extern string _str_literal_375;
extern string _str_literal_387;
extern string _str_literal_1890;
extern string _str_literal_1899;
extern string _str_literal_1906;
extern string _str_literal_1908;
extern string _str_literal_1910;
extern string _str_literal_1912;
extern string _str_literal_1968;
extern string _str_literal_1970;
extern string _str_literal_1988;
extern string _str_literal_2015;
extern string _str_literal_2022;
extern string _str_literal_2058;
extern string _str_literal_2061;
extern string _str_literal_2063;
extern string _str_literal_2065;
extern string _str_literal_2067;
extern string _str_literal_2069;
extern string _str_literal_2109;
extern string _str_literal_2111;
extern int64_t numThreadsPerLocale;
extern int64_t chpl_table_index_type;
extern int64_t dataParTasksPerLocale;
extern chpl_bool dataParIgnoreRunningTasks;
extern int64_t dataParMinGranularity;
extern DefaultDist defaultDist;
extern chpl_bool doneCreatingLocales;
extern DefaultRectangularDom_1_int64_t_F chpl_emptyLocaleSpace;
extern DefaultRectangularArr_locale_1_int64_t_F chpl_emptyLocales;
extern chpl_localeTreeRecord chpl_localeTree;
extern DefaultRectangularArr_locale_1_int64_t_F Locales;
extern DefaultRectangularDom_1_int64_t_F LocaleSpace;
extern chpl_bool memTrack;
extern chpl_bool memStats;
extern chpl_bool memLeaksByType;
extern chpl_bool memLeaks;
extern uint64_t memMax;
extern uint64_t memThreshold;
extern string memLog;
extern string memLeaksLog;
extern string memLeaksByDesc;
extern uint64_t cMemMax;
extern uint64_t cMemThreshold;
extern chpl_bool printModuleInitOrder;
extern int32_t moduleInitLevel;
extern uint8_t uint_A;
extern uint8_t uint_Z;
extern uint8_t uint_a;
extern uint8_t uint_z;
extern uint8_t uint_0;
extern uint8_t uint_9;
extern uint8_t uint_space;
extern uint8_t uint_tab;
extern uint8_t uint_newline;
extern uint8_t uint_return;
extern chpl_bool chpl__init_ChapelStringLiterals_p;
extern chpl_bool chpl__init_DSIUtil_p;
extern chpl_bool chpl__init_SysCTypes_p;
extern chpl_bool chpl__init_hello_p;
extern chpl_bool chpl__init_AtomicsCommon_p;
extern chpl_bool chpl__init_ChapelDistribution_p;
extern chpl_bool chpl__init_ChapelDynDispHack_p;
extern chpl_bool chpl__init_MemConsistency_p;
extern chpl_bool chpl__init_StringCasts_p;
extern chpl_bool chpl__init_CPtr_p;
extern chpl_bool chpl__init_ChapelNumLocales_p;
extern chpl_bool chpl__init_ChapelTaskTable_p;
extern chpl_bool chpl__init_DefaultAssociative_p;
extern chpl_bool chpl__init_DefaultRectangular_p;
extern chpl_bool chpl__init_MemTracking_p;
extern chpl_bool chpl__init_ChapelBase_p;
extern chpl_bool chpl__init_ChapelStandard_p;
extern chpl_bool chpl__init_ChapelUtil_p;
extern chpl_bool chpl__init_LocaleTree_p;
extern chpl_bool chpl__init_List_p;
extern chpl_bool chpl__init_ChapelThreads_p;
extern chpl_bool chpl__init_LocaleModel_p;
extern chpl_bool chpl__init_PrintModuleInitOrder_p;
extern chpl_bool chpl__init_Assert_p;
extern chpl_bool chpl__init_BaseStringType_p;
extern chpl_bool chpl__init_Error_p;
extern chpl_bool chpl__init_ChapelTuple_p;
extern chpl_bool chpl__init_LocalesArray_p;
extern chpl_bool chpl__init_CString_p;
extern chpl_bool chpl__init_SysBasic_p;
extern chpl_bool chpl__init_Sys_p;
extern chpl_bool chpl__init_String_p;
extern chpl_bool chpl__init_ChapelLocale_p;
extern chpl_bool chpl__init_Atomics_p;
extern chpl_bool chpl__init_ChapelRange_p;
extern chpl_bool chpl__init_ChapelArray_p;
extern chpl_bool chpl__init_Sort_p;
extern chpl_bool chpl__init_CommDiagnostics_p;
extern chpl_bool chpl__init_ChapelIO_p;
extern chpl_bool chpl__init_Regexp_p;
extern chpl_bool chpl__init_IO_p;
extern int32_t IOHINT_NONE_chpl;
extern int32_t IOHINT_RANDOM_chpl;
extern int32_t IOHINT_SEQUENTIAL_chpl;
extern int32_t IOHINT_CACHED_chpl;
extern int32_t IOHINT_PARALLEL_chpl;
extern string _r_chpl;
extern string _rw_chpl;
extern string _cw_chpl;
extern string _cwr_chpl;
extern _tuple_6_star_string _arg_to_proto_names_chpl;
extern channel_F_dynamic_T_chpl stdin_chpl;
extern channel_T_dynamic_T_chpl stdout_chpl;
extern channel_T_dynamic_T_chpl stderr_chpl;
extern DefaultComparator_chpl defaultComparator_chpl;
extern ReverseComparator_DefaultComparator_chpl reverseComparator_chpl;
extern const int chpl_numGlobalsOnHeap;
extern ptr_wide_ptr_t chpl_globals_registry[1];
extern const int chpl_heterogeneous;
extern const char* chpl_mem_descs[];
extern const int chpl_mem_numDescs;
extern void* const chpl_private_broadcast_table[];

#include "chpl-gen-includes.h"
