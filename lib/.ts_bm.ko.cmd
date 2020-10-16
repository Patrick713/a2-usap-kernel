cmd_lib/ts_bm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/ts_bm.ko lib/ts_bm.o lib/ts_bm.mod.o;  true
