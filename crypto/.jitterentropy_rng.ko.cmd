cmd_crypto/jitterentropy_rng.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/jitterentropy_rng.ko crypto/jitterentropy_rng.o crypto/jitterentropy_rng.mod.o;  true
