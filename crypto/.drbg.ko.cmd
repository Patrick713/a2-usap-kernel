cmd_crypto/drbg.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/drbg.ko crypto/drbg.o crypto/drbg.mod.o;  true
