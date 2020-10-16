cmd_crypto/authencesn.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o crypto/authencesn.ko crypto/authencesn.o crypto/authencesn.mod.o;  true
