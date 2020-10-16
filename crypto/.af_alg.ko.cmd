cmd_crypto/af_alg.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/af_alg.ko crypto/af_alg.o crypto/af_alg.mod.o;  true
