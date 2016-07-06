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