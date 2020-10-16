cmd_crypto/algif_rng.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/algif_rng.ko crypto/algif_rng.o crypto/algif_rng.mod.o;  true
