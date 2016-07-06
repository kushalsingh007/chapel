/* ChapelStandard.chpl:23 */
void chpl__init_ChapelStandard(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelStandard_p) {
    goto _exit_chpl__init_ChapelStandard;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelStandard";
  printModuleInit(modFormatStr, modStr, INT64(14));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelStandard_p = UINT8(true);
  {
    chpl__init_CPtr(INT64(23), INT32(3));
    chpl__init_CString(INT64(23), INT32(3));
    chpl__init_String(INT64(23), INT32(3));
    chpl__init_ChapelBase(INT64(23), INT32(3));
    chpl__init_MemConsistency(INT64(23), INT32(3));
    chpl__init_Atomics(INT64(23), INT32(3));
    chpl__init_AtomicsCommon(INT64(23), INT32(3));
    chpl__init_ChapelThreads(INT64(23), INT32(3));
    chpl__init_ChapelTuple(INT64(23), INT32(3));
    chpl__init_ChapelRange(INT64(23), INT32(3));
    chpl__init_LocaleModel(INT64(23), INT32(3));
    chpl__init_ChapelLocale(INT64(23), INT32(3));
    chpl__init_DefaultRectangular(INT64(23), INT32(3));
    chpl__init_LocalesArray(INT64(23), INT32(3));
    chpl__init_ChapelArray(INT64(23), INT32(3));
    chpl__init_ChapelDistribution(INT64(23), INT32(3));
    chpl__init_ChapelIO(INT64(23), INT32(3));
    chpl__init_LocaleTree(INT64(23), INT32(3));
    chpl__init_DefaultAssociative(INT64(23), INT32(3));
    chpl__init_ChapelTaskTable(INT64(23), INT32(3));
    chpl__init_MemTracking(INT64(23), INT32(3));
    chpl__init_ChapelUtil(INT64(23), INT32(3));
    chpl__init_ChapelDynDispHack(INT64(23), INT32(3));
    chpl__init_Assert(INT64(23), INT32(3));
    chpl__init_CommDiagnostics(INT64(23), INT32(3));
    chpl__init_Sort(INT64(23), INT32(3));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelStandard:;
  return;
}

