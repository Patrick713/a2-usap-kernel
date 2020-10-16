cmd_crypto/zstd.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/zstd.ko crypto/zstd.o crypto/zstd.mod.o;  true
