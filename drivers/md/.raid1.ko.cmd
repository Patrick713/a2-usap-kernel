cmd_drivers/md/raid1.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/raid1.ko drivers/md/raid1.o drivers/md/raid1.mod.o;  true
