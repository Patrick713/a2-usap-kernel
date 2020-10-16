cmd_lib/xxhash.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/xxhash.ko lib/xxhash.o lib/xxhash.mod.o;  true
