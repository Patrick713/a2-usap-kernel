cmd_drivers/mfd/wl1273-core.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/mfd/wl1273-core.ko drivers/mfd/wl1273-core.o drivers/mfd/wl1273-core.mod.o;  true