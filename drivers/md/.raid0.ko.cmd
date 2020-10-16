cmd_drivers/md/raid0.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/raid0.ko drivers/md/raid0.o drivers/md/raid0.mod.o;  true
