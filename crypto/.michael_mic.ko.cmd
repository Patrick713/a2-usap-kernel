cmd_crypto/michael_mic.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/michael_mic.ko crypto/michael_mic.o crypto/michael_mic.mod.o;  true
