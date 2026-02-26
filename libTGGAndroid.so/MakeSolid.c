long MakeSolid(int* param0) {
    int v0 = *param0;
    return (uint64_t)((((uint16_t)(((uint64_t)((uint32_t)(uint8_t)__ror__(v0, 8) * 101 + 128) * 0x80808081L) >>> 32L) * 2) & 0xff00) | (uint16_t)(((uint64_t)((uint32_t)(uint8_t)v0 * 112 + 128) * 0x80808081L) >>> 39L)) | ((uint64_t)(((((((uint64_t)((uint32_t)(uint8_t)__ror__(v0, 16) * 86 + 128) * 0x80808081L) >>> 23L) & &gDraw3DData+79f6a8h) | (uint64_t)((uint32_t)(((uint64_t)((uint16_t)(v0 >>> 24) * 0xff + 128) * 0x80808081L) >>> 39L) * 0x1000000)) >>> 16L) & 0xffffffffffffL) << 16);
}
