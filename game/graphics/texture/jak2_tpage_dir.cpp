#include "jak2_tpage_dir.h"

#include <vector>

#include "common/common_types.h"

#include "jak1_tpage_dir.h"

// clang-format off
namespace {
std::vector<u32> tpage_dir = {
    0x0,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x0,        0x0,   0x0,  0x0,  0xa5, 0xd5, 0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x3e,       0x0,   0x0,  0x0,  0x0,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x4,  0x1,  0x9,  0x8,   0x0,        0x0,   0x0,  0x0,  0x0,  0x0,  0x9,
    0xa,   0x4,  0x16,  0x5,  0x2,  0x0,  0x0,   0x9,        0x3,   0x9,  0x2,  0xb,  0xa,  0x9,
    0x1,   0x2b, 0x9,   0x0,  0x9,  0x3,  0x9,   0x3,        0x1,   0x0,  0x1,  0xe,  0x66, 0x6b,
    0x1,   0xb,  0xa,   0x9,  0x0,  0x0,  0x0,   0x0,        0x0,   0x1,  0x9,  0x2,  0x1,  0x1,
    0x0,   0x0,  0x0,   0x9,  0x4,  0x1,  0x8,   0x2,        0x1,   0x1,  0x9,  0x4,  0xa,  0x17,
    0x47,  0x0,  0xa,   0x7,  0x49, 0x21, 0x1,   0x1,        0x1,   0x1,  0x1,  0x3,  0x1b, 0x1,
    0x1,   0x1,  0x1,   0x9,  0x2,  0x1,  0x3,   0x0,        0x1,   0x4,  0x3,  0x3,  0xa,  0xd,
    0x0,   0x0,  0x0,   0x0,  0x1,  0x0,  0x0,   0x0,        0x0,   0x0,  0x14, 0xb,  0x3,  0x4,
    0x3,   0x3,  0x5,   0x1,  0x1,  0x1,  0x1,   0x1,        0x1,   0x0,  0x0,  0x0,  0x5,  0x6,
    0x5,   0x5,  0x6,   0x5,  0x2,  0x5,  0x4,   0x5,        0x4,   0x5,  0x2,  0x2,  0x2,  0xb,
    0x2,   0x1,  0x4,   0x3,  0xc,  0x8,  0x1,   0x2,        0x2,   0x1,  0x1,  0x1,  0x1,  0x0,
    0x0,   0x9,  0x3,   0x9,  0x16, 0x9,  0x16,  0x10,       0x7,   0x1,  0x1,  0xb,  0x18, 0x0,
    0x0,   0x0,  0x9,   0x3,  0x9,  0x3,  0x9,   0x4,        0x1,   0x9,  0x3,  0x9,  0x2,  0x16,
    0x16,  0x16, 0x9,   0x3,  0x16, 0x0,  0x9,   0x3,        0x16,  0x9,  0x4,  0x16, 0x9,  0x3,
    0x16,  0x16, 0x9,   0x1,  0x9,  0xa,  0x0,   0x2c,       0x0,   0x21, 0x4,  0x4,  0x9,  0x2,
    0x2a,  0x1,  0x1,   0x0,  0x0,  0x20, 0x9,   0x2,        0x9,   0x2,  0x9,  0x2,  0x9,  0x2,
    0x9,   0x2,  0x9,   0x2,  0x15, 0x9,  0xb,   0x15,       0x9,   0x9,  0x2,  0x9,  0x2,  0x9,
    0x2,   0x9,  0x2,   0x3,  0x16, 0x9,  0x2,   0x9,        0x2,   0x9,  0x2,  0x13, 0x9,  0x2,
    0x2,   0x0,  0x1,   0x9,  0x3e, 0x13, 0x0,   0x9,        0x1,   0x0,  0x0,  0x0,  0x0,  0x6,
    0x0,   0x1a, 0x13,  0xf,  0x0,  0x0,  0x19,  0xc,        0x9,   0x3,  0x9,  0x0,  0x0,  0xa,
    0xc,   0x8,  0x9,   0x3,  0x0,  0x0,  0x1,   0x0,        0x0,   0x1,  0x1,  0x2,  0x2,  0x2,
    0x1,   0x2,  0x2,   0x2,  0x2,  0x2,  0x2,   0x1,        0x1,   0x11, 0x0,  0x8,  0x2,  0x2,
    0x1,   0x1,  0x0,   0x0,  0x0,  0x2,  0x2,   0x2,        0x2,   0x1,  0x1,  0x2,  0x2,  0x2,
    0x2,   0x2,  0x2,   0x2,  0x12, 0x2,  0x2,   0x1,        0x1,   0x2,  0x2,  0x1,  0x1,  0x2,
    0x2,   0x2,  0x2,   0x2,  0x2,  0x2,  0x9,   0x22,       0x0,   0x4,  0x2,  0x3,  0x3,  0x7,
    0x6,   0x4,  0x2,   0x2,  0x1,  0x1,  0x3,   0x3,        0x2,   0x2,  0x2,  0x2,  0x1,  0x0,
    0x4,   0x3,  0x3,   0x9,  0x6,  0x2,  0x1,   0x3,        0x2,   0x7,  0x3,  0x1,  0x28, 0x3,
    0x2,   0x2,  0x1,   0x1,  0x1,  0x1,  0x1,   0x1,        0x9,   0x3,  0x16, 0x9,  0x4,  0x16,
    0x9,   0x3,  0x16,  0x3,  0x4,  0x3,  0x1,   0x7,        0x1,   0x0,  0x1,  0x13, 0x11, 0xf,
    0x10,  0xc,  0xa,   0x0,  0xf,  0xf8, 0x1,   0x2,        0x2,   0x4,  0x3,  0x4,  0x3,  0x2,
    0x6,   0x3,  0x3,   0x2,  0x0,  0x5,  0xa1,  0x9,        0x2b,  0x0,  0x6,  0x9,  0x3,  0x0,
    0x4,   0x6,  0x2,   0x1,  0x0,  0x6,  0x0,   0x44,       0x9,   0x3,  0x1c, 0x6,  0x2,  0x1f,
    0x8,   0x3,  0x2,   0x0,  0x0,  0x0,  0x0,   0x0,        0x0,   0x0,  0x5,  0x0,  0x3,  0x0,
    0x0,   0x0,  0x0,   0x9,  0x2,  0x0,  0xb,   0x0,        0x2eb, 0x0,  0x0,  0x2,  0x2,  0x0,
    0x146, 0x3,  0x0,   0xa,  0x35, 0xf,  0x2e,  0x1a,       0x3,   0x9,  0x2,  0xa,  0x2,  0x0,
    0x4,   0x7,  0x6,   0x7,  0x7,  0x2,  0xa,   0x7,        0x7,   0x6,  0x3,  0x3,  0x7,  0x4,
    0x0,   0x4,  0x31,  0x4,  0x4,  0x0,  0x2,   0x0,        0x0,   0x0,  0x20, 0x7d, 0x3,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x5,  0x19,  0xa,        0x9,   0x2,  0x0,  0x0,  0x3,  0x2,
    0xc,   0xa,  0x0,   0x1,  0x0,  0x0,  0x0,   0x0,        0x0,   0x0,  0x0,  0x0,  0x8,  0xa,
    0x9,   0x6,  0x8,   0x6,  0x0,  0xb,  0x4e,  0x3,        0x3,   0xc,  0x9,  0x6,  0x6,  0x3,
    0x8,   0x8,  0x6,   0xd,  0xc,  0x9,  0xb,   0xc,        0xc,   0x9,  0x0,  0x60, 0xc1, 0xa,
    0x9,   0x26, 0x2,   0x2,  0x5,  0x1,  0x1,   0x6,        0x4,   0x3,  0x9,  0x6,  0x2,  0x2,
    0x2,   0x2,  0x1,   0x0,  0x1,  0x6,  0x2,   0x9,        0x0,   0x3,  0x0,  0x41, 0xa9, 0x1f,
    0x6,   0xc,  0xa2,  0x2,  0x1,  0x1,  0x2,   0x2,        0x2,   0x1,  0x1,  0x2,  0x2,  0x6,
    0x5,   0x5,  0x6,   0x5,  0x83, 0x0,  0x0,   0x0,        0x0,   0x3f, 0x3,  0x8,  0x0,  0x0,
    0x84,  0x0,  0x4,   0x4,  0x4,  0x28, 0xb,   0xbd,       0x0,   0xc,  0x0,  0x0,  0x0,  0x9,
    0x31,  0x8,  0x0,   0x1,  0x1,  0x1,  0x0,   0x7,        0x6,   0x3f, 0x7,  0x6,  0xc,  0xb,
    0x0,   0x56, 0x2f,  0x0,  0xa3, 0x16, 0x22,  0x0,        0x0,   0x1,  0x1,  0x1,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x9,  0x8,   0x0,        0x0,   0x9,  0x1,  0x0,  0x0,  0x0,
    0x0,   0x0,  0x7,   0x1b, 0x1,  0x1,  0x1,   0x1,        0x3,   0x3,  0x3,  0x3,  0x0,  0x0,
    0x0,   0x10, 0x0,   0x74, 0xb,  0x1,  0x1,   0x6,        0x0,   0x8,  0x0,  0xcd, 0xd,  0x5f,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x0,        0x0,   0x0,  0x0,  0x2,  0x1,  0x8,
    0x7,   0x6,  0x23,  0x0,  0x11, 0x2,  0x1,   0x1,        0x1,   0x9,  0x4d, 0x0,  0x7,  0x2,
    0x9,   0x2,  0x12,  0xc6, 0x7,  0x0,  0x152, 0x0,        0x5c,  0xb1, 0x22, 0x10, 0x0,  0x5,
    0x3,   0x3,  0xc,   0xc3, 0x26, 0x65, 0x0,   0x0,        0x0,   0x6,  0x3,  0x0,  0x2b, 0x0,
    0x2,   0x0,  0x0,   0x0,  0x2,  0x56, 0x0,   0x0,        0x0,   0x0,  0x1f, 0x0,  0x0,  0x0,
    0x0,   0x2,  0x2,   0x2,  0x2,  0x4,  0x3,   0x7,        0x0,   0x2,  0x2,  0x2,  0x2,  0x0,
    0x4,   0x0,  0x1,   0x3,  0x3,  0x7,  0x3,   0x8,        0x0,   0x0,  0x0,  0x0,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x0,  0x1,   0x1,        0x0,   0x0,  0x0,  0x41, 0x7,  0x55,
    0x0,   0x10, 0x79,  0x27, 0x7a, 0x9,  0x4,   0x4,        0x4,   0x0,  0x1,  0x3,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x5e, 0x1d,  0x0,        0x6,   0x0,  0x0,  0x0,  0xd,  0x5f,
    0x5,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x0,        0x0,   0x0,  0x0,  0x0,  0x0,  0x0,
    0x0,   0x0,  0x4,   0x9,  0x28, 0x3,  0x0,   0x28,       0x3,   0x0,  0x0,  0x0,  0x4,  0x0,
    0x7,   0x6,  0x0,   0x0,  0x7,  0x5,  0x2,   0x29,       0x8e,  0x4,  0x3d, 0x0,  0x26, 0x0,
    0x9,   0x2,  0x9,   0x0,  0x0,  0x89, 0xa7,  0x0,        0x5c,  0x7d, 0x0,  0x9,  0x0,  0x4f,
    0x0,   0x47, 0x1e,  0x7,  0x7,  0x7,  0x4,   0x8,        0x6,   0x6,  0x9,  0x8,  0x6,  0x8,
    0x4,   0x0,  0x0,   0xa7, 0x3e, 0x7,  0x6,   0x0,        0x0,   0x0,  0x0,  0x0,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x1f,       0x40,  0x0,  0x0,  0x4d, 0x1f, 0x2d,
    0x0,   0x0,  0x0,   0x0,  0x43, 0x0,  0x3e,  0x0,        0x40,  0x9,  0x2,  0x0,  0x1c, 0x0,
    0x1e,  0xf,  0xf,   0x6,  0x67, 0x4a, 0xc,   0x2,        0x1a,  0x0,  0x0,  0x0,  0x0,  0x0,
    0x1,   0x18, 0x5,   0x0,  0x0,  0x1,  0x6,   0x1,        0x1,   0x0,  0x0,  0xb,  0x0,  0x57,
    0x7,   0x18, 0x0,   0xdd, 0x0,  0x0,  0x0,   0x0,        0x0,   0x44, 0x0,  0x0,  0x1f, 0x10,
    0x0,   0x0,  0x0,   0x0,  0x38, 0x0,  0x2,   0x1,        0x2,   0x1,  0x2,  0x1,  0x2,  0x1,
    0x2,   0x1,  0x1,   0x1,  0x1,  0x1,  0x1,   0x1,        0x0,   0x6f, 0xd9, 0x6,  0x0,  0x16,
    0x0,   0x5d, 0x6,   0x0,  0x4,  0x62, 0x85,  0x0,        0x18,  0x0,  0x0,  0x0,  0x0,  0x99,
    0x1,   0x0,  0x0,   0x0,  0x0,  0xe,  0x0,   0x0,        0xf,   0x18, 0x1,  0x13, 0x92, 0x18,
    0x15,  0x15, 0x0,   0x1,  0x5,  0x1,  0x1,   0x0,        0x3d,  0x2,  0x64, 0x0,  0x0,  0x0,
    0x5,   0x0,  0x0,   0x0,  0x9b, 0x2d, 0x0,   0x0,        0x86,  0xf4, 0x0,  0x21, 0x7e, 0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x0,        0x0,   0x0,  0x52, 0x6f, 0x0,  0x43,
    0x2,   0x3f, 0x0,   0x9a, 0x2d, 0x0,  0x0,   0x6,        0x0,   0x0,  0x21, 0x11, 0x1,  0x0,
    0x1,   0x1,  0x1,   0x7,  0x9,  0x7,  0x0,   0x2,        0x26,  0x0,  0x0,  0x0,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x5,  0x0,   0x0,        0x20,  0x0,  0x84, 0x0,  0x0,  0x9,
    0x0,   0x1,  0x1,   0x0,  0x0,  0x1,  0x0,   0x6c,       0x0,   0x0,  0x1,  0x3,  0x3,  0x11,
    0x0,   0x10, 0x4,   0x4,  0x3,  0x3,  0xf,   0x38,       0x0,   0x12, 0x0,  0x0,  0x0,  0xc,
    0x62,  0x63, 0x9,   0x0,  0x0,  0x41, 0x28,  0x0,        0x1,   0x6,  0x1,  0x1,  0x1,  0x1,
    0x1f,  0x0,  0x0,   0x0,  0x5,  0x0,  0x1,   0x6,        0x0,   0x0,  0x6,  0x0,  0x1,  0x0,
    0x0,   0x0,  0x0,   0x31, 0x3,  0x2,  0x0,   0x4,        0x19,  0x8,  0x0,  0x3,  0x0,  0x15,
    0x14,  0x0,  0x8,   0x0,  0x19, 0x4,  0x1c,  0x12,       0xb0,  0x9,  0x1a, 0x8,  0x9,  0x16,
    0x3,   0x9,  0x8,   0x0,  0x80, 0x2,  0xe0,  0x0,        0x45,  0x1b, 0x31, 0x0,  0x28, 0x0,
    0x9,   0x3,  0x0,   0x19, 0xa,  0x38, 0x0,   0x17,       0x1f,  0x1,  0x1,  0x1,  0x18, 0x17,
    0x17,  0x17, 0x17,  0x17, 0x6,  0x17, 0x13,  0x0,        0x5,   0x0,  0x0,  0x0,  0x5,  0x0,
    0x6,   0x5,  0x2,   0x0,  0x0,  0x9,  0x6,   0x0,        0x0,   0x0,  0x5,  0x1c, 0x19, 0x19,
    0x10,  0x0,  0x0,   0x0,  0x0,  0x0,  0x7,   0x5,        0x5,   0x33, 0x3d, 0x48, 0x4e, 0x50,
    0x31,  0x46, 0x0,   0x0,  0x0,  0x0,  0x1,   0x7c,       0x3,   0x11, 0x5,  0x5,  0x0,  0x4,
    0x0,   0x77, 0x6,   0x0,  0x2,  0x3,  0x5,   0x0,        0x0,   0x3c, 0xe,  0x1,  0x4,  0x28,
    0x0,   0x9,  0x39,  0x1d, 0x4,  0x1b, 0x4f,  0x5,        0x8d,  0x28, 0x6,  0x52, 0x4f, 0x5,
    0x28,  0x6,  0x7,   0x8,  0x7,  0x7,  0x6,   0x28,       0x20,  0x80, 0x21, 0x1b, 0x30, 0x24,
    0x7,   0xb2, 0x22,  0x6,  0x6,  0x5,  0x0,   0xa,        0x0,   0x81, 0x6,  0x39, 0x46, 0x89,
    0x44,  0x1a, 0x17,  0x11, 0x0,  0x0,  0x1f,  0x2,        0x8,   0xc0, 0x0,  0x7,  0x3,  0x3,
    0x32,  0x11, 0x11,  0x5,  0xe,  0xf,  0x8,   0xa,        0x5,   0x5,  0x3,  0x0,  0xf,  0xf,
    0x8,   0x0,  0x9d,  0x0,  0x7,  0x0,  0x0,   0x0,        0x0,   0x58, 0x1,  0x13, 0x5,  0x5,
    0x5,   0x3,  0x0,   0x56, 0x27, 0x0,  0x0,   0x1b,       0x61,  0xec, 0xa0, 0x1f, 0x2,  0x1e,
    0x0,   0x0,  0x1,   0xd,  0xc,  0x6,  0x35,  0x44,       0x2,   0x13, 0x0,  0x1,  0x0,  0x8,
    0x0,   0x2,  0x2,   0x6,  0x0,  0x0,  0x0,   0x0,        0x0,   0x0,  0x0,  0x0,  0x0,  0x3,
    0x3,   0x0,  0x0,   0x0,  0x0,  0x0,  0x7e,  0x6,        0x0,   0x0,  0x8,  0x8,  0x18, 0x0,
    0x7,   0x1,  0x1,   0x1,  0x1,  0x1,  0x1,   0x1,        0x1,   0x1,  0x1,  0x1,  0x1,  0x1,
    0x1,   0x1,  0x1,   0x5,  0x6,  0x0,  0x5,   0x1,        0x0,   0x1,  0x0,  0x1,  0x0,  0x1,
    0x0,   0x1,  0x0,   0x1,  0x0,  0x1,  0x0,   0x1,        0x0,   0x0,  0x0,  0x6,  0x0,  0x8,
    0x0,   0x0,  0x0,   0x0,  0x24, 0x0,  0x0,   0x0,        0x6,   0x4,  0x8,  0x5,  0x0,  0x4,
    0x1e,  0x8,  0x0,   0x5c, 0xf,  0x0,  0x3e,  0x41,       0x7,   0x0,  0x0,  0x48, 0x8,  0x7,
    0x7,   0x5,  0x3c,  0x6,  0x0,  0x5c, 0xa2,  0x1d,       0x6,   0x5,  0x7a, 0x6,  0x39, 0x6,
    0x0,   0x29, 0x37,  0x8,  0x9,  0x8,  0x12,  0x44,       0x6,   0x0,  0x3e, 0x8,  0x20, 0x81,
    0x2f,  0x24, 0x20,  0x1c, 0x0,  0xa,  0x0,   0x1,        0x1,   0x69, 0x13, 0xdd, 0x0,  0x0,
    0xa,   0x0,  0xa,   0x1,  0xa,  0x22, 0x22,  0x0,        0x0,   0x0,  0x0,  0x37, 0x18, 0x1d,
    0x6a,  0x8c, 0x19,  0x8c, 0x1e, 0x71, 0xb,   0x79,       0x29,  0x0,  0x6,  0x0,  0x2,  0x1,
    0x1,   0x2,  0x1,   0x3,  0x1,  0x2,  0x1,   0x6,        0x1,   0x1,  0x1,  0x0,  0x0,  0xb,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x24, 0x49,  0xb,        0x0,   0x0,  0xf,  0x0,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x0,        0x11,  0xb,  0x0,  0x7,  0x8,  0x0,
    0x5,   0x0,  0x9,   0x9,  0x4,  0x2,  0x4,   0x2,        0xc4,  0x49, 0x5,  0x4,  0x2,  0x4,
    0x2,   0x4,  0x2,   0x2,  0x2,  0x2,  0x2,   0x2,        0x2,   0x2,  0x2,  0x0,  0x0,  0x0,
    0x1,   0x0,  0x88,  0x0,  0x4,  0x4,  0x7,   0x7,        0xc,   0x3,  0xf,  0x1b, 0x8,  0x4f,
    0x2,   0x4,  0x9,   0x9,  0x9,  0x9,  0x3,   0x28,       0x0,   0x8,  0x2,  0x4a, 0x5,  0x4e,
    0x3,   0xc,  0x8,   0x53, 0x0,  0x0,  0xc,   0x20,       0x0,   0x0,  0x0,  0x0,  0x6,  0x6,
    0x55,  0x0,  0x0,   0x4b, 0x0,  0x0,  0x40,  0x6,        0x3b,  0x6,  0x0,  0x6,  0x0,  0x0,
    0x65,  0x2,  0x3,   0x4,  0x5,  0x1,  0x0,   0x0,        0xb1,  0x4b, 0x37, 0x0,  0x0,  0x7,
    0x0,   0x34, 0x3,   0x1e, 0x0,  0x8,  0x4,   0x6,        0x2,   0x3,  0x6,  0x4,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x4,  0x8,  0x7,   0x6,        0x8,   0x3,  0x23, 0x0,  0x9,  0x4,
    0x0,   0x0,  0x0,   0x0,  0x8,  0x7,  0x6,   0x8,        0x8,   0x4b, 0x0,  0x0,  0xbb, 0x10,
    0x7,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x0,        0x3,   0x2,  0x3,  0x3,  0x3,  0x0,
    0x0,   0x0,  0x2,   0x0,  0x4,  0x1,  0x4,   0x0,        0x1,   0x5e, 0x0,  0x9,  0xf,  0x4,
    0xa,   0x0,  0xa,   0xa,  0x3,  0x0,  0x6,   0x4,        0x5,   0x6,  0x6,  0x1,  0x5d, 0x13,
    0x3,   0x13, 0x56,  0x9,  0x0,  0x0,  0x4,   0x0,        0x1,   0xf,  0x24, 0x41, 0x0,  0x0,
    0x7,   0x64, 0x4,   0x30, 0x26, 0x5,  0x62,  0x3,        0x0,   0x0,  0x0,  0x0,  0x0,  0x0,
    0x0,   0x1,  0x1,   0x1,  0x0,  0x0,  0x0,   0x0,        0x0,   0x3,  0x2,  0x0,  0x38, 0x1,
    0x6,   0x6,  0x5,   0x93, 0x0,  0x53, 0x1,   0x7,        0x8,   0x9,  0xb,  0x1,  0x6,  0x5,
    0x3,   0x3,  0x1,   0x1,  0x1,  0x3,  0x3,   0x6,        0x6,   0x5,  0x4,  0x2,  0x2,  0xb,
    0x9,   0x4,  0x4,   0x3,  0x3,  0x6,  0x4,   0x5,        0x4,   0x3,  0x2,  0x0,  0x0,  0x2,
    0x5,   0x2,  0x10,  0x0,  0x77, 0x0,  0x4,   0x2,        0x4,   0x2,  0x5,  0x8,  0x8,  0xb,
    0x7,   0x7,  0x5,   0x7,  0x6,  0x6,  0x6,   0x6,        0x6,   0x1e, 0x25, 0x1e, 0x0,  0xd,
    0x6,   0x3,  0x0,   0x1f, 0x0,  0x21, 0x21,  0x0,        0x0,   0x0,  0x1,  0x2,  0x0,  0x1,
    0x4,   0x1,  0x5,   0x3,  0x0,  0x5,  0x15,  0x1,        0x5,   0x2,  0x6,  0x1,  0x9,  0x4,
    0x4,   0x0,  0x4,   0x0,  0x4,  0x0,  0x1,   0x1,        0x0,   0x1,  0x1,  0x1,  0x2,  0x2,
    0x3,   0x4,  0x0,   0x2,  0x3,  0x3,  0x2,   0x1,        0x1,   0x1,  0x1,  0x1,  0x1,  0x1,
    0x1,   0x1,  0xb,   0x8,  0xd,  0xa,  0x7,   0x7,        0x5,   0x9,  0x9,  0x9,  0xa,  0xa,
    0x5,   0x4,  0x0,   0x0,  0x0,  0x0,  0x2,   0x3,        0x1,   0x4,  0x2,  0x2,  0x6,  0x2,
    0x3,   0x3,  0x4,   0x1,  0x1,  0x1,  0x7,   0x7,        0x3,   0x0,  0x3,  0x5,  0x1,  0x5,
    0x5,   0x4,  0x4,   0x4,  0x4,  0x4,  0x3,   0x3,        0x5,   0x5,  0x4,  0x4,  0x4,  0x3,
    0x4,   0x4,  0x5,   0x5,  0x2,  0x3,  0x7,   0x7,        0x7,   0x7,  0xd,  0x5,  0x5,  0x2,
    0x3,   0x2,  0x5,   0x3,  0x2,  0x5,  0x3,   0x2,        0x1,   0x1,  0x1,  0x4,  0x4,  0x4,
    0x3,   0x4,  0x3,   0x4,  0x3,  0x2,  0x4,   0xe,        0x6,   0x14, 0x6,  0xa,  0xb,  0x6,
    0x6,   0x6,  0x6,   0x5,  0x3,  0x4,  0x7,   0x4,        0x7,   0x4,  0x5,  0x9,  0x5,  0x3,
    0x3,   0x4,  0x4,   0x9,  0x9,  0x3,  0x1,   0x0,        0x2,   0x1,  0xe,  0x0,  0x0,  0x5,
    0x5,   0x5,  0x5,   0x5,  0x5,  0x5,  0x5,   0x5,        0x5,   0x5,  0x5,  0x5,  0x3,  0x1,
    0x3,   0x3,  0x3,   0x3,  0x3,  0x2,  0x1,   0x0,        0x0,   0x0,  0x0,  0x2,  0x0,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x0,  0x0,   0x2,        0x3f,  0x0,  0x4,  0x4,  0x8,  0x0,
    0x0,   0x0,  0x1,   0x1,  0x5,  0x8,  0x10c, 0x5,        0x0,   0x12, 0xc,  0x1e, 0x2,  0x0,
    0x52,  0x14, 0x0,   0x3,  0x0,  0x0,  0x2,   0x2,        0x5,   0x5,  0x16, 0x6c, 0x2,  0x1,
    0x1,   0x2,  0x0,   0x5,  0x0,  0x8,  0x0,   0x2,        0x0,   0x0,  0x0,  0x2,  0x1,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x2d, 0x0,   0xd,        0x7,   0x0,  0x0,  0x0,  0x4,  0x12,
    0x2,   0x1,  0x5,   0x5,  0x5,  0x4,  0x4,   0x4,        0x5,   0x5,  0x0,  0x6,  0x1,  0x1,
    0x0,   0x1,  0x1,   0x0,  0x2,  0x2,  0x2,   0x9,        0xa,   0x0,  0x0,  0x0,  0x1e, 0x25,
    0x3b,  0xa,  0x4d,  0xd,  0x40, 0x8,  0x38,  0x2,        0x42,  0xa,  0x4b, 0x5,  0x2d, 0x50,
    0x16,  0x0,  0x58,  0x13, 0x55, 0x7,  0x3e,  0x2,        0xf,   0x3,  0x1,  0x2,  0x1,  0x3,
    0x3,   0x3,  0x3,   0x3,  0x3,  0x1,  0x2,   0x1,        0x1,   0x0,  0x5,  0x2f, 0x2b, 0x23,
    0x2f,  0x0,  0x0,   0x15, 0x5,  0x18, 0x6,   0x0,        0x1,   0x3,  0x2,  0x1,  0x4,  0x4,
    0x3,   0x6,  0x6,   0x5,  0x3,  0x1,  0x6,   0x1,        0x1,   0x1,  0x0,  0x0,  0x0,  0x7c,
    0x1,   0x6,  0x9b,  0x1,  0x5,  0x36, 0x30,  0x43,       0x44,  0x7,  0x3,  0x62, 0x0,  0x3,
    0x1c,  0x71, 0x1,   0x0,  0x2,  0x4c, 0x6,   0xc,        0x1c,  0x15, 0x1,  0x0,  0x2,  0x2,
    0x2,   0xe,  0x4,   0x2,  0x1,  0x5,  0x3,   0x1,        0x3,   0x4,  0x1,  0x2,  0x4,  0x3,
    0x4,   0x0,  0x6,   0x6,  0x5,  0x0,  0x3,   0x0,        0x1,   0x1,  0x1,  0x11, 0x30, 0x46,
    0x11,  0x1,  0x5,   0x2,  0xc,  0x4,  0x0,   0x0,        0x3,   0x13, 0x3,  0x5,  0x3,  0x3,
    0x0,   0x65, 0xb,   0x0,  0x8d, 0x0,  0x2,   0x3,        0x2,   0x2,  0x2,  0x1,  0x1,  0x1,
    0x1,   0x3,  0x23,  0x71, 0x0,  0x1,  0x1,   0x0,        0x4e,  0x16, 0xd,  0xd,  0x6,  0x5,
    0x6,   0x6,  0x0,   0x3b, 0x4,  0x4,  0x1,   0x1,        0x1,   0x1,  0x1,  0x3,  0x2,  0x1,
    0x1,   0x1,  0x3,   0x0,  0x1a, 0x10, 0x10,  0xa,        0x0,   0xa,  0x1,  0x2,  0x1,  0x1,
    0x1,   0x1,  0x1,   0x1,  0x1,  0x1,  0x16,  0x0,        0x0,   0x0,  0x0,  0x0,  0x3,  0x0,
    0x1,   0x1,  0x0,   0x0,  0x0,  0xc,  0x3,   0x0,        0x7,   0x5,  0x3,  0x3,  0x0,  0x0,
    0x1,   0x0,  0x0,   0x0,  0x0,  0x6,  0x0,   0x1b,       0x3,   0x0,  0x16, 0x0,  0x5,  0x1,
    0x0,   0x6,  0x4,   0x1,  0x2,  0x4e, 0x6e,  0x1f,       0x6,   0x9,  0x2,  0x6,  0xd,  0xcd,
    0x8b,  0x9c, 0x13,  0x64, 0xa,  0x3b, 0x1,   0x0,        0x0,   0x0,  0x0,  0x1,  0x12, 0x38,
    0x10,  0x5d, 0xb,   0x15, 0xbb, 0x2e, 0x6,   0x3,        0xa,   0x1,  0x20, 0x56, 0x0,  0x5,
    0x1,   0x11, 0x0,   0x8,  0x8,  0x0,  0xd0,  0x0,        0x6,   0x0,  0x77, 0x5,  0x56, 0x8,
    0x0,   0xb,  0x2,   0x3,  0x1,  0x1,  0xc,   0x1,        0x5,   0x1,  0x2,  0x1,  0xb1, 0x2,
    0x2,   0xd,  0x2,   0x2,  0x2,  0x2,  0x1,   0x4d,       0x2,   0x2,  0x2,  0x2,  0x2,  0x0,
    0x88,  0x4,  0x19,  0x0,  0x31, 0xb,  0x15,  0x17,       0x1,   0x2,  0x1,  0x2,  0x5,  0xc,
    0x8,   0x2,  0xe,   0x0,  0x1,  0xe,  0x4,   0x0,        0xa,   0x0,  0x0,  0xe,  0x1,  0x1,
    0x10,  0x10, 0x11,  0x11, 0xd,  0xe,  0x9,   0x1,        0x0,   0x0,  0x0,  0x0,  0xc,  0xe,
    0x2,   0x2,  0x6,   0x0,  0xc,  0x57, 0x4,   0x1,        0x1,   0x1,  0x1e, 0x5a, 0x38, 0x0,
    0x0,   0x14, 0xa,   0x6,  0x6,  0x7,  0x1,   0x6,        0x1,   0x7,  0x5,  0x9,  0x3,  0x0,
    0x0,   0x2,  0x1,   0xa,  0xb,  0x7b, 0x4,   0x5,        0x13,  0x1,  0x7,  0x1,  0x1,  0x1,
    0x1,   0x1,  0x1,   0x1f, 0x5,  0x0,  0x0,   0x0,        0x3,   0x3,  0xe,  0x46, 0x0,  0x73,
    0x0,   0x56, 0x0,   0x1e, 0x0,  0x38, 0x0,   0x4,        0x4,   0x4,  0x2,  0x3,  0x3,  0x4,
    0x4,   0x4,  0x8,   0xa,  0x7,  0x3,  0x6,   0x5,        0x1,   0x1,  0x1,  0x1,  0x69, 0x1,
    0x4,   0x3f, 0x0,   0x60, 0x35, 0xc,  0x3,   0x3,        0x9,   0x33, 0xb,  0x3,  0x4,  0x8,
    0x4,   0x3,  0x1,   0x7,  0x7,  0x1d, 0x1c,  0x1d,       0x39,  0x0,  0x3,  0x87, 0x5,  0x0,
    0x0,   0x0,  0x1,   0x1,  0xd,  0x7,  0x2,   0x9,        0x0,   0x23, 0xb,  0xb,  0x2,  0xb,
    0x5,   0x19, 0xb,   0x13, 0x0,  0x0,  0x0,   0x0,        0x0,   0x1,  0x7,  0x1,  0xd,  0x0,
    0x0,   0x0,  0x13,  0x4,  0x1,  0x6,  0xb,   0x3,        0x2,   0x1c, 0x2,  0x6,  0x9,  0x0,
    0x0,   0x5,  0xa,   0x28, 0x5,  0x0,  0x0,   0x3,        0x0,   0x0,  0x0,  0x0,  0x0,  0x2,
    0x0,   0x0,  0x20,  0x8,  0x0,  0x8,  0x0,   0x0,        0x0,   0x0,  0x0,  0x0,  0x0,  0x1c,
    0xf,   0x2,  0xf,   0x5,  0x1,  0x1,  0x1,   0x0,        0x0,   0x0,  0x0,  0x0,  0x0,  0x2,
    0x0,   0x0,  0x1,   0x3,  0x12, 0x1,  0x0,   0x0,        0x0,   0x0,  0x0,  0x0,  0x1,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x0,  0x3,  0x2,   0x3d,       0x0,   0x86, 0xa,  0x5c, 0x3,  0x14,
    0x10,  0x0,  0x0,   0x0,  0x5,  0x5,  0x5,   0x5,        0x5,   0x5,  0x0,  0x1,  0x0,  0x1,
    0x1c,  0xf,  0x2,   0xf,  0x5,  0x34, 0x2,   0x3,        0x1,   0x3,  0x9,  0x0,  0xf,  0x13,
    0x2,   0x6,  0x6,   0x2,  0x0,  0x7,  0x1,   0x2,        0x10,  0x0,  0x1,  0x2,  0x1,  0x1,
    0x0,   0x0,  0xf,   0x2,  0x12, 0x1,  0x8,   0x4,        0x0,   0x5,  0x3,  0x5,  0x3,  0x0,
    0xe,   0xd,  0x2,   0x7f, 0x1,  0x0,  0x14,  0x0,        0x31,  0x2,  0x1,  0x9,  0x1,  0x0,
    0x0,   0x0,  0x0,   0x0,  0x32, 0x0,  0x0,   0x1,        0x4,   0x4e, 0x6f, 0x37, 0xe2, 0x3,
    0x21,  0x1,  0x101, 0x54, 0x7,  0x0,  0x2,   0x9,        0x5a,  0x6,  0xd0, 0x0,  0x20, 0x1,
    0x7,   0x0,  0x3,   0x97, 0x48, 0x0,  0x4,   0xa,        0x0,   0x0,  0x0,  0x0,  0x0,  0x0,
    0x8,   0x0,  0x1,   0x16, 0x96, 0x9,  0x44,  0x9,        0x23,  0x1,  0x51, 0x0,  0x0,  0x2,
    0x8b,  0x88, 0xa,   0x1,  0x4,  0x4,  0xf,   0x0,        0x6,   0x2a, 0x2,  0xb,  0x5,  0x19,
    0xa,   0x3,  0x3,   0x3,  0xc,  0x0,  0x6,   0x0,        0x1,   0x0,  0x0,  0x0,  0x0,  0x2f,
    0x1,   0x1,  0x0,   0x0,  0x4,  0x30, 0x9d,  0xe2,       0x4d,  0x32, 0x6b, 0x16, 0x1,  0x65,
    0x1,   0x83, 0x0,   0x1,  0x1,  0x5,  0x5,   0x33,       0x0,   0xb,  0x67, 0x28, 0x11, 0x31,
    0x0,   0x5a, 0x6,   0x2,  0x2,  0x9,  0xa,   0x5,        0x5,   0x2,  0x2,  0x2,  0x4,  0x18,
    0x2,   0x0,  0x0,   0x0,  0x0,  0xc,  0x0,   0x8,        0x0,   0x0,  0x6,  0xa,  0x10, 0x1,
    0x0,   0x3,  0x0,   0x3,  0x3,  0x3,  0x3,   0x14,       0x1,   0x1,  0x7,  0x22, 0x2,  0x7,
    0x1,   0x4,  0x9,   0x1,  0x1,  0x6,  0xd,   0x14,       0x6,   0x8,  0x0,  0x0,  0x14, 0x0,
    0x0,   0x11, 0x0,   0x3,  0x3,  0xa,  0x3,   0x3,        0x0,   0x7,  0x3,  0x8,  0x0,  0x1,
    0x3,   0x8,  0x3,   0x4,  0x4,  0x4,  0x0,   0x0,        0x24,  0xc,  0x5,  0x3,  0x8,  0x7,
    0x1e,  0x2d, 0x25,  0x1,  0x57, 0x5,  0x4,   0x2,        0x4,   0x0,  0x4,  0x0,  0x0,  0x0,
    0x0,   0x3,  0x0,   0x36, 0x2,  0xd,  0x1,   0x7,        0xd,   0x63, 0xe,  0x0,  0x63, 0xb,
    0xa,   0x4,  0x6,   0xb,  0x9,  0x3f, 0x9,   0x0,        0x31,  0x5,  0x1,  0xb,  0x0,  0x0,
    0x25,  0x1,  0x2,   0xa,  0x40, 0x3,  0x0,   0x3f,       0x83,  0x7,  0x2f, 0x0,  0x28, 0x5,
    0x23,  0x0,  0x3b,  0x10, 0x1,  0xa,  0x0,   0x68,       0x1,   0x2,  0x6,  0x45, 0x15, 0x1,
    0x32,  0x5,  0x4c,  0x0,  0x0,  0x0,  0x0,   0xe,        0xf,   0x1,  0x1,  0x1,  0x1,  0x83,
    0x0,   0x7c, 0x5,   0x15, 0x32, 0x8,  0x1f,  0x1c,       0x20,  0x24, 0x1f, 0x2b, 0x1b, 0x2,
    0x20,  0x19, 0x3d,  0x3d, 0x30, 0x30, 0x20,  0x3a,       0x3a,  0x19, 0x20, 0x2a, 0x41, 0x0,
    0x42,  0x27, 0x20,  0x1b, 0x20, 0x2f, 0x1c,  0x1b,       0x1c,  0x2b, 0x1b, 0x1b, 0x27, 0x2a,
    0x1b,  0x33, 0x2b,  0x20, 0x20, 0x2b, 0x19,  0x45,       0x2b,  0x51, 0x1f, 0x1,  0x47, 0x47,
    0x1f,  0x2f, 0x2f,  0x3,  0x27, 0x5,  0x5,   0x5,        0x4,   0x4,  0x3,  0x4,  0x4,  0x4,
    0x7,   0x0,  0x1,   0x2,  0x0,  0x79, 0x5,   0x33,       0x12,  0x1,  0x27, 0x8,  0x1,  0x1,
    0x18,  0x12, 0x1,   0x16, 0x0,  0xd,  0x14,  0x1,        0x8,   0x2,  0x0,  0x20, 0x0,  0xb,
    0x2,   0x0,  0x0,   0x8,  0xb,  0x15, 0x3,   0x4,        0x2,   0x0,  0x0,  0x5,  0x7,  0x0,
    0x4,   0x4,  0x1,   0x3,  0x7,  0x2,  0x0,   0x1,        0x1,   0x29, 0xc,  0x60, 0x2,  0x13,
    0x0,   0x0,  0x3,   0x9,  0x26, 0x2,  0x2,   0x7,        0x3,   0x1,  0x0,  0x0,  0x0,  0x0,
    0x0,   0x1,  0x1,   0x6,  0x1,  0x0,  0x0,   0x3,        0x0,   0x14, 0x1,  0x2,  0x1,  0x1,
    0x97,  0x3,  0x2,   0x11, 0x12, 0x1,  0x0,   0x0,        0x12,  0x1,  0x1,  0x34, 0x2,  0x1,
    0x2,   0xa,  0x33,  0x3,  0x1,  0x13, 0x0,   0x1,        0x0,   0x0,  0x2,  0x7,  0x1,  0x2,
    0x2,   0x7,  0x1,   0x2,  0xc,  0x2,  0x5,   0x2,        0x2,   0x0,  0x2,  0x5,  0x0,  0x3,
    0x1,   0x1,  0x2,   0x1,  0x2,  0x3,  0x2,   0x5,        0x3,   0x2,  0x2,  0x2,  0x0,  0x1,
    0x1,   0xe,  0x1,   0x1d, 0x0,  0x21, 0x21,  0x4,        0x3,   0x3,  0x2,  0x18, 0x49, 0x3,
    0x2,   0x12, 0x2,   0x56, 0x1,  0x2,  0x12,  0x46,       0x4,   0x1,  0x12, 0x2,  0x5,  0x5,
    0x2,   0x2,  0x1,   0x5,  0x1,  0x2,  0x1,   0x1,        0x3,   0x17, 0x0,  0x2,  0x2,  0x2,
    0x3,   0x2,  0xb,   0x4,  0x3,  0x0,  0x3,   0x3,        0x0,   0x1,  0x0,  0x0,  0x0,  0x0,
    0x1,   0x3,  0xb,   0x1,  0x0,  0x5,  0x2,   0x3,        0x3,   0x1,  0x1,  0x8,  0x1,  0x5,
    0x0,   0x0,  0x1,   0x1,  0x0,  0x0,  0x2,   0x2,        0x2,   0x2,  0x1,  0x9,  0x1,  0x5,
    0x11,  0x3,  0xc,   0x1,  0x6,  0x6,  0x7,   0x3,        0x1,   0x1,  0x7,  0x5,  0x4,  0x4,
    0x3,   0x2,  0x5,   0x4,  0x5,  0x4,  0x6,   0x4,        0x11,  0x11, 0x8,  0x10, 0x3,  0x9,
    0xa,   0x6,  0x1,   0x5,  0x0,  0x0,  0x2,   0x2e,       0x15,  0x0,  0x2,  0x3,  0x0,  0x0,
    0x1,   0x0,  0x2,   0x10, 0x1,  0x3,  0x18,  0x0,        0x2,   0x6,  0x9,  0x2,  0x2,  0x2,
    0x6,   0x4,  0x0,   0x2,  0x11, 0x6,  0x12e,
    EXTRA_PC_PORT_TEXTURE_COUNT
};
// note, there is a weird /*0x7fff0000*/ at the end that I removed
}

const std::vector<u32>& get_jak2_tpage_dir() {
  return tpage_dir;
}