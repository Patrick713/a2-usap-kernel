cmd_crypto/gf128mul.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/gf128mul.ko crypto/gf128mul.o crypto/gf128mul.mod.o;  true
