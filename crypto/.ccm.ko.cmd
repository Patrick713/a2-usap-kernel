cmd_crypto/ccm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/ccm.ko crypto/ccm.o crypto/ccm.mod.o;  true
