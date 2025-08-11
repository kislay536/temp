#include <svdpi.h>
#include <iostream>
#include <cstdint>

// DPI-C entry point
extern "C" void dpi_key_expand(const svBitVecVal* key,
                               svBitVecVal* s0,
                               svBitVecVal* s1,
                               svBitVecVal* s2,
                               svBitVecVal* s3,
                               svBitVecVal* s4,
                               svBitVecVal* s5,
                               svBitVecVal* s6,
                               svBitVecVal* s7,
                               svBitVecVal* s8,
                               svBitVecVal* s9,
                               svBitVecVal* s10) {
    // Print the key input (128 bits = 4 x 32 bits)
    std::cout << "DPI: Key input = ";
    for (int i = 3; i >= 0; i--) {
        std::cout << std::hex << key[i];
    }
    std::cout << std::endl;

    // Fill outputs with dummy data
    for (int i = 0; i < 4; ++i) {
        s0[i]  = 0x100 + i;
        s1[i]  = 0x200 + i;
        s2[i]  = 0x300 + i;
        s3[i]  = 0x400 + i;
        s4[i]  = 0x500 + i;
        s5[i]  = 0x600 + i;
        s6[i]  = 0x700 + i;
        s7[i]  = 0x800 + i;
        s8[i]  = 0x900 + i;
        s9[i]  = 0xA00 + i;
        s10[i] = 0xB00 + i;
    }
}
