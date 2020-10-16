cmd_crypto/lz4.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/lz4.ko crypto/lz4.o crypto/lz4.mod.o;  true
