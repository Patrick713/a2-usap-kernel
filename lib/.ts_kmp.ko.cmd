cmd_lib/ts_kmp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/ts_kmp.ko lib/ts_kmp.o lib/ts_kmp.mod.o;  true
