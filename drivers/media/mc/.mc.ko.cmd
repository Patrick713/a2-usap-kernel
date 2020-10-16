cmd_drivers/media/mc/mc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/mc/mc.ko drivers/media/mc/mc.o drivers/media/mc/mc.mod.o;  true
