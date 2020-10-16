cmd_drivers/md/raid10.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/raid10.ko drivers/md/raid10.o drivers/md/raid10.mod.o;  true
