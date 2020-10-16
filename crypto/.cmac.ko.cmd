cmd_crypto/cmac.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/cmac.ko crypto/cmac.o crypto/cmac.mod.o;  true
