cmd_drivers/w1/masters/ds1wm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/w1/masters/ds1wm.ko drivers/w1/masters/ds1wm.o drivers/w1/masters/ds1wm.mod.o;  true
