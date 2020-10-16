cmd_crypto/crypto_simd.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/crypto_simd.ko crypto/crypto_simd.o crypto/crypto_simd.mod.o;  true
