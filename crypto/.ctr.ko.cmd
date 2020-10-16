cmd_crypto/ctr.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/ctr.ko crypto/ctr.o crypto/ctr.mod.o;  true
