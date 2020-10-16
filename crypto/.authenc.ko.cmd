cmd_crypto/authenc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/authenc.ko crypto/authenc.o crypto/authenc.mod.o;  true
