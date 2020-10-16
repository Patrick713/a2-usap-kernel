cmd_crypto/algif_hash.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/algif_hash.ko crypto/algif_hash.o crypto/algif_hash.mod.o;  true
