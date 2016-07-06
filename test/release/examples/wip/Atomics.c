/* Atomics.chpl:70 */
 void chpl__init_Atomics(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Atomics_p) {
    goto _exit_chpl__init_Atomics;
  }
  modFormatStr = "%*s\n";
  modStr = "Atomics";
  printModuleInit(modFormatStr, modStr, INT64(7));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Atomics_p = UINT8(true);
  {
    chpl__init_MemConsistency(INT64(70), INT32(11));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Atomics:;
  return;
}

/* Atomics.chpl:267 */
 void atomic_fence(memory_order order) {
  atomic_thread_fence(order);
  chpl_rmem_consist_fence(order, INT64(269), INT32(11));
  return;
}

/* Atomics.chpl:310 */
 atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme) {
  atomicflag this7;
  this7 = *(meme);
  (&this7)->_v = _v;
  return this7;
}

/* Atomics.chpl:1152 */
 atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme) {
  atomic_int64 this7;
  this7 = *(meme);
  (&this7)->_v = _v;
  return this7;
}

