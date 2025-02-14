// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple riscv64 -target-feature +zknd -emit-llvm %s -o - \
// RUN:     | FileCheck %s  -check-prefix=RV64ZKND

#include <stdint.h>

// RV64ZKND-LABEL: @aes64dsm(
// RV64ZKND-NEXT:  entry:
// RV64ZKND-NEXT:    [[RS1_ADDR:%.*]] = alloca i64, align 8
// RV64ZKND-NEXT:    [[RS2_ADDR:%.*]] = alloca i64, align 8
// RV64ZKND-NEXT:    store i64 [[RS1:%.*]], ptr [[RS1_ADDR]], align 8
// RV64ZKND-NEXT:    store i64 [[RS2:%.*]], ptr [[RS2_ADDR]], align 8
// RV64ZKND-NEXT:    [[TMP0:%.*]] = load i64, ptr [[RS1_ADDR]], align 8
// RV64ZKND-NEXT:    [[TMP1:%.*]] = load i64, ptr [[RS2_ADDR]], align 8
// RV64ZKND-NEXT:    [[TMP2:%.*]] = call i64 @llvm.riscv.aes64dsm(i64 [[TMP0]], i64 [[TMP1]])
// RV64ZKND-NEXT:    ret i64 [[TMP2]]
//
uint64_t aes64dsm(uint64_t rs1, uint64_t rs2) {
  return __builtin_riscv_aes64dsm_64(rs1, rs2);
}


// RV64ZKND-LABEL: @aes64ds(
// RV64ZKND-NEXT:  entry:
// RV64ZKND-NEXT:    [[RS1_ADDR:%.*]] = alloca i64, align 8
// RV64ZKND-NEXT:    [[RS2_ADDR:%.*]] = alloca i64, align 8
// RV64ZKND-NEXT:    store i64 [[RS1:%.*]], ptr [[RS1_ADDR]], align 8
// RV64ZKND-NEXT:    store i64 [[RS2:%.*]], ptr [[RS2_ADDR]], align 8
// RV64ZKND-NEXT:    [[TMP0:%.*]] = load i64, ptr [[RS1_ADDR]], align 8
// RV64ZKND-NEXT:    [[TMP1:%.*]] = load i64, ptr [[RS2_ADDR]], align 8
// RV64ZKND-NEXT:    [[TMP2:%.*]] = call i64 @llvm.riscv.aes64ds(i64 [[TMP0]], i64 [[TMP1]])
// RV64ZKND-NEXT:    ret i64 [[TMP2]]
//
uint64_t aes64ds(uint64_t rs1, uint64_t rs2) {
  return __builtin_riscv_aes64ds_64(rs1, rs2);
}


// RV64ZKND-LABEL: @aes64im(
// RV64ZKND-NEXT:  entry:
// RV64ZKND-NEXT:    [[RS1_ADDR:%.*]] = alloca i64, align 8
// RV64ZKND-NEXT:    store i64 [[RS1:%.*]], ptr [[RS1_ADDR]], align 8
// RV64ZKND-NEXT:    [[TMP0:%.*]] = load i64, ptr [[RS1_ADDR]], align 8
// RV64ZKND-NEXT:    [[TMP1:%.*]] = call i64 @llvm.riscv.aes64im(i64 [[TMP0]])
// RV64ZKND-NEXT:    ret i64 [[TMP1]]
//
uint64_t aes64im(uint64_t rs1) {
  return __builtin_riscv_aes64im_64(rs1);
}
