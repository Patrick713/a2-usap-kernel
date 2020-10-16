cmd_lib/ts_fsm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o lib/ts_fsm.ko lib/ts_fsm.o lib/ts_fsm.mod.o;  true
