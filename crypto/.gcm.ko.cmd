cmd_crypto/gcm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/gcm.ko crypto/gcm.o crypto/gcm.mod.o;  true
