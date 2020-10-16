cmd_crypto/seqiv.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/seqiv.ko crypto/seqiv.o crypto/seqiv.mod.o;  true
