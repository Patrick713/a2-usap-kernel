cmd_drivers/md/md-mod.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/md/md-mod.ko drivers/md/md-mod.o drivers/md/md-mod.mod.o;  true
