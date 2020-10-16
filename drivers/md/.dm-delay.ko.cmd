cmd_drivers/md/dm-delay.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/dm-delay.ko drivers/md/dm-delay.o drivers/md/dm-delay.mod.o;  true
