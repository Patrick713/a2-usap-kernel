cmd_drivers/md/dm-log.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/dm-log.ko drivers/md/dm-log.o drivers/md/dm-log.mod.o;  true
