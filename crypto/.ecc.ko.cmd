cmd_crypto/ecc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/ecc.ko crypto/ecc.o crypto/ecc.mod.o;  true
